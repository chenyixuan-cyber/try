// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_referee_msgs:msg/KeyboardMouseControl.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__BUILDER_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_referee_msgs/msg/detail/keyboard_mouse_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_referee_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyboardMouseControl_mid_button_down
{
public:
  explicit Init_KeyboardMouseControl_mid_button_down(::rm_referee_msgs::msg::KeyboardMouseControl & msg)
  : msg_(msg)
  {}
  ::rm_referee_msgs::msg::KeyboardMouseControl mid_button_down(::rm_referee_msgs::msg::KeyboardMouseControl::_mid_button_down_type arg)
  {
    msg_.mid_button_down = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_referee_msgs::msg::KeyboardMouseControl msg_;
};

class Init_KeyboardMouseControl_keyboard_value
{
public:
  explicit Init_KeyboardMouseControl_keyboard_value(::rm_referee_msgs::msg::KeyboardMouseControl & msg)
  : msg_(msg)
  {}
  Init_KeyboardMouseControl_mid_button_down keyboard_value(::rm_referee_msgs::msg::KeyboardMouseControl::_keyboard_value_type arg)
  {
    msg_.keyboard_value = std::move(arg);
    return Init_KeyboardMouseControl_mid_button_down(msg_);
  }

private:
  ::rm_referee_msgs::msg::KeyboardMouseControl msg_;
};

class Init_KeyboardMouseControl_right_button_down
{
public:
  explicit Init_KeyboardMouseControl_right_button_down(::rm_referee_msgs::msg::KeyboardMouseControl & msg)
  : msg_(msg)
  {}
  Init_KeyboardMouseControl_keyboard_value right_button_down(::rm_referee_msgs::msg::KeyboardMouseControl::_right_button_down_type arg)
  {
    msg_.right_button_down = std::move(arg);
    return Init_KeyboardMouseControl_keyboard_value(msg_);
  }

private:
  ::rm_referee_msgs::msg::KeyboardMouseControl msg_;
};

class Init_KeyboardMouseControl_left_button_down
{
public:
  explicit Init_KeyboardMouseControl_left_button_down(::rm_referee_msgs::msg::KeyboardMouseControl & msg)
  : msg_(msg)
  {}
  Init_KeyboardMouseControl_right_button_down left_button_down(::rm_referee_msgs::msg::KeyboardMouseControl::_left_button_down_type arg)
  {
    msg_.left_button_down = std::move(arg);
    return Init_KeyboardMouseControl_right_button_down(msg_);
  }

private:
  ::rm_referee_msgs::msg::KeyboardMouseControl msg_;
};

class Init_KeyboardMouseControl_mouse_z
{
public:
  explicit Init_KeyboardMouseControl_mouse_z(::rm_referee_msgs::msg::KeyboardMouseControl & msg)
  : msg_(msg)
  {}
  Init_KeyboardMouseControl_left_button_down mouse_z(::rm_referee_msgs::msg::KeyboardMouseControl::_mouse_z_type arg)
  {
    msg_.mouse_z = std::move(arg);
    return Init_KeyboardMouseControl_left_button_down(msg_);
  }

private:
  ::rm_referee_msgs::msg::KeyboardMouseControl msg_;
};

class Init_KeyboardMouseControl_mouse_y
{
public:
  explicit Init_KeyboardMouseControl_mouse_y(::rm_referee_msgs::msg::KeyboardMouseControl & msg)
  : msg_(msg)
  {}
  Init_KeyboardMouseControl_mouse_z mouse_y(::rm_referee_msgs::msg::KeyboardMouseControl::_mouse_y_type arg)
  {
    msg_.mouse_y = std::move(arg);
    return Init_KeyboardMouseControl_mouse_z(msg_);
  }

private:
  ::rm_referee_msgs::msg::KeyboardMouseControl msg_;
};

class Init_KeyboardMouseControl_mouse_x
{
public:
  explicit Init_KeyboardMouseControl_mouse_x(::rm_referee_msgs::msg::KeyboardMouseControl & msg)
  : msg_(msg)
  {}
  Init_KeyboardMouseControl_mouse_y mouse_x(::rm_referee_msgs::msg::KeyboardMouseControl::_mouse_x_type arg)
  {
    msg_.mouse_x = std::move(arg);
    return Init_KeyboardMouseControl_mouse_y(msg_);
  }

private:
  ::rm_referee_msgs::msg::KeyboardMouseControl msg_;
};

class Init_KeyboardMouseControl_header
{
public:
  Init_KeyboardMouseControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyboardMouseControl_mouse_x header(::rm_referee_msgs::msg::KeyboardMouseControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KeyboardMouseControl_mouse_x(msg_);
  }

private:
  ::rm_referee_msgs::msg::KeyboardMouseControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_referee_msgs::msg::KeyboardMouseControl>()
{
  return rm_referee_msgs::msg::builder::Init_KeyboardMouseControl_header();
}

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__BUILDER_HPP_
