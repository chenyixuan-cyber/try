#include <rclcpp/rclcpp.hpp>
#include <rclcpp/qos.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/bool.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <sentry_msgs/msg/vw.hpp>
#include <sentry_msgs/msg/scan_mode.hpp>

#include <linux/can.h>
#include <linux/can/raw.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cstdint>
#include <memory>
#include <string>
#include <mutex>
#include <chrono>
#include <iostream>
#include <cstring>
#include <algorithm>

class CanSender : public rclcpp::Node 
{
public:
    CanSender() : Node("can_send")
    {
        //参数声明，获取和赋值
        this->declare_parameter<std::string>("port", "can2");
        this->declare_parameter<int>("send_freq", 100);
        this->declare_parameter<int>("id_scan", 0x190);
        this->declare_parameter<double>("publish_rate", 50.0);
        this->declare_parameter<double>("cmd_timeout_s", 0.5);
        this->declare_parameter<double>("vw_timeout_s", 1.0);

        this->declare_parameter<std::string>("cmd_topic", "/cmd_vel");
        this->declare_parameter<std::string>("vw_topic", "/vw");
        this->declare_parameter<std::string>("scan_model_topic", "/scan_model");
        this->declare_parameter<std::string>("target_yaw_topic", "/target_yaw");

        std::string port = this->get_parameter("port").as_string();
        int send_freq = this->get_parameter("send_freq").as_int();
        int id_scan = this->get_parameter("id_scan").as_int();
        double publish_rate = this->get_parameter("publish_rate").as_double();
        double cmd_timeout_s = this->get_parameter("cmd_timeout_s").as_double();
        double vw_timeout_s = this->get_parameter("vw_timeout_s").as_double();
        std::string cmd_topic = this->get_parameter("cmd_topic").as_string();
        std::string vw_topic = this->get_parameter("vw_topic").as_string();
        std::string scan_model_topic = this->get_parameter("scan_model_topic").as_string();
        std::string target_yaw_topic = this->get_parameter("target_yaw_topic").as_string();
        
        // 打开并绑定 SocketCAN 发送 socket
        send_fd_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
        if (send_fd_ < 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to create CAN socket");
            rclcpp::shutdown();
            return;
        }
        struct ifreq ifr;
        std::strncpy(ifr.ifr_name, port.c_str(), IFNAMSIZ - 1);
        if (ioctl(send_fd_, SIOCGIFINDEX, &ifr) < 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to get interface index for %s", port.c_str());
            close(send_fd_);
            rclcpp::shutdown();
            return;
        }
        struct sockaddr_can addr;
        addr.can_family = AF_CAN;
        addr.can_ifindex = ifr.ifr_ifindex;
        if (bind(send_fd_, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to bind CAN socket");
            close(send_fd_);
            rclcpp::shutdown();
            return;
        }
        RCLCPP_INFO(this->get_logger(),"can send socket opened: %s",port.c_str());
        // 保存成员参数
        id_scan_ = static_cast<uint32_t>(id_scan);
        cmd_timeout_s_ = cmd_timeout_s;
        vw_timeout_s_ = vw_timeout_s;
        //订阅发布者
        cmd_vel_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            cmd_topic, 10, 
            std::bind(&CanSender::cmd_vel_callback, this, std::placeholders::_1));
        
        scan_model_topic_sub_ = this->create_subscription<sentry_msgs::msg::ScanMode>(
            scan_model_topic, 10,
            [this](const sentry_msgs::msg::ScanMode::SharedPtr msg) {
                std::lock_guard<std::mutex> lock(scan_model_mutex_);
                scan_model_type_ = msg->scan_mod_type;
                scan_model_type_received_ = true;
            });
            
        vw_sub_ = this->create_subscription<sentry_msgs::msg::Vw>(
            vw_topic, 10,
            [this](const sentry_msgs::msg::Vw::SharedPtr msg) {
                std::lock_guard<std::mutex> lock(vw_mutex_);
                if(!vw_received_once_){
                    vw_received_once_ = true;
                }
                vw_ = msg->vw;
                last_vw_msg_time_ = this->now();
            });

        target_yaw_sub_ = this->create_subscription<std_msgs::msg::Float32>(
            target_yaw_topic, 10,
            [this](const std_msgs::msg::Float32::SharedPtr msg) {
                std::lock_guard<std::mutex> lock(target_yaw_mutex_);
                target_yaw_ = msg->data;
                last_target_yaw_msg_time_ = this->now();
            });
        
        //创建定时器
        if(publish_rate <= 0.0){publish_rate = 50.0;}
        const auto period_ms = static_cast<int>(1000.0 / publish_rate);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(period_ms),
            std::bind(&CanSender::SendFrame, this));
        last_log_time_ = this->now();

        RCLCPP_INFO(this->get_logger(), "==========================================");
        RCLCPP_INFO(this->get_logger(), "CAN sender node initialized successfully.");
        RCLCPP_INFO(this->get_logger(), "==========================================");
    }

    ~CanSender() override { if (send_fd_ >= 0) close(send_fd_); }

