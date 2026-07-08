// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/HurtData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__HURT_DATA__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__HURT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/hurt_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_HurtData_hp_deduction_reason
{
public:
  explicit Init_HurtData_hp_deduction_reason(::rm_referee_msgs::msg::HurtData & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::HurtData hp_deduction_reason(::rm_referee_msgs::msg::HurtData::_hp_deduction_reason_type arg)
  {
    msg_.hp_deduction_reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::HurtData msg_;
};

class Init_HurtData_armor_id
{
public:
  explicit Init_HurtData_armor_id(::rm_referee_msgs::msg::HurtData & msg)
  : msg_(msg)
  {}
  Init_HurtData_hp_deduction_reason armor_id(::rm_referee_msgs::msg::HurtData::_armor_id_type arg)
  {
    msg_.armor_id = std::move(arg);
    return Init_HurtData_hp_deduction_reason(msg_);
  }

private:
  ::rm_referee_msgs::msg::HurtData msg_;
};

class Init_HurtData_header
{
public:
  Init_HurtData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HurtData_armor_id header(::rm_referee_msgs::msg::HurtData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HurtData_armor_id(msg_);
  }

private:
  ::rm_referee_msgs::msg::HurtData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::HurtData>()
{
  return rm_referee_msgs::msg::builder::Init_HurtData_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__HURT_DATA__BUILDER_HPP_
