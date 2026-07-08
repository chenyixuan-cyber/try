// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/RobotPos.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_POS__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/robot_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotPos_angle
{
public:
  explicit Init_RobotPos_angle(::rm_referee_msgs::msg::RobotPos & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::RobotPos angle(::rm_referee_msgs::msg::RobotPos::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotPos msg_;
};

class Init_RobotPos_y
{
public:
  explicit Init_RobotPos_y(::rm_referee_msgs::msg::RobotPos & msg)
  : msg_(msg)
  {}
  Init_RobotPos_angle y(::rm_referee_msgs::msg::RobotPos::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RobotPos_angle(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotPos msg_;
};

class Init_RobotPos_x
{
public:
  explicit Init_RobotPos_x(::rm_referee_msgs::msg::RobotPos & msg)
  : msg_(msg)
  {}
  Init_RobotPos_y x(::rm_referee_msgs::msg::RobotPos::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotPos_y(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotPos msg_;
};

class Init_RobotPos_header
{
public:
  Init_RobotPos_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPos_x header(::rm_referee_msgs::msg::RobotPos::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotPos_x(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::RobotPos>()
{
  return rm_referee_msgs::msg::builder::Init_RobotPos_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_POS__BUILDER_HPP_