private:
    void cmd_vel_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(cmd_vel_mutex_);
        vx_ = static_cast<float>(msg->linear.x);
        vy_ = static_cast<float>(msg->linear.y);
        cmd_received_once_ = true;
        last_cmd_vel_msg_time_ = this->now();
    }

     void SendFrame()
    {
         if (send_fd_ < 0) { return; }

       float vx, vy, vw, target_yaw;
       bool scan_model_type;
       {
           std::lock_guard<std::mutex> lock1(cmd_vel_mutex_);
           vx = vx_;
           vy = vy_;
           target_yaw = target_yaw_;
           vw = vw_;
           scan_model_type = scan_model_type_;

           const auto now = this->now();
           const bool cmd_vel_fresh = cmd_received_once_ 
                && (now - last_cmd_vel_msg_time_).seconds() < cmd_timeout_s_;
            if (!cmd_vel_fresh) {
                vx = 0.0f;
                vy = 0.0f;
            }

            const bool vw_fresh = vw_received_once_ 
                && (now - last_vw_msg_time_).seconds() < vw_timeout_s_;
            if (!vw_fresh) {
                vw = 0.0f;
            }
       }
    
    // 限幅 lambda
    auto clamp = [](float v, float min_v, float max_v) {
        return std::max(std::min(v, max_v), min_v);
    };

        // vx/vy/vw: 归一化到 [-1, 1] 再乘 127 → int8_t
        int8_t vx_q = static_cast<int8_t>(clamp(vx, -1.0f, 1.0f) * 127.0f);
        int8_t vy_q = static_cast<int8_t>(clamp(vy, -1.0f, 1.0f) * 127.0f);
        int8_t vw_q = static_cast<int8_t>(clamp(vw, -1.0f, 1.0f) * 127.0f);

        // target_yaw: 限幅 [-180, 180] 再乘 100 → int16_t, big-endian
        int16_t target_yaw_q = static_cast<int16_t>(clamp(target_yaw, -180.0f, 180.0f) * 100.0f);

        // 单帧 6 字节，ID 0x190
        uint8_t data[6] = {0};

        // byte [0]: vx (int8_t)
        data[0] = static_cast<uint8_t>(vx_q);

        // byte [1]: vy (int8_t)
        data[1] = static_cast<uint8_t>(vy_q);

        // byte [2-3]: target_yaw (int16_t, big-endian, ×100, 范围[-180,180])
        data[2] = static_cast<uint8_t>((target_yaw_q >> 8) & 0xFF);
        data[3] = static_cast<uint8_t>(target_yaw_q & 0xFF);

        // 解析旗标：如果没有上游定义，先用默认/scan_model_type_
        bool left = false;
        bool behind = false;
        bool right = false;
        bool scan = scan_model_type;
        bool NLJG_mode = false;
        bool outpost_mode = false;

        // byte [4]: 低4位 = left|behind|right, 高4位 = scan_mode|NLJG_mode|outpost_mode
        data[4] = (left ? 1 : 0)
                | ((behind ? 1 : 0) << 1)
                | ((right ? 1 : 0) << 2)
                | ((scan ? 1 : 0) << 4)
                | ((NLJG_mode ? 1 : 0) << 5)
                | ((outpost_mode ? 1 : 0) << 6);

        // byte [5]: vw (int8_t)
        data[5] = static_cast<uint8_t>(vw_q);

        struct can_frame frame{};
        frame.can_id = static_cast<canid_t>(id_scan_);
        frame.can_dlc = sizeof(data);
        std::memcpy(frame.data, data, sizeof(data));
        ssize_t nbytes = write(send_fd_, &frame, sizeof(frame));
        (void)nbytes;

        //频率日志
        freq_count_++;
        auto now = this->now();
        double elapsed = (now - last_log_time_).seconds();
        if (elapsed >= 1.0) {
            RCLCPP_INFO(this->get_logger(), "CAN send frequency: %.2f Hz", freq_count_ / elapsed);
            last_log_time_ = now;
            freq_count_ = 0;
        }
    }

private:
    int send_fd_ = -1;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_sub_;
    rclcpp::Subscription<sentry_msgs::msg::ScanMode>::SharedPtr scan_model_topic_sub_;
    rclcpp::Subscription<sentry_msgs::msg::Vw>::SharedPtr vw_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr target_yaw_sub_;
    rclcpp::TimerBase::SharedPtr timer_;

    float vx_ = 0.0f;
    float vy_ = 0.0f;
    float vw_ = 0.0f;
    float target_yaw_ = 0.0f;

    // mutexes for protecting shared state
    std::mutex cmd_vel_mutex_;
    std::mutex vw_mutex_;
    std::mutex scan_model_mutex_;
    std::mutex target_yaw_mutex_;
    rclcpp::Time last_log_time_;
    uint32_t id_scan_ = 0x190;
    size_t freq_count_ = 0;
    double cmd_timeout_s_ = 0.5;
    double vw_timeout_s_ = 1.0;
    bool cmd_received_once_ = false;
    bool vw_received_once_ = false;
    bool scan_model_type_received_ = false;
    bool scan_model_type_ = false;
    rclcpp::Time last_cmd_vel_msg_time_;
    rclcpp::Time last_vw_msg_time_;
    rclcpp::Time last_target_yaw_msg_time_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<CanSender>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}