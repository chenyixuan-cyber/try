// sentry_eval_bt/src/bt_nodes.cpp

#include <cmath>
#include <string>
#include <vector>

#include "bt_nodes.h"

using namespace std::chrono_literals;

//=======================================================
// InitPoints
//=======================================================
BT::PortsList InitPoints::providedPorts()
{
  return {BT::InputPort<std::string>("points_param")};
}

BT::NodeStatus InitPoints::tick()
{
  auto &ctx = BtRosContext::instance();
  if (!ctx.node) throw BT::RuntimeError("InitPoints: ROS node not set");

  static bool initialized = false;
  if (initialized) return BT::NodeStatus::SUCCESS;

  std::string points_param_name;
  getInput("points_param", points_param_name);

  if (!ctx.node->has_parameter(points_param_name)) {
    ctx.node->declare_parameter(points_param_name, std::vector<double>{});
  }
  auto flat = ctx.node->get_parameter(points_param_name).as_double_array();

  if (flat.size() % 3 != 0 || flat.empty()) {
    RCLCPP_ERROR(ctx.node->get_logger(), "InitPoints: points 必须是 3*N");
    return BT::NodeStatus::FAILURE;
  }

  if (!ctx.node->has_parameter("loop_points")) {
    ctx.node->declare_parameter("loop_points", true);
  }
  if (!ctx.node->has_parameter("stop_on_last")) {
    ctx.node->declare_parameter("stop_on_last", false);
  }

  ctx.points.clear();
  for (size_t i = 0; i < flat.size(); i += 3) {
    geometry_msgs::msg::PoseStamped p;
    p.header.frame_id = "map";
    p.pose.position.x = flat[i];
    p.pose.position.y = flat[i + 1];
    double yaw = flat[i + 2] * M_PI / 180.0;
    p.pose.orientation.z = std::sin(yaw / 2.0);
    p.pose.orientation.w = std::cos(yaw / 2.0);
    ctx.points.push_back(p);
  }

  ctx.current_index = 0;
  ctx.loop_count = 0;
  ctx.loop_points = ctx.node->get_parameter("loop_points").as_bool();
  ctx.stop_on_last = ctx.node->get_parameter("stop_on_last").as_bool();

  RCLCPP_INFO(
      ctx.node->get_logger(),
      "InitPoints: loaded %zu points, loop_points=%s, stop_on_last=%s",
      ctx.points.size(),
      ctx.loop_points ? "true" : "false",
      ctx.stop_on_last ? "true" : "false");
  initialized = true;
  return BT::NodeStatus::SUCCESS;
}

//=======================================================
// NextPoint
//=======================================================
BT::PortsList NextPoint::providedPorts()
{
  return {
    BT::OutputPort<geometry_msgs::msg::PoseStamped>("goal"),
    BT::OutputPort<size_t>("idx"),
    BT::OutputPort<bool>("is_last")
  };
}

BT::NodeStatus NextPoint::tick()
{
  auto &ctx = BtRosContext::instance();
  if (ctx.points.empty()) return BT::NodeStatus::FAILURE;

  if (ctx.current_index >= ctx.points.size()) {
    if (!ctx.loop_points) {
      RCLCPP_INFO(ctx.node->get_logger(), "NextPoint: 所有点已跑完，任务结束！");
      ctx.current_index = 0;
      return BT::NodeStatus::FAILURE;
    }

    ctx.current_index = 0;
    ++ctx.loop_count;
    RCLCPP_INFO(
        ctx.node->get_logger(),
        "NextPoint: 完成第 %zu 轮，回到起点继续循环",
        ctx.loop_count);
  }

  size_t idx = ctx.current_index;
  auto goal = ctx.points[idx];
  goal.header.stamp = ctx.node->now();
  const bool stop_on_this_point = ctx.stop_on_last && (idx == ctx.points.size() - 1);

  setOutput("goal", goal);
  setOutput("idx", idx);
  setOutput("is_last", stop_on_this_point);
  ctx.current_index++;

  RCLCPP_INFO(
      ctx.node->get_logger(),
      "NextPoint: 当前目标 P%zu/%zu -> (%.2f, %.2f)%s",
      idx, ctx.points.size(),
      goal.pose.position.x, goal.pose.position.y,
      stop_on_this_point ? " [末点停车]" : "");

  return BT::NodeStatus::SUCCESS;
}

