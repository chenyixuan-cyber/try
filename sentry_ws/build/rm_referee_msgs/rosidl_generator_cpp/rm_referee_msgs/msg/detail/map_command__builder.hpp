// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/MapCommand.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/map_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_MapCommand_cmd_source
{
public:
  explicit Init_MapCommand_cmd_source(::rm_referee_msgs::msg::MapCommand & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::MapCommand cmd_source(::rm_referee_msgs::msg::MapCommand::_cmd_source_type arg)
  {
    msg_.cmd_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::MapCommand msg_;
};

class Init_MapCommand_target_robot_id
{
public:
  explicit Init_MapCommand_target_robot_id(::rm_referee_msgs::msg::MapCommand & msg)
  : msg_(msg)
  {}
  Init_MapCommand_cmd_source target_robot_id(::rm_referee_msgs::msg::MapCommand::_target_robot_id_type arg)
  {
    msg_.target_robot_id = std::move(arg);
    return Init_MapCommand_cmd_source(msg_);
  }

private:
  ::rm_referee_msgs::msg::MapCommand msg_;
};

class Init_MapCommand_cmd_keyboard
{
public:
  explicit Init_MapCommand_cmd_keyboard(::rm_referee_msgs::msg::MapCommand & msg)
  : msg_(msg)
  {}
  Init_MapCommand_target_robot_id cmd_keyboard(::rm_referee_msgs::msg::MapCommand::_cmd_keyboard_type arg)
  {
    msg_.cmd_keyboard = std::move(arg);
    return Init_MapCommand_target_robot_id(msg_);
  }

private:
  ::rm_referee_msgs::msg::MapCommand msg_;
};

class Init_MapCommand_target_position_y
{
public:
  explicit Init_MapCommand_target_position_y(::rm_referee_msgs::msg::MapCommand & msg)
  : msg_(msg)
  {}
  Init_MapCommand_cmd_keyboard target_position_y(::rm_referee_msgs::msg::MapCommand::_target_position_y_type arg)
  {
    msg_.target_position_y = std::move(arg);
    return Init_MapCommand_cmd_keyboard(msg_);
  }

private:
  ::rm_referee_msgs::msg::MapCommand msg_;
};

class Init_MapCommand_target_position_x
{
public:
  explicit Init_MapCommand_target_position_x(::rm_referee_msgs::msg::MapCommand & msg)
  : msg_(msg)
  {}
  Init_MapCommand_target_position_y target_position_x(::rm_referee_msgs::msg::MapCommand::_target_position_x_type arg)
  {
    msg_.target_position_x = std::move(arg);
    return Init_MapCommand_target_position_y(msg_);
  }

private:
  ::rm_referee_msgs::msg::MapCommand msg_;
};

class Init_MapCommand_header
{
public:
  Init_MapCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapCommand_target_position_x header(::rm_referee_msgs::msg::MapCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MapCommand_target_position_x(msg_);
  }

private:
  ::rm_referee_msgs::msg::MapCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::MapCommand>()
{
  return rm_referee_msgs::msg::builder::Init_MapCommand_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__MAP_COMMAND__BUILDER_HPP_
