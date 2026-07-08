// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/RadarMarkData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__RADAR_MARK_DATA__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__RADAR_MARK_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/radar_mark_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarMarkData_mark_progress
{
public:
  explicit Init_RadarMarkData_mark_progress(::rm_referee_msgs::msg::RadarMarkData & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::RadarMarkData mark_progress(::rm_referee_msgs::msg::RadarMarkData::_mark_progress_type arg)
  {
    msg_.mark_progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::RadarMarkData msg_;
};

class Init_RadarMarkData_header
{
public:
  Init_RadarMarkData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarMarkData_mark_progress header(::rm_referee_msgs::msg::RadarMarkData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarMarkData_mark_progress(msg_);
  }

private:
  ::rm_referee_msgs::msg::RadarMarkData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::RadarMarkData>()
{
  return rm_referee_msgs::msg::builder::Init_RadarMarkData_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__RADAR_MARK_DATA__BUILDER_HPP_
