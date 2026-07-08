// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/DartClientCmd.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__DartClientCmd __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__DartClientCmd __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DartClientCmd_
{
  using Type = DartClientCmd_<ContainerAllocator>;

  explicit DartClientCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dart_launch_opening_status = 0;
      this->reserved = 0;
      this->target_change_time = 0;
      this->latest_launch_cmd_time = 0;
    }
  }

  explicit DartClientCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dart_launch_opening_status = 0;
      this->reserved = 0;
      this->target_change_time = 0;
      this->latest_launch_cmd_time = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dart_launch_opening_status_type =
    uint8_t;
  _dart_launch_opening_status_type dart_launch_opening_status;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _target_change_time_type =
    uint16_t;
  _target_change_time_type target_change_time;
  using _latest_launch_cmd_time_type =
    uint16_t;
  _latest_launch_cmd_time_type latest_launch_cmd_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dart_launch_opening_status(
    const uint8_t & _arg)
  {
    this->dart_launch_opening_status = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint8_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__target_change_time(
    const uint16_t & _arg)
  {
    this->target_change_time = _arg;
    return *this;
  }
  Type & set__latest_launch_cmd_time(
    const uint16_t & _arg)
  {
    this->latest_launch_cmd_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__DartClientCmd
    std::shared_ptr<rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__DartClientCmd
    std::shared_ptr<rm_referee_msgs::msg::DartClientCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DartClientCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dart_launch_opening_status != other.dart_launch_opening_status) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->target_change_time != other.target_change_time) {
      return false;
    }
    if (this->latest_launch_cmd_time != other.latest_launch_cmd_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const DartClientCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DartClientCmd_

// alias to use template instance with default allocator
using DartClientCmd =
  rm_referee_msgs::msg::DartClientCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__DART_CLIENT_CMD__STRUCT_HPP_
