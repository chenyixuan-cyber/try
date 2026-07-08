// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/power_heat_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerHeatData_shooter_42mm_barrel_heat
{
public:
  explicit Init_PowerHeatData_shooter_42mm_barrel_heat(::rm_referee_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::PowerHeatData shooter_42mm_barrel_heat(::rm_referee_msgs::msg::PowerHeatData::_shooter_42mm_barrel_heat_type arg)
  {
    msg_.shooter_42mm_barrel_heat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_shooter_17mm_1_barrel_heat
{
public:
  explicit Init_PowerHeatData_shooter_17mm_1_barrel_heat(::rm_referee_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_shooter_42mm_barrel_heat shooter_17mm_1_barrel_heat(::rm_referee_msgs::msg::PowerHeatData::_shooter_17mm_1_barrel_heat_type arg)
  {
    msg_.shooter_17mm_1_barrel_heat = std::move(arg);
    return Init_PowerHeatData_shooter_42mm_barrel_heat(msg_);
  }

private:
  ::rm_referee_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_buffer_energy
{
public:
  explicit Init_PowerHeatData_buffer_energy(::rm_referee_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_shooter_17mm_1_barrel_heat buffer_energy(::rm_referee_msgs::msg::PowerHeatData::_buffer_energy_type arg)
  {
    msg_.buffer_energy = std::move(arg);
    return Init_PowerHeatData_shooter_17mm_1_barrel_heat(msg_);
  }

private:
  ::rm_referee_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_reserved_3
{
public:
  explicit Init_PowerHeatData_reserved_3(::rm_referee_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_buffer_energy reserved_3(::rm_referee_msgs::msg::PowerHeatData::_reserved_3_type arg)
  {
    msg_.reserved_3 = std::move(arg);
    return Init_PowerHeatData_buffer_energy(msg_);
  }

private:
  ::rm_referee_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_reserved_2
{
public:
  explicit Init_PowerHeatData_reserved_2(::rm_referee_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_reserved_3 reserved_2(::rm_referee_msgs::msg::PowerHeatData::_reserved_2_type arg)
  {
    msg_.reserved_2 = std::move(arg);
    return Init_PowerHeatData_reserved_3(msg_);
  }

private:
  ::rm_referee_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_reserved
{
public:
  explicit Init_PowerHeatData_reserved(::rm_referee_msgs::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_reserved_2 reserved(::rm_referee_msgs::msg::PowerHeatData::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_PowerHeatData_reserved_2(msg_);
  }

private:
  ::rm_referee_msgs::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_header
{
public:
  Init_PowerHeatData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerHeatData_reserved header(::rm_referee_msgs::msg::PowerHeatData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowerHeatData_reserved(msg_);
  }

private:
  ::rm_referee_msgs::msg::PowerHeatData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::PowerHeatData>()
{
  return rm_referee_msgs::msg::builder::Init_PowerHeatData_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__BUILDER_HPP_
