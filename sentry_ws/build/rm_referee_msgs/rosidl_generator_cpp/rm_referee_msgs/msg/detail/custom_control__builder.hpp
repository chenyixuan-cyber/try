// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/CustomControl.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__CUSTOM_CONTROL__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__CUSTOM_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/custom_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_CustomControl_data
{
public:
  explicit Init_CustomControl_data(::rm_referee_msgs::msg::CustomControl & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::CustomControl data(::rm_referee_msgs::msg::CustomControl::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::CustomControl msg_;
};

class Init_CustomControl_header
{
public:
  Init_CustomControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomControl_data header(::rm_referee_msgs::msg::CustomControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CustomControl_data(msg_);
  }

private:
  ::rm_referee_msgs::msg::CustomControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::CustomControl>()
{
  return rm_referee_msgs::msg::builder::Init_CustomControl_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__CUSTOM_CONTROL__BUILDER_HPP_
