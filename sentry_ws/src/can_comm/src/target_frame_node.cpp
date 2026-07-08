#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/string.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <nav2_msgs/action/navigate_to_pose.hpp>

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <tf2/LinearMath/Quaternion.h>

#include <cmath>
#include <mutex>
#include <string>

using namespace std::chrono_literals;
using NavigateToPose = nav2_msgs::action::NavigateToPose;
using GoalHandleNav = rclcpp_action::ClientGoalHandle<NavigateToPose>;

class TargetFrameNode : public rclcpp::Node
{
public:
    TargetFrameNode() : Node("target_frame_node"),
     tf_buffer_(this->get_clock()),
     tf_listener_(tf_buffer_, this)
    {
        //参数声明，获取和赋值
        this->declare_parameter<std::string>("target_frame", "target_frame");
        this->declare_parameter<std::string>("base_frame", "base_frame");
        this->declare_parameter<std::string>("map_frame", "map");
        this->declare_parameter<std::string>("odom_frame", "odom");
        this->declare_parameter<std::string>("base_link_frame", "base_link");
        this->declare_parameter<std::string>("target_pose_topic", "/detected_target_pose");
        this->declare_parameter<std::string>("planner_name_topic", "planner_name");
        this->declare_parameter<double>("publish_rate", 50.0);
        this->declare_parameter<bool>("auto_navigate", true);
        
        target_frame_ = this->get_parameter("target_frame").as_string();
        base_frame_ = this->get_parameter("base_frame").as_string();
        map_frame_ = this->get_parameter("map_frame").as_string();
        odom_frame_ = this->get_parameter("odom_frame").as_string();
        base_link_frame_ = this->get_parameter("base_link_frame").as_string();
        target_pose_topic_ = this->get_parameter("target_pose_topic").as_string();
        planner_name_topic_ = this->get_parameter("planner_name_topic").as_string();
        auto_navigate_ = this->get_parameter("auto_navigate").as_bool();
        
        double publish_rate_ = this->get_parameter("publish_rate").as_double();
        if (publish_rate_ <= 0.0){publish_rate_ = 50.0;}

        //发布和订阅
        target_pose_pub_ = this->create_publisher<geometry_msgs::msg::PoseStamped>(
            "/target_pose_map", 10);

        //订阅话题
        target_pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
            target_pose_topic_, 10,
            [this](const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
                RCLCPP_DEBUG(this->get_logger(), "Received target pose");
            });
        tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);

        yaw_sub_ = this->create_subscription<std_msgs::msg::Float32>(
            "target_yaw", 10,
            [this](const std_msgs::msg::Float32::SharedPtr msg) {
                std::lock_guard<std::mutex> lock(yaw_mutex_);
                target_yaw_ = msg->data;
            });

        pitch_sub_ = this->create_subscription<std_msgs::msg::Float32>(
            "target_pitch", 10,
            [this](const std_msgs::msg::Float32::SharedPtr msg) {
                std::lock_guard<std::mutex> lock(pitch_mutex_);
                target_pitch_ = msg->data;
            });

        distance_sub_ = this->create_subscription<std_msgs::msg::Float32>(
            "target_distance", 10,
            [this](const std_msgs::msg::Float32::SharedPtr msg) {
                std::lock_guard<std::mutex> lock(distance_mutex_);
                target_distance_ = msg->data;
            });

        //planer监听切换
        planer_name_sub_ = this->create_subscription<std_msgs::msg::String>(
            planner_name_topic_, 10,
            [this](const std_msgs::msg::String::SharedPtr m) {
                auto prev = current_planner_;
                current_planner_ = m->data;
                RCLCPP_INFO(this->get_logger(), "Planner switched → %s", m->data.c_str());

                if (m->data == "ElasticTracker") {
                tryAutoNavigate();
                } else if (prev == "ElasticTracker" && nav_goal_handle_) {
                // 切离 ElasticTracker → 取消追踪
                RCLCPP_INFO(this->get_logger(), "Cancel tracking, planner switched away from ElasticTracker");
                nav_action_client_->async_cancel_goal(nav_goal_handle_);
                nav_goal_handle_.reset();
                nav_goal_active_ = false;
                }
    });
        

        const auto freq_ = std::max(1.0, publish_rate_);
        const auto period = static_cast<int>( 1000000000.0 / freq_);

        timer_ = this->create_wall_timer(
            std::chrono::nanoseconds(period),
            std::bind(&TargetFrameNode::onTimer, this));

        RCLCPP_INFO(this->get_logger(),
        "target_frame node started | tf: %s→%s | pose_topic: %s @ %.1f Hz",
         base_frame_.c_str(), target_frame_.c_str(), target_pose_topic_.c_str(), freq);
    }

