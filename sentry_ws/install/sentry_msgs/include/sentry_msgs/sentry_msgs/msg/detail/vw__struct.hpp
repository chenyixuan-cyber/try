// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/Vw.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__VW__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__VW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sentry_msgs__msg__Vw __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__Vw __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vw_
{
  using Type = Vw_<ContainerAllocator>;

  explicit Vw_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vw = 0.0f;
    }
  }

  explicit Vw_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vw = 0.0f;
    }
  }

  // field types and members
  using _vw_type =
    float;
  _vw_type vw;

  // setters for named parameter idiom
  Type & set__vw(
    const float & _arg)
  {
    this->vw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentry_msgs::msg::Vw_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::Vw_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::Vw_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::Vw_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::Vw_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::Vw_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::Vw_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::Vw_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::Vw_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::Vw_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__Vw
    std::shared_ptr<sentry_msgs::msg::Vw_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__Vw
    std::shared_ptr<sentry_msgs::msg::Vw_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vw_ & other) const
  {
    if (this->vw != other.vw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vw_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vw_

// alias to use template instance with default allocator
using Vw =
  sentry_msgs::msg::Vw_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__VW__STRUCT_HPP_
