// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/event_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_EventData_event_data
{
public:
  explicit Init_EventData_event_data(::rm_referee_msgs::msg::EventData & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::EventData event_data(::rm_referee_msgs::msg::EventData::_event_data_type arg)
  {
    msg_.event_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::EventData msg_;
};

class Init_EventData_header
{
public:
  Init_EventData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventData_event_data header(::rm_referee_msgs::msg::EventData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EventData_event_data(msg_);
  }

private:
  ::rm_referee_msgs::msg::EventData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::EventData>()
{
  return rm_referee_msgs::msg::builder::Init_EventData_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