//=======================================================
// CheckDistance
//=======================================================
BT::PortsList CheckDistance::providedPorts()
{
  return {
    BT::InputPort<geometry_msgs::msg::PoseStamped>("goal"),
    BT::InputPort<double>("threshold", 0.5, "Distance threshold"),
    BT::InputPort<double>("final_threshold", 0.3, "Final point threshold"),
    BT::InputPort<bool>("is_last"),
    BT::InputPort<size_t>("idx")
  };
}

BT::NodeStatus CheckDistance::onStart()
{
  return BT::NodeStatus::RUNNING;
}

BT::NodeStatus CheckDistance::onRunning()
{
  auto &ctx = BtRosContext::instance();
  if (!ctx.tf_buffer) return BT::NodeStatus::FAILURE;

  if (!ctx.vel_pub && ctx.node) {
    ctx.vel_pub = ctx.node->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 100);
  }

  geometry_msgs::msg::PoseStamped goal;
  double xml_threshold = 0.5;
  if (!getInput("goal", goal)) return BT::NodeStatus::FAILURE;
  getInput("threshold", xml_threshold);

  double final_xml_threshold = 0.3;
  getInput("final_threshold", final_xml_threshold);

  try {
    geometry_msgs::msg::TransformStamped t;
    t = ctx.tf_buffer->lookupTransform("map", "base_link", tf2::TimePointZero);

    double dx = goal.pose.position.x - t.transform.translation.x;
    double dy = goal.pose.position.y - t.transform.translation.y;
    double dist = std::sqrt(dx * dx + dy * dy);

    bool is_last_point = false;
    getInput("is_last", is_last_point);
    double effective_threshold = xml_threshold;

    if (is_last_point) {
      effective_threshold = final_xml_threshold;
    }

    if (dist < effective_threshold) {
      if (is_last_point) {
        RCLCPP_WARN(ctx.node->get_logger(), "🛑 到达终点 (%.2fm) -> 触发强制急刹！", dist);
        if (ctx.vel_pub) {
          geometry_msgs::msg::Twist stop_msg;
          stop_msg.linear.x = 0.0;
          stop_msg.linear.y = 0.0;
          stop_msg.angular.z = 0.0;
          ctx.vel_pub->publish(stop_msg);
          ctx.vel_pub->publish(stop_msg);
          ctx.vel_pub->publish(stop_msg);
        }
      } else {
        RCLCPP_INFO(ctx.node->get_logger(),
                    "\n>>> [到达 P%zu] 距离 %.2fm (阈值 %.2f) <<<\n",
                    static_cast<size_t>(0), dist, effective_threshold);
      }
      return BT::NodeStatus::SUCCESS;
    }
    return BT::NodeStatus::RUNNING;
  }
  catch (const tf2::TransformException &) {
    return BT::NodeStatus::RUNNING;
  }
}

void CheckDistance::onHalted() {}

//=======================================================
// SendNav2Goal
//=======================================================
BT::PortsList SendNav2Goal::providedPorts()
{
  return {BT::InputPort<geometry_msgs::msg::PoseStamped>("goal")};
}

BT::NodeStatus SendNav2Goal::onStart()
{
  internal_state_ = InternalState::IDLE;

  nav_result_ready_ = false;
  nav_succeeded_ = false;

  active_goal_id_ = ++seq_;
  goal_handle_.reset();

  auto &ctx = BtRosContext::instance();
  RCLCPP_INFO(ctx.node->get_logger(), "🚩 [Goal %lu] onStart", active_goal_id_);

  auto clock_type = ctx.node->get_clock()->get_clock_type();
  last_attempt_time_ = rclcpp::Time(0, 0, clock_type);
  last_vis_time_ = rclcpp::Time(0, 0, clock_type);

  if (!getInput("goal", current_goal_)) {
    RCLCPP_ERROR(ctx.node->get_logger(), "❌ 无法获取 goal 输入");
    return BT::NodeStatus::FAILURE;
  }
  if (current_goal_.header.frame_id.empty()) {
    current_goal_.header.frame_id = "map";
  }

  return BT::NodeStatus::RUNNING;
}

