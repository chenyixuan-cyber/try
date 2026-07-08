// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/DartInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__DART_INFO__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__DART_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/dart_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_DartInfo_dart_info
{
public:
  explicit Init_DartInfo_dart_info(::rm_referee_msgs::msg::DartInfo & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::DartInfo dart_info(::rm_referee_msgs::msg::DartInfo::_dart_info_type arg)
  {
    msg_.dart_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::DartInfo msg_;
};

class Init_DartInfo_dart_remaining_time
{
public:
  explicit Init_DartInfo_dart_remaining_time(::rm_referee_msgs::msg::DartInfo & msg)
  : msg_(msg)
  {}
  Init_DartInfo_dart_info dart_remaining_time(::rm_referee_msgs::msg::DartInfo::_dart_remaining_time_type arg)
  {
    msg_.dart_remaining_time = std::move(arg);
    return Init_DartInfo_dart_info(msg_);
  }

private:
  ::rm_referee_msgs::msg::DartInfo msg_;
};

class Init_DartInfo_header
{
public:
  Init_DartInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DartInfo_dart_remaining_time header(::rm_referee_msgs::msg::DartInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DartInfo_dart_remaining_time(msg_);
  }

private:
  ::rm_referee_msgs::msg::DartInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::DartInfo>()
{
  return rm_referee_msgs::msg::builder::Init_DartInfo_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__DART_INFO__BUILDER_HPP_
