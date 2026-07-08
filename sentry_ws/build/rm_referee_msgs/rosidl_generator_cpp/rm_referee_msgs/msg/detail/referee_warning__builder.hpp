// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/referee_warning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_RefereeWarning_count
{
public:
  explicit Init_RefereeWarning_count(::rm_referee_msgs::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::RefereeWarning count(::rm_referee_msgs::msg::RefereeWarning::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_offending_robot_id
{
public:
  explicit Init_RefereeWarning_offending_robot_id(::rm_referee_msgs::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  Init_RefereeWarning_count offending_robot_id(::rm_referee_msgs::msg::RefereeWarning::_offending_robot_id_type arg)
  {
    msg_.offending_robot_id = std::move(arg);
    return Init_RefereeWarning_count(msg_);
  }

private:
  ::rm_referee_msgs::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_level
{
public:
  explicit Init_RefereeWarning_level(::rm_referee_msgs::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  Init_RefereeWarning_offending_robot_id level(::rm_referee_msgs::msg::RefereeWarning::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_RefereeWarning_offending_robot_id(msg_);
  }

private:
  ::rm_referee_msgs::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_header
{
public:
  Init_RefereeWarning_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RefereeWarning_level header(::rm_referee_msgs::msg::RefereeWarning::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RefereeWarning_level(msg_);
  }

private:
  ::rm_referee_msgs::msg::RefereeWarning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::RefereeWarning>()
{
  return rm_referee_msgs::msg::builder::Init_RefereeWarning_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
