// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/Buff.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__BUFF__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__BUFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/buff__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_Buff_remaining_energy
{
public:
  explicit Init_Buff_remaining_energy(::rm_referee_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::Buff remaining_energy(::rm_referee_msgs::msg::Buff::_remaining_energy_type arg)
  {
    msg_.remaining_energy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::Buff msg_;
};

class Init_Buff_attack_buff
{
public:
  explicit Init_Buff_attack_buff(::rm_referee_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  Init_Buff_remaining_energy attack_buff(::rm_referee_msgs::msg::Buff::_attack_buff_type arg)
  {
    msg_.attack_buff = std::move(arg);
    return Init_Buff_remaining_energy(msg_);
  }

private:
  ::rm_referee_msgs::msg::Buff msg_;
};

class Init_Buff_vulnerability_buff
{
public:
  explicit Init_Buff_vulnerability_buff(::rm_referee_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  Init_Buff_attack_buff vulnerability_buff(::rm_referee_msgs::msg::Buff::_vulnerability_buff_type arg)
  {
    msg_.vulnerability_buff = std::move(arg);
    return Init_Buff_attack_buff(msg_);
  }

private:
  ::rm_referee_msgs::msg::Buff msg_;
};

class Init_Buff_defence_buff
{
public:
  explicit Init_Buff_defence_buff(::rm_referee_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  Init_Buff_vulnerability_buff defence_buff(::rm_referee_msgs::msg::Buff::_defence_buff_type arg)
  {
    msg_.defence_buff = std::move(arg);
    return Init_Buff_vulnerability_buff(msg_);
  }

private:
  ::rm_referee_msgs::msg::Buff msg_;
};

class Init_Buff_cooling_buff
{
public:
  explicit Init_Buff_cooling_buff(::rm_referee_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  Init_Buff_defence_buff cooling_buff(::rm_referee_msgs::msg::Buff::_cooling_buff_type arg)
  {
    msg_.cooling_buff = std::move(arg);
    return Init_Buff_defence_buff(msg_);
  }

private:
  ::rm_referee_msgs::msg::Buff msg_;
};

class Init_Buff_recovery_buff
{
public:
  explicit Init_Buff_recovery_buff(::rm_referee_msgs::msg::Buff & msg)
  : msg_(msg)
  {}
  Init_Buff_cooling_buff recovery_buff(::rm_referee_msgs::msg::Buff::_recovery_buff_type arg)
  {
    msg_.recovery_buff = std::move(arg);
    return Init_Buff_cooling_buff(msg_);
  }

private:
  ::rm_referee_msgs::msg::Buff msg_;
};

class Init_Buff_header
{
public:
  Init_Buff_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Buff_recovery_buff header(::rm_referee_msgs::msg::Buff::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Buff_recovery_buff(msg_);
  }

private:
  ::rm_referee_msgs::msg::Buff msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::Buff>()
{
  return rm_referee_msgs::msg::builder::Init_Buff_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__BUFF__BUILDER_HPP_
