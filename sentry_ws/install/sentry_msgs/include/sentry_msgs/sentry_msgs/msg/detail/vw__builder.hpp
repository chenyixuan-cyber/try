// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/Vw.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__VW__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__VW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/vw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_Vw_vw
{
public:
  Init_Vw_vw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sentry_msgs::msg::Vw vw(::sentry_msgs::msg::Vw::_vw_type arg)
  {
    msg_.vw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::Vw msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::Vw>()
{
  return sentry_msgs::msg::builder::Init_Vw_vw();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__VW__BUILDER_HPP_
