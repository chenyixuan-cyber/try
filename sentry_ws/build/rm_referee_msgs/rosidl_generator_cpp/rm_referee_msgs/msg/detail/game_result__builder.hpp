// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/game_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_GameResult_winner
{
public:
  explicit Init_GameResult_winner(::rm_referee_msgs::msg::GameResult & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::GameResult winner(::rm_referee_msgs::msg::GameResult::_winner_type arg)
  {
    msg_.winner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameResult msg_;
};

class Init_GameResult_header
{
public:
  Init_GameResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameResult_winner header(::rm_referee_msgs::msg::GameResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GameResult_winner(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::GameResult>()
{
  return rm_referee_msgs::msg::builder::Init_GameResult_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
