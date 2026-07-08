// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__RFIDStatus __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__RFIDStatus __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RFIDStatus_
{
  using Type = RFIDStatus_<ContainerAllocator>;

  explicit RFIDStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rfid_status = 0ul;
      this->rfid_status_2 = 0;
    }
  }

  explicit RFIDStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rfid_status = 0ul;
      this->rfid_status_2 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rfid_status_type =
    uint32_t;
  _rfid_status_type rfid_status;
  using _rfid_status_2_type =
    uint8_t;
  _rfid_status_2_type rfid_status_2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rfid_status(
    const uint32_t & _arg)
  {
    this->rfid_status = _arg;
    return *this;
  }
  Type & set__rfid_status_2(
    const uint8_t & _arg)
  {
    this->rfid_status_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__RFIDStatus
    std::shared_ptr<rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__RFIDStatus
    std::shared_ptr<rm_referee_msgs::msg::RFIDStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RFIDStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rfid_status != other.rfid_status) {
      return false;
    }
    if (this->rfid_status_2 != other.rfid_status_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const RFIDStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RFIDStatus_

// alias to use template instance with default allocator
using RFIDStatus =
  rm_referee_msgs::msg::RFIDStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_HPP_
