// sentry_eval_bt/src/bt_runner.cpp

#include <memory>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "behaviortree_cpp_v3/bt_factory.h"
#include "behaviortree_cpp_v3/xml_parsing.h"
#include "behaviortree_cpp_v3/loggers/bt_zmq_publisher.h"

#include "ament_index_cpp/get_package_share_directory.hpp"

// BT 节点声明
#include "bt_nodes.h"

using namespace std::chrono_literals;

class PubPointBTNode : public rclcpp::Node
{
public:
  PubPointBTNode()
      : Node("sentry_eval_bt_node")
  {
    auto &ctx = BtRosContext::instance();

    ctx.client = rclcpp_action::create_client<NavigateToPose>(this, "navigate_to_pose");
    ctx.vis_pub = this->create_publisher<geometry_msgs::msg::PoseStamped>("/bt_target_goal", 10);

    RCLCPP_INFO(get_logger(), "Waiting for Nav2 action server...");
    while (!ctx.client->wait_for_action_server(std::chrono::seconds(2))) {
        if (!rclcpp::ok()) return;
        RCLCPP_WARN(get_logger(), "Nav2 Action Server not available, waiting...");
    }
    RCLCPP_INFO(get_logger(), "Nav2 Action Server is ready.");

    ctx.tf_buffer = std::make_shared<tf2_ros::Buffer>(this->get_clock());
    ctx.tf_listener = std::make_shared<tf2_ros::TransformListener>(*ctx.tf_buffer);

    BT::BehaviorTreeFactory factory;
    factory.registerNodeType<InitPoints>("InitPoints");
    factory.registerNodeType<NextPoint>("NextPoint");
    factory.registerNodeType<SendNav2Goal>("SendNav2Goal");
    factory.registerNodeType<CheckDistance>("CheckDistance");

    std::string xml_path = this->declare_parameter<std::string>(
        "bt_xml",
        ament_index_cpp::get_package_share_directory("sentry_eval_bt") +
            std::string("/config/waypoints_bt.xml"));

    RCLCPP_INFO(get_logger(), "Loading BT XML: %s", xml_path.c_str());
    tree_ = factory.createTreeFromFile(xml_path);

    try {
      publisher_zmq_ = std::make_shared<BT::PublisherZMQ>(tree_, 1919, 1920);
      RCLCPP_INFO(get_logger(), "BT ZMQ publisher started on ports 1919 (pub) / 1920 (server)");
    } catch (const std::exception &e) {
      RCLCPP_ERROR(get_logger(), "Failed to start BT ZMQ publisher: %s", e.what());
    }

    timer_ = create_wall_timer(100ms, [this]() {
      auto status = tree_.tickRoot();
      if (status == BT::NodeStatus::SUCCESS || status == BT::NodeStatus::FAILURE) {
        RCLCPP_INFO(get_logger(), "Task ended (status: %s), stopping!", BT::toStr(status).c_str());
        this->timer_->cancel();
      }
    });
  }

private:
  BT::Tree tree_;
  std::shared_ptr<BT::PublisherZMQ> publisher_zmq_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<PubPointBTNode>();
  BtRosContext::instance().node = node;
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
