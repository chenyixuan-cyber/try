// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/ArmorPresence.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ARMOR_PRESENCE__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__ARMOR_PRESENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/armor_presence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmorPresence_enemy_color
{
public:
  explicit Init_ArmorPresence_enemy_color(::sentry_msgs::msg::ArmorPresence & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::ArmorPresence enemy_color(::sentry_msgs::msg::ArmorPresence::_enemy_color_type arg)
  {
    msg_.enemy_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::ArmorPresence msg_;
};

class Init_ArmorPresence_right
{
public:
  explicit Init_ArmorPresence_right(::sentry_msgs::msg::ArmorPresence & msg)
  : msg_(msg)
  {}
  Init_ArmorPresence_enemy_color right(::sentry_msgs::msg::ArmorPresence::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_ArmorPresence_enemy_color(msg_);
  }

private:
  ::sentry_msgs::msg::ArmorPresence msg_;
};

class Init_ArmorPresence_behind
{
public:
  explicit Init_ArmorPresence_behind(::sentry_msgs::msg::ArmorPresence & msg)
  : msg_(msg)
  {}
  Init_ArmorPresence_right behind(::sentry_msgs::msg::ArmorPresence::_behind_type arg)
  {
    msg_.behind = std::move(arg);
    return Init_ArmorPresence_right(msg_);
  }

private:
  ::sentry_msgs::msg::ArmorPresence msg_;
};

class Init_ArmorPresence_left
{
public:
  explicit Init_ArmorPresence_left(::sentry_msgs::msg::ArmorPresence & msg)
  : msg_(msg)
  {}
  Init_ArmorPresence_behind left(::sentry_msgs::msg::ArmorPresence::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_ArmorPresence_behind(msg_);
  }

private:
  ::sentry_msgs::msg::ArmorPresence msg_;
};

class Init_ArmorPresence_header
{
public:
  Init_ArmorPresence_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmorPresence_left header(::sentry_msgs::msg::ArmorPresence::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArmorPresence_left(msg_);
  }

private:
  ::sentry_msgs::msg::ArmorPresence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::ArmorPresence>()
{
  return sentry_msgs::msg::builder::Init_ArmorPresence_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__ARMOR_PRESENCE__BUILDER_HPP_
