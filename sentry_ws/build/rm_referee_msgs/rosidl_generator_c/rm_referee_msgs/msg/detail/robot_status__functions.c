// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__msg__RobotStatus__init(rm_referee_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__msg__RobotStatus__fini(msg);
    return false;
  }
  // robot_id
  // robot_level
  // current_hp
  // maximum_hp
  // shooter_barrel_cooling_value
  // shooter_barrel_heat_limit
  // chassis_power_limit
  // bullet_speed_limit
  // power_management_gimbal_output
  // power_management_chassis_output
  // power_management_shooter_output
  return true;
}

void
rm_referee_msgs__msg__RobotStatus__fini(rm_referee_msgs__msg__RobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // robot_id
  // robot_level
  // current_hp
  // maximum_hp
  // shooter_barrel_cooling_value
  // shooter_barrel_heat_limit
  // chassis_power_limit
  // bullet_speed_limit
  // power_management_gimbal_output
  // power_management_chassis_output
  // power_management_shooter_output
}

bool
rm_referee_msgs__msg__RobotStatus__are_equal(const rm_referee_msgs__msg__RobotStatus * lhs, const rm_referee_msgs__msg__RobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // robot_level
  if (lhs->robot_level != rhs->robot_level) {
    return false;
  }
  // current_hp
  if (lhs->current_hp != rhs->current_hp) {
    return false;
  }
  // maximum_hp
  if (lhs->maximum_hp != rhs->maximum_hp) {
    return false;
  }
  // shooter_barrel_cooling_value
  if (lhs->shooter_barrel_cooling_value != rhs->shooter_barrel_cooling_value) {
    return false;
  }
  // shooter_barrel_heat_limit
  if (lhs->shooter_barrel_heat_limit != rhs->shooter_barrel_heat_limit) {
    return false;
  }
  // chassis_power_limit
  if (lhs->chassis_power_limit != rhs->chassis_power_limit) {
    return false;
  }
  // bullet_speed_limit
  if (lhs->bullet_speed_limit != rhs->bullet_speed_limit) {
    return false;
  }
  // power_management_gimbal_output
  if (lhs->power_management_gimbal_output != rhs->power_management_gimbal_output) {
    return false;
  }
  // power_management_chassis_output
  if (lhs->power_management_chassis_output != rhs->power_management_chassis_output) {
    return false;
  }
  // power_management_shooter_output
  if (lhs->power_management_shooter_output != rhs->power_management_shooter_output) {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__msg__RobotStatus__copy(
  const rm_referee_msgs__msg__RobotStatus * input,
  rm_referee_msgs__msg__RobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // robot_level
  output->robot_level = input->robot_level;
  // current_hp
  output->current_hp = input->current_hp;
  // maximum_hp
  output->maximum_hp = input->maximum_hp;
  // shooter_barrel_cooling_value
  output->shooter_barrel_cooling_value = input->shooter_barrel_cooling_value;
  // shooter_barrel_heat_limit
  output->shooter_barrel_heat_limit = input->shooter_barrel_heat_limit;
  // chassis_power_limit
  output->chassis_power_limit = input->chassis_power_limit;
  // bullet_speed_limit
  output->bullet_speed_limit = input->bullet_speed_limit;
  // power_management_gimbal_output
  output->power_management_gimbal_output = input->power_management_gimbal_output;
  // power_management_chassis_output
  output->power_management_chassis_output = input->power_management_chassis_output;
  // power_management_shooter_output
  output->power_management_shooter_output = input->power_management_shooter_output;
  return true;
}

rm_referee_msgs__msg__RobotStatus *
rm_referee_msgs__msg__RobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__RobotStatus * msg = (rm_referee_msgs__msg__RobotStatus *)allocator.allocate(sizeof(rm_referee_msgs__msg__RobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__msg__RobotStatus));
  bool success = rm_referee_msgs__msg__RobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__msg__RobotStatus__destroy(rm_referee_msgs__msg__RobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__msg__RobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__msg__RobotStatus__Sequence__init(rm_referee_msgs__msg__RobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__RobotStatus * data = NULL;

  if (size) {
    data = (rm_referee_msgs__msg__RobotStatus *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__msg__RobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__msg__RobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__msg__RobotStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_referee_msgs__msg__RobotStatus__Sequence__fini(rm_referee_msgs__msg__RobotStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_referee_msgs__msg__RobotStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_referee_msgs__msg__RobotStatus__Sequence *
rm_referee_msgs__msg__RobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__RobotStatus__Sequence * array = (rm_referee_msgs__msg__RobotStatus__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__msg__RobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__msg__RobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__msg__RobotStatus__Sequence__destroy(rm_referee_msgs__msg__RobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__msg__RobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__msg__RobotStatus__Sequence__are_equal(const rm_referee_msgs__msg__RobotStatus__Sequence * lhs, const rm_referee_msgs__msg__RobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__msg__RobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__RobotStatus__Sequence__copy(
  const rm_referee_msgs__msg__RobotStatus__Sequence * input,
  rm_referee_msgs__msg__RobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__msg__RobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__msg__RobotStatus * data =
      (rm_referee_msgs__msg__RobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__msg__RobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__msg__RobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__msg__RobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
