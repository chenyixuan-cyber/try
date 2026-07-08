// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/rfid_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_RFIDStatus_rfid_status_2
{
public:
  explicit Init_RFIDStatus_rfid_status_2(::rm_referee_msgs::msg::RFIDStatus & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::RFIDStatus rfid_status_2(::rm_referee_msgs::msg::RFIDStatus::_rfid_status_2_type arg)
  {
    msg_.rfid_status_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::RFIDStatus msg_;
};

class Init_RFIDStatus_rfid_status
{
public:
  explicit Init_RFIDStatus_rfid_status(::rm_referee_msgs::msg::RFIDStatus & msg)
  : msg_(msg)
  {}
  Init_RFIDStatus_rfid_status_2 rfid_status(::rm_referee_msgs::msg::RFIDStatus::_rfid_status_type arg)
  {
    msg_.rfid_status = std::move(arg);
    return Init_RFIDStatus_rfid_status_2(msg_);
  }

private:
  ::rm_referee_msgs::msg::RFIDStatus msg_;
};

class Init_RFIDStatus_header
{
public:
  Init_RFIDStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RFIDStatus_rfid_status header(::rm_referee_msgs::msg::RFIDStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RFIDStatus_rfid_status(msg_);
  }

private:
  ::rm_referee_msgs::msg::RFIDStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::RFIDStatus>()
{
  return rm_referee_msgs::msg::builder::Init_RFIDStatus_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
