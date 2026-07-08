#include <rclcpp/logging.hpp>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/float32.hpp>

#include <fcntl.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cstring>
#include <chrono>
#include <iostream>
#include <cstdint>
#include <memory>
#include <string>
#include <mutex>

using namespace std::chrono_literals;

class CanReceiver : public rclcpp::Node 
{
public:
    CanReceiver() : Node("can_receive") 
    {
        //参数声明，获取和赋值
        this->declare_parameter<std::string>("port", "can0");
        this->declare_parameter<int>("can_id", 0x180);
        this->declare_parameter<std::string>("yaw_topic", "/target_yaw");
        this->declare_parameter<std::string>("pitch_topic", "/target_pitch");
        this->declare_parameter<std::string>("distance_topic", "/target_distance");
        this->declare_parameter<double>("publish_rate", 50.0);

        std::string port = this->get_parameter("port").as_string();
        int can_id = this->get_parameter("can_id").as_int();
        std::string yaw_topic = this->get_parameter("yaw_topic").as_string();
        std::string pitch_topic = this->get_parameter("pitch_topic").as_string();
        std::string distance_topic = this->get_parameter("distance_topic").as_string();
        double publish_rate = this->get_parameter("publish_rate").as_double();
        if(publish_rate <= 0.0){publish_rate = 50.0;}

        //创建发布者
        yaw_pub_ = this->create_publisher<std_msgs::msg::Float32>(yaw_topic, 10);
        pitch_pub_ = this->create_publisher<std_msgs::msg::Float32>(pitch_topic, 10);
        distance_pub_ = this->create_publisher<std_msgs::msg::Float32>(distance_topic, 10);

        //打开CAN接口
        stock_fd_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
        if (stock_fd_ < 0)
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to create socket");
            rclcpp::shutdown();
            return;
        }

        //绑定CAN接口
        struct ifreq ifr;
        std::strncpy(ifr.ifr_name, port.c_str(), IFNAMSIZ - 1);
        if (ioctl(stock_fd_, SIOCGIFINDEX, &ifr) < 0)
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to get interface index for %s", port.c_str());
            rclcpp::shutdown();
            return;
        }
        
        //绑定套接字
        struct sockaddr_can addr;
        addr.can_family = AF_CAN;
        addr.can_ifindex = ifr.ifr_ifindex;
        if (bind(stock_fd_, (struct sockaddr *)&addr, sizeof(addr)) < 0)
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to bind socket");
            rclcpp::shutdown();
            return;
        }

        //设置CAN过滤器
        struct can_filter filter;
        filter.can_id = can_id;
        filter.can_mask = CAN_SFF_MASK;
        if (setsockopt(stock_fd_, SOL_CAN_RAW, CAN_RAW_FILTER, &filter, sizeof(filter)) < 0)
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set CAN filter");
            rclcpp::shutdown();
            return;
        }

        //创建定时器
        const auto period = std::chrono::nanoseconds(static_cast<int>(1000000000.0 / publish_rate));
        timer_ = this->create_wall_timer(period,
            std::bind(&CanReceiver::timer_callback, this));
        last_log_time_ = this->now();
        RCLCPP_INFO(this->get_logger(), "CAN receiver node started on port %s with CAN ID 0x%X", port.c_str(), can_id);
    }

    ~CanReceiver() 
    {
        if (stock_fd_ >= 0) 
        {
            close(stock_fd_);
        }
    }

private:
    void timer_callback()
    {
        if (stock_fd_ < 0){return;}
        
        struct can_frame frame;
        ssize_t nbytes = read(stock_fd_, &frame, sizeof(frame));
        if (nbytes <= 0){return;}
        if (nbytes < sizeof(struct can_frame)){return;}
        if (nbytes != CAN_MTU){return;}
        if (frame.can_id & (CAN_EFF_FLAG|CAN_ERR_FLAG)){return;}
        if (frame.can_dlc < 6){
            RCLCPP_WARN_THROTTLE(
                this->get_logger(), *this->get_clock(),5000,
                "Received CAN frame with insufficient data length: %d", frame.can_dlc);
            return;
        }

    // 解析 yaw:   bytes[0]=高8位, bytes[1]=低8位 → int16_t → /100 → float
        // 解析 pitch: bytes[2]=高8位, bytes[3]=低8位 → int16_t → /100 → float
        // 解析 dist:  bytes[4]=高8位, bytes[5]=低8位 → int16_t → /100 → float
        int16_t yaw_raw = static_cast<int16_t>((static_cast<uint16_t>(frame.data[0]) << 8) |
                                                static_cast<uint16_t>(frame.data[1]));
        int16_t pitch_raw = static_cast<int16_t>((static_cast<uint16_t>(frame.data[2]) << 8) |
                                                  static_cast<uint16_t>(frame.data[3]));
        int16_t distance_raw = static_cast<int16_t>((static_cast<uint16_t>(frame.data[4]) << 8) |
                                                     static_cast<uint16_t>(frame.data[5]));

        float yaw = static_cast<float>(yaw_raw) / 100.0f;
        float pitch = static_cast<float>(pitch_raw) / 100.0f;
        float distance = static_cast<float>(distance_raw) / 100.0f;

    // 发布消息
        auto yaw_msg = std::make_unique<std_msgs::msg::Float32>();
        yaw_msg->data = yaw;
        yaw_pub_->publish(std::move(yaw_msg));

        auto pitch_msg = std::make_unique<std_msgs::msg::Float32>();
        pitch_msg->data = pitch;
        pitch_pub_->publish(std::move(pitch_msg));

        auto distance_msg = std::make_unique<std_msgs::msg::Float32>();
        distance_msg->data = distance;
        distance_pub_->publish(std::move(distance_msg));

        //频率日志
        freq_count_++;
        auto now = this->now();
        double elapsed = (now - last_log_time_).seconds();
        if (elapsed >= 1.0)
        {
            double freq = static_cast<double>(freq_count_) / elapsed;
            RCLCPP_INFO(this->get_logger(), "Received CAN messages frequency: %.2f Hz", freq);
            last_log_time_ = now;
            freq_count_ = 0;
        }
    }

private:
    int stock_fd_{-1};
    
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr yaw_pub_;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr pitch_pub_;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr distance_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Time last_log_time_;

    size_t freq_count_{0};
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<CanReceiver>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}