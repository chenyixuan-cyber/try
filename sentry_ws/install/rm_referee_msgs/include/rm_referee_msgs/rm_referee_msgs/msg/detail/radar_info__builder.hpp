// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__RADAR_INFO__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__RADAR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/radar_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarInfo_radar_info
{
public:
  explicit Init_RadarInfo_radar_info(::rm_referee_msgs::msg::RadarInfo & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::RadarInfo radar_info(::rm_referee_msgs::msg::RadarInfo::_radar_info_type arg)
  {
    msg_.radar_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::RadarInfo msg_;
};

class Init_RadarInfo_header
{
public:
  Init_RadarInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarInfo_radar_info header(::rm_referee_msgs::msg::RadarInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarInfo_radar_info(msg_);
  }

private:
  ::rm_referee_msgs::msg::RadarInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::RadarInfo>()
{
  return rm_referee_msgs::msg::builder::Init_RadarInfo_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__RADAR_INFO__BUILDER_HPP_
