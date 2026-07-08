// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_power_management_shooter_output
{
public:
  explicit Init_RobotStatus_power_management_shooter_output(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::RobotStatus power_management_shooter_output(::rm_referee_msgs::msg::RobotStatus::_power_management_shooter_output_type arg)
  {
    msg_.power_management_shooter_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_power_management_chassis_output
{
public:
  explicit Init_RobotStatus_power_management_chassis_output(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_power_management_shooter_output power_management_chassis_output(::rm_referee_msgs::msg::RobotStatus::_power_management_chassis_output_type arg)
  {
    msg_.power_management_chassis_output = std::move(arg);
    return Init_RobotStatus_power_management_shooter_output(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_power_management_gimbal_output
{
public:
  explicit Init_RobotStatus_power_management_gimbal_output(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_power_management_chassis_output power_management_gimbal_output(::rm_referee_msgs::msg::RobotStatus::_power_management_gimbal_output_type arg)
  {
    msg_.power_management_gimbal_output = std::move(arg);
    return Init_RobotStatus_power_management_chassis_output(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_bullet_speed_limit
{
public:
  explicit Init_RobotStatus_bullet_speed_limit(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_power_management_gimbal_output bullet_speed_limit(::rm_referee_msgs::msg::RobotStatus::_bullet_speed_limit_type arg)
  {
    msg_.bullet_speed_limit = std::move(arg);
    return Init_RobotStatus_power_management_gimbal_output(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_chassis_power_limit
{
public:
  explicit Init_RobotStatus_chassis_power_limit(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_bullet_speed_limit chassis_power_limit(::rm_referee_msgs::msg::RobotStatus::_chassis_power_limit_type arg)
  {
    msg_.chassis_power_limit = std::move(arg);
    return Init_RobotStatus_bullet_speed_limit(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_barrel_heat_limit
{
public:
  explicit Init_RobotStatus_shooter_barrel_heat_limit(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_chassis_power_limit shooter_barrel_heat_limit(::rm_referee_msgs::msg::RobotStatus::_shooter_barrel_heat_limit_type arg)
  {
    msg_.shooter_barrel_heat_limit = std::move(arg);
    return Init_RobotStatus_chassis_power_limit(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_shooter_barrel_cooling_value
{
public:
  explicit Init_RobotStatus_shooter_barrel_cooling_value(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_barrel_heat_limit shooter_barrel_cooling_value(::rm_referee_msgs::msg::RobotStatus::_shooter_barrel_cooling_value_type arg)
  {
    msg_.shooter_barrel_cooling_value = std::move(arg);
    return Init_RobotStatus_shooter_barrel_heat_limit(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_maximum_hp
{
public:
  explicit Init_RobotStatus_maximum_hp(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_shooter_barrel_cooling_value maximum_hp(::rm_referee_msgs::msg::RobotStatus::_maximum_hp_type arg)
  {
    msg_.maximum_hp = std::move(arg);
    return Init_RobotStatus_shooter_barrel_cooling_value(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_current_hp
{
public:
  explicit Init_RobotStatus_current_hp(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_maximum_hp current_hp(::rm_referee_msgs::msg::RobotStatus::_current_hp_type arg)
  {
    msg_.current_hp = std::move(arg);
    return Init_RobotStatus_maximum_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_level
{
public:
  explicit Init_RobotStatus_robot_level(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_current_hp robot_level(::rm_referee_msgs::msg::RobotStatus::_robot_level_type arg)
  {
    msg_.robot_level = std::move(arg);
    return Init_RobotStatus_current_hp(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_id
{
public:
  explicit Init_RobotStatus_robot_id(::rm_referee_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_robot_level robot_id(::rm_referee_msgs::msg::RobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotStatus_robot_level(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_header
{
public:
  Init_RobotStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_robot_id header(::rm_referee_msgs::msg::RobotStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotStatus_robot_id(msg_);
  }

private:
  ::rm_referee_msgs::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::RobotStatus>()
{
  return rm_referee_msgs::msg::builder::Init_RobotStatus_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
