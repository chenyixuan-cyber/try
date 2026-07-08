// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/ProjectileAllowance.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__PROJECTILE_ALLOWANCE__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__PROJECTILE_ALLOWANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/projectile_allowance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_ProjectileAllowance_projectile_allowance_fortress
{
public:
  explicit Init_ProjectileAllowance_projectile_allowance_fortress(::rm_referee_msgs::msg::ProjectileAllowance & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::ProjectileAllowance projectile_allowance_fortress(::rm_referee_msgs::msg::ProjectileAllowance::_projectile_allowance_fortress_type arg)
  {
    msg_.projectile_allowance_fortress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::ProjectileAllowance msg_;
};

class Init_ProjectileAllowance_remaining_gold_coin
{
public:
  explicit Init_ProjectileAllowance_remaining_gold_coin(::rm_referee_msgs::msg::ProjectileAllowance & msg)
  : msg_(msg)
  {}
  Init_ProjectileAllowance_projectile_allowance_fortress remaining_gold_coin(::rm_referee_msgs::msg::ProjectileAllowance::_remaining_gold_coin_type arg)
  {
    msg_.remaining_gold_coin = std::move(arg);
    return Init_ProjectileAllowance_projectile_allowance_fortress(msg_);
  }

private:
  ::rm_referee_msgs::msg::ProjectileAllowance msg_;
};

class Init_ProjectileAllowance_projectile_allowance_42mm
{
public:
  explicit Init_ProjectileAllowance_projectile_allowance_42mm(::rm_referee_msgs::msg::ProjectileAllowance & msg)
  : msg_(msg)
  {}
  Init_ProjectileAllowance_remaining_gold_coin projectile_allowance_42mm(::rm_referee_msgs::msg::ProjectileAllowance::_projectile_allowance_42mm_type arg)
  {
    msg_.projectile_allowance_42mm = std::move(arg);
    return Init_ProjectileAllowance_remaining_gold_coin(msg_);
  }

private:
  ::rm_referee_msgs::msg::ProjectileAllowance msg_;
};

class Init_ProjectileAllowance_projectile_allowance_17mm
{
public:
  explicit Init_ProjectileAllowance_projectile_allowance_17mm(::rm_referee_msgs::msg::ProjectileAllowance & msg)
  : msg_(msg)
  {}
  Init_ProjectileAllowance_projectile_allowance_42mm projectile_allowance_17mm(::rm_referee_msgs::msg::ProjectileAllowance::_projectile_allowance_17mm_type arg)
  {
    msg_.projectile_allowance_17mm = std::move(arg);
    return Init_ProjectileAllowance_projectile_allowance_42mm(msg_);
  }

private:
  ::rm_referee_msgs::msg::ProjectileAllowance msg_;
};

class Init_ProjectileAllowance_header
{
public:
  Init_ProjectileAllowance_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProjectileAllowance_projectile_allowance_17mm header(::rm_referee_msgs::msg::ProjectileAllowance::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ProjectileAllowance_projectile_allowance_17mm(msg_);
  }

private:
  ::rm_referee_msgs::msg::ProjectileAllowance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::ProjectileAllowance>()
{
  return rm_referee_msgs::msg::builder::Init_ProjectileAllowance_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__PROJECTILE_ALLOWANCE__BUILDER_HPP_
