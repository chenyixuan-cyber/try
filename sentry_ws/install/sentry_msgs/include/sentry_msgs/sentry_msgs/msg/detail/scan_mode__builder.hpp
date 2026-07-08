// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/ScanMode.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__SCAN_MODE__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__SCAN_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/scan_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanMode_scan_mod_type
{
public:
  Init_ScanMode_scan_mod_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sentry_msgs::msg::ScanMode scan_mod_type(::sentry_msgs::msg::ScanMode::_scan_mod_type_type arg)
  {
    msg_.scan_mod_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::ScanMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::ScanMode>()
{
  return sentry_msgs::msg::builder::Init_ScanMode_scan_mod_type();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__SCAN_MODE__BUILDER_HPP_
