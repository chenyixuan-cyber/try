// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/DartInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__DART_INFO__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__DART_INFO__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__DartInfo __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__DartInfo __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DartInfo_
{
  using Type = DartInfo_<ContainerAllocator>;

  explicit DartInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dart_remaining_time = 0;
      this->dart_info = 0;
    }
  }

  explicit DartInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dart_remaining_time = 0;
      this->dart_info = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dart_remaining_time_type =
    uint8_t;
  _dart_remaining_time_type dart_remaining_time;
  using _dart_info_type =
    uint16_t;
  _dart_info_type dart_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dart_remaining_time(
    const uint8_t & _arg)
  {
    this->dart_remaining_time = _arg;
    return *this;
  }
  Type & set__dart_info(
    const uint16_t & _arg)
  {
    this->dart_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::DartInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::DartInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::DartInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::DartInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::DartInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::DartInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::DartInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::DartInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::DartInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::DartInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__DartInfo
    std::shared_ptr<rm_referee_msgs::msg::DartInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__DartInfo
    std::shared_ptr<rm_referee_msgs::msg::DartInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DartInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dart_remaining_time != other.dart_remaining_time) {
      return false;
    }
    if (this->dart_info != other.dart_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const DartInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DartInfo_

// alias to use template instance with default allocator
using DartInfo =
  rm_referee_msgs::msg::DartInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__DART_INFO__STRUCT_HPP_
