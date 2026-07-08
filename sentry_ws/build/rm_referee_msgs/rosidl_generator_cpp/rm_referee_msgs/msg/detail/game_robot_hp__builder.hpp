// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/game_robot_hp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_GameRobotHP_enemy_base_hp
{
public:
  explicit Init_GameRobotHP_enemy_base_hp(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::GameRobotHP enemy_base_hp(::rm_referee_msgs::msg::GameRobotHP::_enemy_base_hp_type arg)
  {
    msg_.enemy_base_hp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_enemy_outpost_hp
{
public:
  explicit Init_GameRobotHP_enemy_outpost_hp(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_enemy_base_hp enemy_outpost_hp(::rm_referee_msgs::msg::GameRobotHP::_enemy_outpost_hp_type arg)
  {
    msg_.enemy_outpost_hp = std::move(arg);
    return Init_GameRobotHP_enemy_base_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_ally_base_hp
{
public:
  explicit Init_GameRobotHP_ally_base_hp(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_enemy_outpost_hp ally_base_hp(::rm_referee_msgs::msg::GameRobotHP::_ally_base_hp_type arg)
  {
    msg_.ally_base_hp = std::move(arg);
    return Init_GameRobotHP_enemy_outpost_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_ally_outpost_hp
{
public:
  explicit Init_GameRobotHP_ally_outpost_hp(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_ally_base_hp ally_outpost_hp(::rm_referee_msgs::msg::GameRobotHP::_ally_outpost_hp_type arg)
  {
    msg_.ally_outpost_hp = std::move(arg);
    return Init_GameRobotHP_ally_base_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_ally_7_robot_hp
{
public:
  explicit Init_GameRobotHP_ally_7_robot_hp(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_ally_outpost_hp ally_7_robot_hp(::rm_referee_msgs::msg::GameRobotHP::_ally_7_robot_hp_type arg)
  {
    msg_.ally_7_robot_hp = std::move(arg);
    return Init_GameRobotHP_ally_outpost_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_damage_difference
{
public:
  explicit Init_GameRobotHP_damage_difference(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_ally_7_robot_hp damage_difference(::rm_referee_msgs::msg::GameRobotHP::_damage_difference_type arg)
  {
    msg_.damage_difference = std::move(arg);
    return Init_GameRobotHP_ally_7_robot_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_ally_4_robot_hp
{
public:
  explicit Init_GameRobotHP_ally_4_robot_hp(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_damage_difference ally_4_robot_hp(::rm_referee_msgs::msg::GameRobotHP::_ally_4_robot_hp_type arg)
  {
    msg_.ally_4_robot_hp = std::move(arg);
    return Init_GameRobotHP_damage_difference(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_ally_3_robot_hp
{
public:
  explicit Init_GameRobotHP_ally_3_robot_hp(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_ally_4_robot_hp ally_3_robot_hp(::rm_referee_msgs::msg::GameRobotHP::_ally_3_robot_hp_type arg)
  {
    msg_.ally_3_robot_hp = std::move(arg);
    return Init_GameRobotHP_ally_4_robot_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_ally_2_robot_hp
{
public:
  explicit Init_GameRobotHP_ally_2_robot_hp(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_ally_3_robot_hp ally_2_robot_hp(::rm_referee_msgs::msg::GameRobotHP::_ally_2_robot_hp_type arg)
  {
    msg_.ally_2_robot_hp = std::move(arg);
    return Init_GameRobotHP_ally_3_robot_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_ally_1_robot_hp
{
public:
  explicit Init_GameRobotHP_ally_1_robot_hp(::rm_referee_msgs::msg::GameRobotHP & msg)
  : msg_(msg)
  {}
  Init_GameRobotHP_ally_2_robot_hp ally_1_robot_hp(::rm_referee_msgs::msg::GameRobotHP::_ally_1_robot_hp_type arg)
  {
    msg_.ally_1_robot_hp = std::move(arg);
    return Init_GameRobotHP_ally_2_robot_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

class Init_GameRobotHP_header
{
public:
  Init_GameRobotHP_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameRobotHP_ally_1_robot_hp header(::rm_referee_msgs::msg::GameRobotHP::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GameRobotHP_ally_1_robot_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::GameRobotHP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::GameRobotHP>()
{
  return rm_referee_msgs::msg::builder::Init_GameRobotHP_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__BUILDER_HPP_
