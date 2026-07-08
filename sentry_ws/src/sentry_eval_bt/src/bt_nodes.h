// sentry_eval_bt/src/bt_nodes.h

#ifndef SENTRY_EVAL_BT__BT_NODES_H_
#define SENTRY_EVAL_BT__BT_NODES_H_

#include <memory>
#include <vector>

#include "behaviortree_cpp_v3/behavior_tree.h"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"

#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"

using NavigateToPose = nav2_msgs::action::NavigateToPose;

//-------------------------------------------------------
// 全局上下文（单例）
//-------------------------------------------------------
struct BtRosContext
{
  rclcpp::Node::SharedPtr node;
  rclcpp_action::Client<NavigateToPose>::SharedPtr client;

  // 可视化发布者
  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr vis_pub;

  // 速度发布者（用于末点急刹）
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr vel_pub;

  // TF 监听器
  std::shared_ptr<tf2_ros::Buffer> tf_buffer;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener;

  // 路点数据
  std::vector<geometry_msgs::msg::PoseStamped> points;
  size_t current_index{0};
  size_t loop_count{0};
  bool loop_points{true};
  bool stop_on_last{false};

  static BtRosContext &instance()
  {
    static BtRosContext ctx;
    return ctx;
  }
};

//=======================================================
// InitPoints：初始化路点
//=======================================================
class InitPoints : public BT::SyncActionNode
{
public:
  InitPoints(const std::string &name, const BT::NodeConfiguration &config)
      : BT::SyncActionNode(name, config) {}

  static BT::PortsList providedPorts();
  BT::NodeStatus tick() override;
};

//=======================================================
// NextPoint：获取当前目标点
//=======================================================
class NextPoint : public BT::SyncActionNode
{
public:
  NextPoint(const std::string &name, const BT::NodeConfiguration &config)
      : BT::SyncActionNode(name, config) {}

  static BT::PortsList providedPorts();
  BT::NodeStatus tick() override;
};

//=======================================================
// CheckDistance：检查距离
//=======================================================
class CheckDistance : public BT::StatefulActionNode
{
public:
  CheckDistance(const std::string &name, const BT::NodeConfiguration &config)
      : BT::StatefulActionNode(name, config) {}

  static BT::PortsList providedPorts();
  BT::NodeStatus onStart() override;
  BT::NodeStatus onRunning() override;
  void onHalted() override;
};

//=======================================================
// SendNav2Goal：发送目标
//=======================================================
class SendNav2Goal : public BT::StatefulActionNode
{
public:
  SendNav2Goal(const std::string &name, const BT::NodeConfiguration &config)
      : BT::StatefulActionNode(name, config) {}

  static BT::PortsList providedPorts();
  BT::NodeStatus onStart() override;
  BT::NodeStatus onRunning() override;
  void onHalted() override;

  enum class InternalState { IDLE, SENDING, ACCEPTED, REJECTED };

private:
  geometry_msgs::msg::PoseStamped current_goal_;
  InternalState internal_state_{InternalState::IDLE};
  rclcpp::Time last_attempt_time_;
  rclcpp::Time last_vis_time_;

  bool nav_result_ready_{false};
  bool nav_succeeded_{false};
  rclcpp_action::ClientGoalHandle<NavigateToPose>::SharedPtr goal_handle_;
  uint64_t canceled_by_bt_goal_id_{0};
  uint64_t active_goal_id_{0};
  uint64_t seq_{0};
};

#endif  // SENTRY_EVAL_BT__BT_NODES_H_