BT::NodeStatus SendNav2Goal::onRunning()
{
  auto &ctx = BtRosContext::instance();
  auto now = ctx.node->now();

  if (nav_result_ready_) {
    return nav_succeeded_ ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
  }

  if (!ctx.client->action_server_is_ready()) {
    if ((now - last_attempt_time_).seconds() > 2.0) {
      RCLCPP_WARN(ctx.node->get_logger(), "⚠️ Nav2 Action Server 未连接，正在等待...");
      last_attempt_time_ = now;
    }
    return BT::NodeStatus::RUNNING;
  }

  switch (internal_state_)
  {
  case InternalState::IDLE:
  case InternalState::REJECTED: {
    const uint64_t this_goal_id = active_goal_id_;
    if ((now - last_attempt_time_).seconds() < 0.2) {
      return BT::NodeStatus::RUNNING;
    }

    RCLCPP_INFO(ctx.node->get_logger(),
                "🚀 [尝试发送] -> (%.2f, %.2f) ...",
                current_goal_.pose.position.x, current_goal_.pose.position.y);

    current_goal_.header.stamp = now;
    if (ctx.vis_pub) ctx.vis_pub->publish(current_goal_);

    NavigateToPose::Goal goal_msg;
    goal_msg.pose = current_goal_;

    auto send_goal_options = rclcpp_action::Client<NavigateToPose>::SendGoalOptions();

    send_goal_options.goal_response_callback =
        [this, logger = ctx.node->get_logger(), goal_id = this_goal_id]
        (const rclcpp_action::ClientGoalHandle<NavigateToPose>::SharedPtr &handle)
    {
      if (goal_id != active_goal_id_) {
        RCLCPP_WARN(logger, "⚠️ [Goal %lu] 过期的 goal_response，忽略", goal_id);
        return;
      }
      if (!handle) {
        RCLCPP_ERROR(logger, "❌ [Goal %lu] 被 Nav2 拒绝", goal_id);
        internal_state_ = InternalState::REJECTED;
      } else {
        goal_handle_ = handle;
        RCLCPP_INFO(logger, "✅ [Goal %lu] Nav2 接收成功", goal_id);
        internal_state_ = InternalState::ACCEPTED;
      }
    };

    send_goal_options.result_callback =
        [this, logger = ctx.node->get_logger(), goal_id = this_goal_id]
        (const rclcpp_action::ClientGoalHandle<NavigateToPose>::WrappedResult &result)
    {
      if (goal_id != active_goal_id_) {
        RCLCPP_WARN(logger,
                    "⚠️ [Goal %lu] 收到迟到结果, 当前活动 goal=%lu, 忽略",
                    goal_id, active_goal_id_);
        return;
      }

      nav_result_ready_ = true;

      switch (result.code)
      {
        case rclcpp_action::ResultCode::SUCCEEDED:
          nav_succeeded_ = true;
          RCLCPP_INFO(logger, "✅ [Goal %lu] 到达成功", goal_id);
          break;

        case rclcpp_action::ResultCode::ABORTED:
          nav_succeeded_ = true;
          RCLCPP_WARN(logger, "⚠️ [Goal %lu] 被中止 -> 跳过当前点", goal_id);
          break;

        case rclcpp_action::ResultCode::CANCELED:
          nav_succeeded_ = true;
          if (goal_id == canceled_by_bt_goal_id_) {
            RCLCPP_INFO(logger, "ℹ️ [Goal %lu] 因 BT 切点取消", goal_id);
          } else {
            RCLCPP_WARN(logger, "⚠️ [Goal %lu] 被外部取消 -> 继续下一个点", goal_id);
          }
          break;

        default:
          nav_succeeded_ = false;
          RCLCPP_WARN(logger, "⚠️ [Goal %lu] 未知结果码", goal_id);
          break;
      }
    };

    ctx.client->async_send_goal(goal_msg, send_goal_options);
    internal_state_ = InternalState::SENDING;
    last_attempt_time_ = now;
    break;
  }

  case InternalState::SENDING: {
    double wait_time = (now - last_attempt_time_).seconds();
    if (wait_time > 1.0) {
      RCLCPP_WARN(ctx.node->get_logger(),
                  "⏰ [超时] 等待 Nav2 响应 %.1fs 无果，强制重发！", wait_time);
      internal_state_ = InternalState::IDLE;
    }
    break;
  }

  case InternalState::ACCEPTED:
    if ((now - last_vis_time_).seconds() > 0.5) {
      if (ctx.vis_pub) {
        current_goal_.header.stamp = now;
        ctx.vis_pub->publish(current_goal_);
      }
      last_vis_time_ = now;
    }
    break;
  }

  return BT::NodeStatus::RUNNING;
}

void SendNav2Goal::onHalted()
{
  auto &ctx = BtRosContext::instance();

  if (ctx.client && goal_handle_) {
    canceled_by_bt_goal_id_ = active_goal_id_;
    RCLCPP_WARN(ctx.node->get_logger(), "✂️ [Goal %lu] 取消当前 goal", active_goal_id_);
    ctx.client->async_cancel_goal(goal_handle_);
    goal_handle_.reset();
  }
  internal_state_ = InternalState::IDLE;
}
