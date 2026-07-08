// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__EventData __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__EventData __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventData_
{
  using Type = EventData_<ContainerAllocator>;

  explicit EventData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_data = 0ul;
    }
  }

  explicit EventData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_data = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _event_data_type =
    uint32_t;
  _event_data_type event_data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__event_data(
    const uint32_t & _arg)
  {
    this->event_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::EventData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::EventData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::EventData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::EventData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::EventData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::EventData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::EventData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::EventData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::EventData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::EventData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__EventData
    std::shared_ptr<rm_referee_msgs::msg::EventData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__EventData
    std::shared_ptr<rm_referee_msgs::msg::EventData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->event_data != other.event_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventData_

// alias to use template instance with default allocator
using EventData =
  rm_referee_msgs::msg::EventData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
