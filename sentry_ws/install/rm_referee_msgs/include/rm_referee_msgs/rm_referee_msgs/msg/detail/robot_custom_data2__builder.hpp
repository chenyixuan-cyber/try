// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/RobotCustomData2.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_CUSTOM_DATA2__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_CUSTOM_DATA2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/robot_custom_data2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotCustomData2_data
{
public:
  explicit Init_RobotCustomData2_data(::rm_referee_msgs::msg::RobotCustomData2 & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::RobotCustomData2 data(::rm_referee_msgs::msg::RobotCustomData2::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotCustomData2 msg_;
};

class Init_RobotCustomData2_header
{
public:
  Init_RobotCustomData2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCustomData2_data header(::rm_referee_msgs::msg::RobotCustomData2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotCustomData2_data(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotCustomData2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::RobotCustomData2>()
{
  return rm_referee_msgs::msg::builder::Init_RobotCustomData2_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_CUSTOM_DATA2__BUILDER_HPP_
