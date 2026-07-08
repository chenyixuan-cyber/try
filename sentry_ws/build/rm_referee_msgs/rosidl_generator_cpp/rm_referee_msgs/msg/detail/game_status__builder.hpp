// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/game_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_GameStatus_sync_timestamp
{
public:
  explicit Init_GameStatus_sync_timestamp(::rm_referee_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::GameStatus sync_timestamp(::rm_referee_msgs::msg::GameStatus::_sync_timestamp_type arg)
  {
    msg_.sync_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_stage_remain_time
{
public:
  explicit Init_GameStatus_stage_remain_time(::rm_referee_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_sync_timestamp stage_remain_time(::rm_referee_msgs::msg::GameStatus::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_GameStatus_sync_timestamp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_progress
{
public:
  explicit Init_GameStatus_game_progress(::rm_referee_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_stage_remain_time game_progress(::rm_referee_msgs::msg::GameStatus::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_GameStatus_stage_remain_time(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_game_type
{
public:
  explicit Init_GameStatus_game_type(::rm_referee_msgs::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_game_progress game_type(::rm_referee_msgs::msg::GameStatus::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_GameStatus_game_progress(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameStatus msg_;
};

class Init_GameStatus_header
{
public:
  Init_GameStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameStatus_game_type header(::rm_referee_msgs::msg::GameStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GameStatus_game_type(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::GameStatus>()
{
  return rm_referee_msgs::msg::builder::Init_GameStatus_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
