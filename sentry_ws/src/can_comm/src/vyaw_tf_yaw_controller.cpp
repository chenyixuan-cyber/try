#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/float32.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>

#include <cmath>
#include <string>
#include <chrono>

using namespace std::chrono_literals;

class VyawTfYawController : public rclcpp::Node
{
public:
    VyawTfYawController() : Node("vyaw_tf_yaw_controller"),
     tf_buffer_(this->get_clock()), 
     tf_listener_(tf_buffer_, this)
    {
        //参数声明，获取和赋值
        this->declare_parameter<std::string>("base_frame", "base_link");
        this->declare_parameter<std::string>("map_frame", "map");
        this->declare_parameter<std::string>("target_yaw_topic", "/target_yaw");
        this->declare_parameter<double>("publish_rate", 50.0);
        this->declare_parameter<double>("target_x", 0.0);
        this->declare_parameter<double>("target_y", 10.0);

        base_frame_ = this->get_parameter("base_frame").as_string();
        map_frame_ = this->get_parameter("map_frame").as_string();
        target_frame_ = this->get_parameter("target_yaw_topic").as_string();
        double publish_rate = this->get_parameter("publish_rate").as_double();
        if (publish_rate <= 0.0) { publish_rate = 50.0; }
        target_x_ = this->get_parameter("target_x").as_double();
        target_y_ = this->get_parameter("target_y").as_double();

        //发布和订阅
        target_yaw_pub_ = this->create_publisher<std_msgs::msg::Float32>(target_frame_, 10);
        
        //创建定时器
        const auto freq = std::max(1.0, publish_rate);
        const auto period = std::chrono::duration<double>(1.0 / freq);
        timer_ = this->create_wall_timer(
        std::chrono::duration_cast<std::chrono::nanoseconds>(period),
        std::bind(&VyawTfYawController::onTimer, this));

        active_ = true;

        RCLCPP_INFO(this->get_logger(),
        "vyaw_tf_yaw_controller node started | base_frame: %s | map_frame: %s | target_yaw_topic: %s @ %.1f Hz | target: (%.1f, %.1f)",
        base_frame_.c_str(), map_frame_.c_str(), target_frame_.c_str(), freq, target_x_, target_y_);
    }
    ~VyawTfYawController() override 
    {
        if(active_){publishTargetYaw(0.0);}
    }
private:
    static double rad2deg(double rad) { return rad * 180.0 / M_PI; }

    void publishTargetYaw(double yaw_deg)
    {
        std_msgs::msg::Float32 yaw_msg;
        yaw_msg.data = static_cast<float>(yaw_deg);
        target_yaw_pub_->publish(yaw_msg);
    }

    bool lookupCurrentPoseMap(double &x_out , double &y_out, double &yaw_out)
    {
        try {
            geometry_msgs::msg::TransformStamped transformStamped = 
                tf_buffer_.lookupTransform(map_frame_, base_frame_, tf2::TimePointZero);
            x_out = transformStamped.transform.translation.x;
            y_out = transformStamped.transform.translation.y;
            double roll, pitch, yaw;
            tf2::Matrix3x3(tf2::Quaternion(
                transformStamped.transform.rotation.x,
                transformStamped.transform.rotation.y,
                transformStamped.transform.rotation.z,
                transformStamped.transform.rotation.w)).getRPY(roll, pitch, yaw);
            yaw_out = yaw;
            return true;
        } catch (tf2::TransformException &ex) {
            RCLCPP_WARN_THROTTLE(
                this->get_logger(), *this->get_clock(), 1000,
                "TF transform failed (%s→%s): %s",
                map_frame_.c_str(), base_frame_.c_str(), ex.what());
            return false;
        }
    }

    double computeTargetYawDeg(const double base_x_map, const double base_y_map)
  {
    // atan2 直接给出地图坐标系下的绝对朝向角，区间 [-π, π]
    const double target_yaw_rad = std::atan2(target_y_ - base_y_map, target_x_ - base_x_map);
    return rad2deg(target_yaw_rad);
  }

  void onTimer()
    {
        if(!active_){return;}
        
        double base_x_map = 0.0, base_y_map = 0.0, base_yaw_map = 0.0;
        if(!lookupCurrentPoseMap(base_x_map, base_y_map, base_yaw_map)){return;}

        if(!has_target_yaw)
        {
            target_yaw_ = computeTargetYawDeg(base_x_map, base_y_map);
            has_target_yaw = true;
            RCLCPP_INFO(this->get_logger(), "Computed target yaw: %.2f degrees", target_yaw_);
        }

        publishTargetYaw(target_yaw_);
    }

private:
    std::string base_frame_;
    std::string map_frame_;
    std::string target_frame_;

    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr target_yaw_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

    tf2_ros::Buffer tf_buffer_;
    tf2_ros::TransformListener tf_listener_;

    bool active_ = false;
    bool has_target_yaw = false;
    double target_x_ = 0.0;
    double target_y_ = 0.0;
    double target_yaw_ = 0.0;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<VyawTfYawController>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}