private:
    //角度转换函数
    static double deg2rad(double deg) { return deg * M_PI / 180.0; }
    //角度归一化函数
    static double clamp_angle(double deg) {
        while (deg > 180.0) deg -= 360.0;
        while (deg < -180.0) deg += 360.0;
        return deg; 
    }
    //
    void onTimer()
    {
        float yaw_deg, pitch_deg, distance;
        {
            std::lock_guard<std::mutex> lock1(yaw_mutex_);
            std::lock_guard<std::mutex> lock2(pitch_mutex_);
            std::lock_guard<std::mutex> lock3(distance_mutex_);
            yaw_deg = target_yaw_;
            pitch_deg = target_pitch_;
            distance = target_distance_;
        }

        const double pitch_rad = deg2rad(pitch_deg);

        const double real_distance = distance * std::cos(pitch_rad);
        
        // yaw: 输入0°=base_link后方 → 加180°换到base_link前向基准，右手定则
        const double corrected_yaw_deg = clamp_angle(static_cast<double>(yaw_deg) + 180.0);
        const double corrected_yaw_rad = deg2rad(corrected_yaw_deg);

        // 计算目标点在base_link坐标系下的x,y,z
        const double x_base = real_distance * std::cos(corrected_yaw_rad);
        const double y_base = real_distance * std::sin(corrected_yaw_rad);
        const double z_base = distance * std::sin(pitch_rad);

        //发布base_link→target_frame的tf
        geometry_msgs::msg::TransformStamped transform_stamped;
        geometry_msgs::msg::TransformStamped tf;
        tf.header.stamp = this->now();
        tf.header.frame_id = base_frame_;
        tf.child_frame_id = target_frame_;
        tf.transform.translation.x = x_base;
        tf.transform.translation.y = y_base;
        tf.transform.translation.z = z_base;
        tf.transform.rotation.x = 0.0;
        tf.transform.rotation.y = 0.0;
        tf.transform.rotation.z = 0.0;
        tf.transform.rotation.w = 1.0;
        tf_broadcaster_->sendTransform(tf);

        // 转换到 map 系并发布 PoseStamped
        geometry_msgs::msg::PoseStamped pose_in_base;
        pose_in_base.header.frame_id = base_frame_;
        pose_in_base.header.stamp = this->now();
        pose_in_base.pose.position.x = x_base;
        pose_in_base.pose.position.y = y_base;
        pose_in_base.pose.position.z = z_base;
        pose_in_base.pose.orientation.x = 0.0;
        pose_in_base.pose.orientation.y = 0.0;
        pose_in_base.pose.orientation.z = 0.0;
        pose_in_base.pose.orientation.w = 1.0;
        
        //
        try {
            auto pose_in_map = tf_buffer_.transform(pose_in_base, map_frame_, 
                tf2::durationFromSec(0.1));
            pose_in_map.header.stamp = this->now();
            target_pose_pub_->publish(pose_in_map);
        } 
         catch (tf2::TransformException &ex) {
            RCLCPP_WARN_THROTTLE(
        this->get_logger(), *this->get_clock(), 1000,
        "TF transform failed (%s→%s): %s",
        base_frame_.c_str(), map_frame_.c_str(), ex.what());
        }
    }

private:
    std::string target_frame_;
    std::string base_frame_;
    std::string map_frame_;
    std::string odom_frame_;
    std::string base_link_frame_;
    std::string target_pose_topic_;
    bool auto_navigate_;
    double publish_rate_;

    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr target_pose_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr yaw_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr pitch_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr distance_sub_;

    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr target_pose_pub_;

    std::mutex yaw_mutex_;
    std::mutex pitch_mutex_;
    std::mutex distance_mutex_;

    float target_yaw_ = 0.0f;
    float target_pitch_ = 0.0f;
    float target_distance_ = 0.0f;

    tf2_ros::Buffer tf_buffer_;
    tf2_ros::TransformListener tf_listener_;
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;

    rclcpp::TimerBase::SharedPtr timer_;

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TargetFrameNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}