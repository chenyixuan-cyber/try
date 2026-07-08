// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_ShootData_initial_speed
{
public:
  explicit Init_ShootData_initial_speed(::rm_referee_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::ShootData initial_speed(::rm_referee_msgs::msg::ShootData::_initial_speed_type arg)
  {
    msg_.initial_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::ShootData msg_;
};

class Init_ShootData_launching_frequency
{
public:
  explicit Init_ShootData_launching_frequency(::rm_referee_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_initial_speed launching_frequency(::rm_referee_msgs::msg::ShootData::_launching_frequency_type arg)
  {
    msg_.launching_frequency = std::move(arg);
    return Init_ShootData_initial_speed(msg_);
  }

private:
  ::rm_referee_msgs::msg::ShootData msg_;
};

class Init_ShootData_shooter_number
{
public:
  explicit Init_ShootData_shooter_number(::rm_referee_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_launching_frequency shooter_number(::rm_referee_msgs::msg::ShootData::_shooter_number_type arg)
  {
    msg_.shooter_number = std::move(arg);
    return Init_ShootData_launching_frequency(msg_);
  }

private:
  ::rm_referee_msgs::msg::ShootData msg_;
};

class Init_ShootData_bullet_type
{
public:
  explicit Init_ShootData_bullet_type(::rm_referee_msgs::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_shooter_number bullet_type(::rm_referee_msgs::msg::ShootData::_bullet_type_type arg)
  {
    msg_.bullet_type = std::move(arg);
    return Init_ShootData_shooter_number(msg_);
  }

private:
  ::rm_referee_msgs::msg::ShootData msg_;
};

class Init_ShootData_header
{
public:
  Init_ShootData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShootData_bullet_type header(::rm_referee_msgs::msg::ShootData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ShootData_bullet_type(msg_);
  }

private:
  ::rm_referee_msgs::msg::ShootData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::ShootData>()
{
  return rm_referee_msgs::msg::builder::Init_ShootData_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
