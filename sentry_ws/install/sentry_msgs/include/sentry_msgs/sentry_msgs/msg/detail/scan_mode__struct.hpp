// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/ScanMode.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__SCAN_MODE__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__SCAN_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sentry_msgs__msg__ScanMode __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__ScanMode __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScanMode_
{
  using Type = ScanMode_<ContainerAllocator>;

  explicit ScanMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_mod_type = false;
    }
  }

  explicit ScanMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_mod_type = false;
    }
  }

  // field types and members
  using _scan_mod_type_type =
    bool;
  _scan_mod_type_type scan_mod_type;

  // setters for named parameter idiom
  Type & set__scan_mod_type(
    const bool & _arg)
  {
    this->scan_mod_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentry_msgs::msg::ScanMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::ScanMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::ScanMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::ScanMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::ScanMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::ScanMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::ScanMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::ScanMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::ScanMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::ScanMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__ScanMode
    std::shared_ptr<sentry_msgs::msg::ScanMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__ScanMode
    std::shared_ptr<sentry_msgs::msg::ScanMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScanMode_ & other) const
  {
    if (this->scan_mod_type != other.scan_mod_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScanMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScanMode_

// alias to use template instance with default allocator
using ScanMode =
  sentry_msgs::msg::ScanMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__SCAN_MODE__STRUCT_HPP_
