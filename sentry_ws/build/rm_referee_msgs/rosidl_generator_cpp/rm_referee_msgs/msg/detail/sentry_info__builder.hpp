// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/SentryInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__SENTRY_INFO__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__SENTRY_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/sentry_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_SentryInfo_sentry_info_3
{
public:
  explicit Init_SentryInfo_sentry_info_3(::rm_referee_msgs::msg::SentryInfo & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::SentryInfo sentry_info_3(::rm_referee_msgs::msg::SentryInfo::_sentry_info_3_type arg)
  {
    msg_.sentry_info_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::SentryInfo msg_;
};

class Init_SentryInfo_sentry_info_2
{
public:
  explicit Init_SentryInfo_sentry_info_2(::rm_referee_msgs::msg::SentryInfo & msg)
  : msg_(msg)
  {}
  Init_SentryInfo_sentry_info_3 sentry_info_2(::rm_referee_msgs::msg::SentryInfo::_sentry_info_2_type arg)
  {
    msg_.sentry_info_2 = std::move(arg);
    return Init_SentryInfo_sentry_info_3(msg_);
  }

private:
  ::rm_referee_msgs::msg::SentryInfo msg_;
};

class Init_SentryInfo_sentry_info
{
public:
  explicit Init_SentryInfo_sentry_info(::rm_referee_msgs::msg::SentryInfo & msg)
  : msg_(msg)
  {}
  Init_SentryInfo_sentry_info_2 sentry_info(::rm_referee_msgs::msg::SentryInfo::_sentry_info_type arg)
  {
    msg_.sentry_info = std::move(arg);
    return Init_SentryInfo_sentry_info_2(msg_);
  }

private:
  ::rm_referee_msgs::msg::SentryInfo msg_;
};

class Init_SentryInfo_header
{
public:
  Init_SentryInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SentryInfo_sentry_info header(::rm_referee_msgs::msg::SentryInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SentryInfo_sentry_info(msg_);
  }

private:
  ::rm_referee_msgs::msg::SentryInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::SentryInfo>()
{
  return rm_referee_msgs::msg::builder::Init_SentryInfo_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__SENTRY_INFO__BUILDER_HPP_
