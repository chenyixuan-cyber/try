// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:srv/Tx.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__SRV__DETAIL__TX__BUILDER_HPP_
#define RM_REFEREE_MSGS__SRV__DETAIL__TX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/srv/detail/tx__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace srv
{

namespace builder
{

class Init_Tx_Request_data
{
public:
  explicit Init_Tx_Request_data(::rm_referee_msgs::srv::Tx_Request & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::srv::Tx_Request data(::rm_referee_msgs::srv::Tx_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::srv::Tx_Request msg_;
};

class Init_Tx_Request_header
{
public:
  Init_Tx_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tx_Request_data header(::rm_referee_msgs::srv::Tx_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Tx_Request_data(msg_);
  }

private:
  ::rm_referee_msgs::srv::Tx_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::srv::Tx_Request>()
{
  return rm_referee_msgs::srv::builder::Init_Tx_Request_header();
}

}  // namespace rm_referee_msgs


namespace rm_referee_msgs
{

namespace srv
{

namespace builder
{

class Init_Tx_Response_ok
{
public:
  explicit Init_Tx_Response_ok(::rm_referee_msgs::srv::Tx_Response & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::srv::Tx_Response ok(::rm_referee_msgs::srv::Tx_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::srv::Tx_Response msg_;
};

class Init_Tx_Response_header
{
public:
  Init_Tx_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tx_Response_ok header(::rm_referee_msgs::srv::Tx_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Tx_Response_ok(msg_);
  }

private:
  ::rm_referee_msgs::srv::Tx_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::srv::Tx_Response>()
{
  return rm_referee_msgs::srv::builder::Init_Tx_Response_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__SRV__DETAIL__TX__BUILDER_HPP_
