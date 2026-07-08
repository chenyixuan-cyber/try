#include <boost/asio.hpp>
#include <boost/asio/serial_port.hpp>
#include <chrono>
#include <cstdint>
#include <geometry_msgs/msg/twist.hpp>
#include <mutex>
#include <rclcpp/rclcpp.hpp>
#include <sentry_msgs/msg/scan_mode.hpp>
#include <sentry_msgs/msg/vw.hpp>
#include <thread>

#pragma pack(push, 1)
typedef struct {
    uint8_t SOF;
    uint8_t ID;
    float vx;
    float vy;
    float vyaw;
    float vw;
    bool scan_mod_type;
    uint8_t _EOF;
} NucControlFrame;
#pragma pack(pop)

class SentryCommNode : public rclcpp::Node {
public:
    SentryCommNode()
    : Node("sentry_comm_node"), io_context_(), serial_port_(io_context_)
    {
        this->declare_parameter<std::string>("serial_port", "/dev/ttyACM0");
        this->declare_parameter<int>("baud_rate", 115200);
        this->declare_parameter<int>("send_frequency", 500);
        this->declare_parameter<double>("timeout", 1.0);
        this->declare_parameter<int>("max_retries", 3);
        this->declare_parameter<double>("retry_delay", 2.0);
        this->declare_parameter<std::string>("cmd_topic", "/cmd_vel");
        this->declare_parameter<std::string>("vw_topic", "/vw");
        this->declare_parameter<std::string>("scan_mode_topic", "/scan_mode");

        const std::string serial_port_name = this->get_parameter("serial_port").as_string();
        const int baud_rate = this->get_parameter("baud_rate").as_int();
        int send_frequency = this->get_parameter("send_frequency").as_int();
        timeout_ = this->get_parameter("timeout").as_double();
        max_retries_ = this->get_parameter("max_retries").as_int();
        retry_delay_ = this->get_parameter("retry_delay").as_double();

        const std::string cmd_topic = this->get_parameter("cmd_topic").as_string();
        const std::string vw_topic = this->get_parameter("vw_topic").as_string();
        const std::string scan_mode_topic = this->get_parameter("scan_mode_topic").as_string();

        try {
            serial_port_.open(serial_port_name);
            serial_port_.set_option(boost::asio::serial_port_base::baud_rate(baud_rate));
            RCLCPP_INFO(this->get_logger(), "Serial port %s opened at baud rate %d", serial_port_name.c_str(), baud_rate);
        } catch (const std::exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Error opening serial port: %s", e.what());
            rclcpp::shutdown();
            return;
        }

        cmd_vel_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
            cmd_topic,
            10,
            std::bind(&SentryCommNode::cmdVelCallback, this, std::placeholders::_1));

        vw_sub_ = this->create_subscription<sentry_msgs::msg::Vw>(
            vw_topic,
            10,
            [this](const sentry_msgs::msg::Vw::SharedPtr msg) {
                std::lock_guard<std::mutex> lock(state_mutex_);
                vw_ = msg->vw;
            });

        scan_mode_sub_ = this->create_subscription<sentry_msgs::msg::ScanMode>(
            scan_mode_topic,
            10,
            [this](const sentry_msgs::msg::ScanMode::SharedPtr msg) {
                std::lock_guard<std::mutex> lock(state_mutex_);
                scan_mod_type_ = msg->scan_mod_type;
            });

        if (send_frequency <= 0) {
            send_frequency = 1;
        }
        const int send_interval_ms = 1000 / send_frequency;
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(send_interval_ms),
            std::bind(&SentryCommNode::sendFrame, this));

        RCLCPP_INFO(this->get_logger(), "===========================================");
        RCLCPP_INFO(this->get_logger(), "串口通信节点初始化已完成");
        RCLCPP_INFO(this->get_logger(), "===========================================");
    }

    ~SentryCommNode() override
    {
        {
            std::lock_guard<std::mutex> lock(state_mutex_);
            vx_ = 0.0;
            vy_ = 0.0;
            vyaw_ = 0.0;
            vw_ = 0.0;
            scan_mod_type_ = false;
        }

        if (serial_port_.is_open()) {
            serial_port_.close();
            RCLCPP_INFO(this->get_logger(), "串口已关闭");
        }
    }

private:
    void cmdVelCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        std::lock_guard<std::mutex> lock(state_mutex_);
        vx_ = msg->linear.x;
        vy_ = msg->linear.y;
        vyaw_ = msg->angular.z;
    }

    void sendFrame()
    {
        if (!serial_port_.is_open()) {
            return;
        }

        NucControlFrame frame{};
        {
            std::lock_guard<std::mutex> lock(state_mutex_);
            frame.SOF = 0x55;
            frame.ID = 0x04;
            frame.vx = static_cast<float>(vx_);
            frame.vy = static_cast<float>(vy_);
            frame.vyaw = static_cast<float>(vyaw_);
            frame.vw = static_cast<float>(vw_);
            frame.scan_mod_type = scan_mod_type_;
        }
        frame._EOF = 0xFF;

        for (int attempt = 0; attempt <= max_retries_; ++attempt) {
            try {
                serial_port_.write_some(boost::asio::buffer(&frame, sizeof(frame)));
                sent_count_++;

                const auto now = std::chrono::steady_clock::now();
                const auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(now - last_log_time_);
                if (elapsed.count() >= 1) {
                    frequency_ = static_cast<double>(sent_count_) / static_cast<double>(elapsed.count());
                    RCLCPP_INFO(
                        this->get_logger(),
                        "Sent %.2f Hz stage=%u vx=%.2f vy=%.2f vyaw=%.2f vw=%.2f scan_mod_type=%u",
                        frequency_,
                        static_cast<unsigned int>(match_stage_),
                        frame.vx,
                        frame.vy,
                        frame.vyaw,
                        frame.vw,
                        static_cast<unsigned int>(frame.scan_mod_type));
                    sent_count_ = 0;
                    last_log_time_ = now;
                }
                return;
            } catch (const std::exception& e) {
                if (attempt == max_retries_) {
                    RCLCPP_ERROR(this->get_logger(), "写入失败: %s", e.what());
                    return;
                }
                std::this_thread::sleep_for(std::chrono::duration<double>(retry_delay_));
            }
        }
    }

private:
    boost::asio::io_context io_context_;
    boost::asio::serial_port serial_port_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_sub_;
    rclcpp::Subscription<sentry_msgs::msg::Vw>::SharedPtr vw_sub_;
    rclcpp::Subscription<sentry_msgs::msg::ScanMode>::SharedPtr scan_mode_sub_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::mutex state_mutex_;
    double vx_ = 0.0;
    double vy_ = 0.0;
    double vyaw_ = 0.0;
    double vw_ = 0.0;
    bool scan_mod_type_ = true;
    uint8_t match_stage_ = 0;
    size_t sent_count_ = 0;
    std::chrono::steady_clock::time_point last_log_time_ = std::chrono::steady_clock::now();
    double frequency_ = 0.0;
    double timeout_ = 1.0;
    int max_retries_ = 3;
    double retry_delay_ = 2.0;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SentryCommNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}