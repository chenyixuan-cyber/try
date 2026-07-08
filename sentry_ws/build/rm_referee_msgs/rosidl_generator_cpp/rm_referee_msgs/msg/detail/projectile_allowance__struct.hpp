// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_referee_msgs:msg/ProjectileAllowance.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__PROJECTILE_ALLOWANCE__STRUCT_HPP_
#define RM_REFEREE_MSGS__MSG__DETAIL__PROJECTILE_ALLOWANCE__STRUCT_HPP_

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
# define DEPRECATED__rm_referee_msgs__msg__ProjectileAllowance __attribute__((deprecated))
#else
# define DEPRECATED__rm_referee_msgs__msg__ProjectileAllowance __declspec(deprecated)
#endif

namespace rm_referee_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProjectileAllowance_
{
  using Type = ProjectileAllowance_<ContainerAllocator>;

  explicit ProjectileAllowance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->projectile_allowance_17mm = 0;
      this->projectile_allowance_42mm = 0;
      this->remaining_gold_coin = 0;
      this->projectile_allowance_fortress = 0;
    }
  }

  explicit ProjectileAllowance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->projectile_allowance_17mm = 0;
      this->projectile_allowance_42mm = 0;
      this->remaining_gold_coin = 0;
      this->projectile_allowance_fortress = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _projectile_allowance_17mm_type =
    uint16_t;
  _projectile_allowance_17mm_type projectile_allowance_17mm;
  using _projectile_allowance_42mm_type =
    uint16_t;
  _projectile_allowance_42mm_type projectile_allowance_42mm;
  using _remaining_gold_coin_type =
    uint16_t;
  _remaining_gold_coin_type remaining_gold_coin;
  using _projectile_allowance_fortress_type =
    uint16_t;
  _projectile_allowance_fortress_type projectile_allowance_fortress;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__projectile_allowance_17mm(
    const uint16_t & _arg)
  {
    this->projectile_allowance_17mm = _arg;
    return *this;
  }
  Type & set__projectile_allowance_42mm(
    const uint16_t & _arg)
  {
    this->projectile_allowance_42mm = _arg;
    return *this;
  }
  Type & set__remaining_gold_coin(
    const uint16_t & _arg)
  {
    this->remaining_gold_coin = _arg;
    return *this;
  }
  Type & set__projectile_allowance_fortress(
    const uint16_t & _arg)
  {
    this->projectile_allowance_fortress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_referee_msgs__msg__ProjectileAllowance
    std::shared_ptr<rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_referee_msgs__msg__ProjectileAllowance
    std::shared_ptr<rm_referee_msgs::msg::ProjectileAllowance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProjectileAllowance_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->projectile_allowance_17mm != other.projectile_allowance_17mm) {
      return false;
    }
    if (this->projectile_allowance_42mm != other.projectile_allowance_42mm) {
      return false;
    }
    if (this->remaining_gold_coin != other.remaining_gold_coin) {
      return false;
    }
    if (this->projectile_allowance_fortress != other.projectile_allowance_fortress) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProjectileAllowance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProjectileAllowance_

// alias to use template instance with default allocator
using ProjectileAllowance =
  rm_referee_msgs::msg::ProjectileAllowance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_referee_msgs

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__PROJECTILE_ALLOWANCE__STRUCT_HPP_
