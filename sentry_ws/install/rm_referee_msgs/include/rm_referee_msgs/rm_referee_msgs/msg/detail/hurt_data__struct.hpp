// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/HurtData.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__HURT_DATA__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__HURT_DATA__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__HurtData __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__HurtData __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HurtData_
{
  using Type = HurtData_<ContainerAllocator>;

  explicit HurtData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->armor_id = 0;
      this->hp_deduction_reason = 0;
    }
  }

  explicit HurtData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->armor_id = 0;
      this->hp_deduction_reason = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _armor_id_type =
    uint8_t;
  _armor_id_type armor_id;
  using _hp_deduction_reason_type =
    uint8_t;
  _hp_deduction_reason_type hp_deduction_reason;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__armor_id(
    const uint8_t & _arg)
  {
    this->armor_id = _arg;
    return *this;
  }
  Type & set__hp_deduction_reason(
    const uint8_t & _arg)
  {
    this->hp_deduction_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::HurtData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::HurtData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::HurtData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::HurtData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::HurtData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::HurtData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::HurtData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::HurtData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::HurtData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::HurtData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__HurtData
    std::shared_ptr<rm_referee_msgs::msg::HurtData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__HurtData
    std::shared_ptr<rm_referee_msgs::msg::HurtData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HurtData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->armor_id != other.armor_id) {
      return false;
    }
    if (this->hp_deduction_reason != other.hp_deduction_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const HurtData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HurtData_

// alias to use template instance with default allocator
using HurtData =
  rm_referee_msgs::msg::HurtData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__HURT_DATA__STRUCT_HPP_
