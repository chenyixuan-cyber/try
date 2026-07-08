// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/KeyboardMouseControl.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_referee_msgs__msg__KeyboardMouseControl __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__KeyboardMouseControl __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyboardMouseControl_
{
  using Type = KeyboardMouseControl_<ContainerAllocator>;

  explicit KeyboardMouseControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mouse_x = 0l;
      this->mouse_y = 0l;
      this->mouse_z = 0l;
      this->left_button_down = false;
      this->right_button_down = false;
      this->keyboard_value = 0ul;
      this->mid_button_down = false;
    }
  }

  explicit KeyboardMouseControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mouse_x = 0l;
      this->mouse_y = 0l;
      this->mouse_z = 0l;
      this->left_button_down = false;
      this->right_button_down = false;
      this->keyboard_value = 0ul;
      this->mid_button_down = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mouse_x_type =
    int32_t;
  _mouse_x_type mouse_x;
  using _mouse_y_type =
    int32_t;
  _mouse_y_type mouse_y;
  using _mouse_z_type =
    int32_t;
  _mouse_z_type mouse_z;
  using _left_button_down_type =
    bool;
  _left_button_down_type left_button_down;
  using _right_button_down_type =
    bool;
  _right_button_down_type right_button_down;
  using _keyboard_value_type =
    uint32_t;
  _keyboard_value_type keyboard_value;
  using _mid_button_down_type =
    bool;
  _mid_button_down_type mid_button_down;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mouse_x(
    const int32_t & _arg)
  {
    this->mouse_x = _arg;
    return *this;
  }
  Type & set__mouse_y(
    const int32_t & _arg)
  {
    this->mouse_y = _arg;
    return *this;
  }
  Type & set__mouse_z(
    const int32_t & _arg)
  {
    this->mouse_z = _arg;
    return *this;
  }
  Type & set__left_button_down(
    const bool & _arg)
  {
    this->left_button_down = _arg;
    return *this;
  }
  Type & set__right_button_down(
    const bool & _arg)
  {
    this->right_button_down = _arg;
    return *this;
  }
  Type & set__keyboard_value(
    const uint32_t & _arg)
  {
    this->keyboard_value = _arg;
    return *this;
  }
  Type & set__mid_button_down(
    const bool & _arg)
  {
    this->mid_button_down = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t KEY_W =
    1u;
  static constexpr uint32_t KEY_S =
    2u;
  static constexpr uint32_t KEY_A =
    4u;
  static constexpr uint32_t KEY_D =
    8u;
  static constexpr uint32_t KEY_SHIFT =
    16u;
  static constexpr uint32_t KEY_CTRL =
    32u;
  static constexpr uint32_t KEY_Q =
    64u;
  static constexpr uint32_t KEY_E =
    128u;
  static constexpr uint32_t KEY_R =
    256u;
  static constexpr uint32_t KEY_F =
    512u;
  static constexpr uint32_t KEY_G =
    1024u;
  static constexpr uint32_t KEY_Z =
    2048u;
  static constexpr uint32_t KEY_X =
    4096u;
  static constexpr uint32_t KEY_C =
    8192u;
  static constexpr uint32_t KEY_V =
    16384u;
  static constexpr uint32_t KEY_B =
    32768u;

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__KeyboardMouseControl
    std::shared_ptr<rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__KeyboardMouseControl
    std::shared_ptr<rm_referee_msgs::msg::KeyboardMouseControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyboardMouseControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mouse_x != other.mouse_x) {
      return false;
    }
    if (this->mouse_y != other.mouse_y) {
      return false;
    }
    if (this->mouse_z != other.mouse_z) {
      return false;
    }
    if (this->left_button_down != other.left_button_down) {
      return false;
    }
    if (this->right_button_down != other.right_button_down) {
      return false;
    }
    if (this->keyboard_value != other.keyboard_value) {
      return false;
    }
    if (this->mid_button_down != other.mid_button_down) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyboardMouseControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyboardMouseControl_

// alias to use template instance with default allocator
using KeyboardMouseControl =
  rm_referee_msgs::msg::KeyboardMouseControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_W;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_S;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_SHIFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_CTRL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_Q;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_E;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_R;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_F;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_G;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_Z;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_X;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_C;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_V;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t KeyboardMouseControl_<ContainerAllocator>::KEY_B;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__STRUCT_HPP_
