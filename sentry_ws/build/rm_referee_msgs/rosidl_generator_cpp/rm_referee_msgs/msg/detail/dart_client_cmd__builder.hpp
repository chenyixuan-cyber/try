// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/DartClientCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/dart_client_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_DartClientCmd_latest_launch_cmd_time
{
public:
  explicit Init_DartClientCmd_latest_launch_cmd_time(::rm_referee_msgs::msg::DartClientCmd & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::DartClientCmd latest_launch_cmd_time(::rm_referee_msgs::msg::DartClientCmd::_latest_launch_cmd_time_type arg)
  {
    msg_.latest_launch_cmd_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::DartClientCmd msg_;
};

class Init_DartClientCmd_target_change_time
{
public:
  explicit Init_DartClientCmd_target_change_time(::rm_referee_msgs::msg::DartClientCmd & msg)
  : msg_(msg)
  {}
  Init_DartClientCmd_latest_launch_cmd_time target_change_time(::rm_referee_msgs::msg::DartClientCmd::_target_change_time_type arg)
  {
    msg_.target_change_time = std::move(arg);
    return Init_DartClientCmd_latest_launch_cmd_time(msg_);
  }

private:
  ::rm_referee_msgs::msg::DartClientCmd msg_;
};

class Init_DartClientCmd_reserved
{
public:
  explicit Init_DartClientCmd_reserved(::rm_referee_msgs::msg::DartClientCmd & msg)
  : msg_(msg)
  {}
  Init_DartClientCmd_target_change_time reserved(::rm_referee_msgs::msg::DartClientCmd::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_DartClientCmd_target_change_time(msg_);
  }

private:
  ::rm_referee_msgs::msg::DartClientCmd msg_;
};

class Init_DartClientCmd_dart_launch_opening_status
{
public:
  explicit Init_DartClientCmd_dart_launch_opening_status(::rm_referee_msgs::msg::DartClientCmd & msg)
  : msg_(msg)
  {}
  Init_DartClientCmd_reserved dart_launch_opening_status(::rm_referee_msgs::msg::DartClientCmd::_dart_launch_opening_status_type arg)
  {
    msg_.dart_launch_opening_status = std::move(arg);
    return Init_DartClientCmd_reserved(msg_);
  }

private:
  ::rm_referee_msgs::msg::DartClientCmd msg_;
};

class Init_DartClientCmd_header
{
public:
  Init_DartClientCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DartClientCmd_dart_launch_opening_status header(::rm_referee_msgs::msg::DartClientCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DartClientCmd_dart_launch_opening_status(msg_);
  }

private:
  ::rm_referee_msgs::msg::DartClientCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::DartClientCmd>()
{
  return rm_referee_msgs::msg::builder::Init_DartClientCmd_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__BUILDER_HPP_
