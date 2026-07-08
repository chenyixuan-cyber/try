// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/game_robot_hp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__msg__GameRobotHP__init(rm_referee_msgs__msg__GameRobotHP * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__msg__GameRobotHP__fini(msg);
    return false;
  }
  // ally_1_robot_hp
  // ally_2_robot_hp
  // ally_3_robot_hp
  // ally_4_robot_hp
  // damage_difference
  // ally_7_robot_hp
  // ally_outpost_hp
  // ally_base_hp
  // enemy_outpost_hp
  // enemy_base_hp
  return true;
}

void
rm_referee_msgs__msg__GameRobotHP__fini(rm_referee_msgs__msg__GameRobotHP * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ally_1_robot_hp
  // ally_2_robot_hp
  // ally_3_robot_hp
  // ally_4_robot_hp
  // damage_difference
  // ally_7_robot_hp
  // ally_outpost_hp
  // ally_base_hp
  // enemy_outpost_hp
  // enemy_base_hp
}

bool
rm_referee_msgs__msg__GameRobotHP__are_equal(const rm_referee_msgs__msg__GameRobotHP * lhs, const rm_referee_msgs__msg__GameRobotHP * rhs)
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
  // ally_1_robot_hp
  if (lhs->ally_1_robot_hp != rhs->ally_1_robot_hp) {
    return false;
  }
  // ally_2_robot_hp
  if (lhs->ally_2_robot_hp != rhs->ally_2_robot_hp) {
    return false;
  }
  // ally_3_robot_hp
  if (lhs->ally_3_robot_hp != rhs->ally_3_robot_hp) {
    return false;
  }
  // ally_4_robot_hp
  if (lhs->ally_4_robot_hp != rhs->ally_4_robot_hp) {
    return false;
  }
  // damage_difference
  if (lhs->damage_difference != rhs->damage_difference) {
    return false;
  }
  // ally_7_robot_hp
  if (lhs->ally_7_robot_hp != rhs->ally_7_robot_hp) {
    return false;
  }
  // ally_outpost_hp
  if (lhs->ally_outpost_hp != rhs->ally_outpost_hp) {
    return false;
  }
  // ally_base_hp
  if (lhs->ally_base_hp != rhs->ally_base_hp) {
    return false;
  }
  // enemy_outpost_hp
  if (lhs->enemy_outpost_hp != rhs->enemy_outpost_hp) {
    return false;
  }
  // enemy_base_hp
  if (lhs->enemy_base_hp != rhs->enemy_base_hp) {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__msg__GameRobotHP__copy(
  const rm_referee_msgs__msg__GameRobotHP * input,
  rm_referee_msgs__msg__GameRobotHP * output)
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
  // ally_1_robot_hp
  output->ally_1_robot_hp = input->ally_1_robot_hp;
  // ally_2_robot_hp
  output->ally_2_robot_hp = input->ally_2_robot_hp;
  // ally_3_robot_hp
  output->ally_3_robot_hp = input->ally_3_robot_hp;
  // ally_4_robot_hp
  output->ally_4_robot_hp = input->ally_4_robot_hp;
  // damage_difference
  output->damage_difference = input->damage_difference;
  // ally_7_robot_hp
  output->ally_7_robot_hp = input->ally_7_robot_hp;
  // ally_outpost_hp
  output->ally_outpost_hp = input->ally_outpost_hp;
  // ally_base_hp
  output->ally_base_hp = input->ally_base_hp;
  // enemy_outpost_hp
  output->enemy_outpost_hp = input->enemy_outpost_hp;
  // enemy_base_hp
  output->enemy_base_hp = input->enemy_base_hp;
  return true;
}

rm_referee_msgs__msg__GameRobotHP *
rm_referee_msgs__msg__GameRobotHP__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__GameRobotHP * msg = (rm_referee_msgs__msg__GameRobotHP *)allocator.allocate(sizeof(rm_referee_msgs__msg__GameRobotHP), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__msg__GameRobotHP));
  bool success = rm_referee_msgs__msg__GameRobotHP__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__msg__GameRobotHP__destroy(rm_referee_msgs__msg__GameRobotHP * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__msg__GameRobotHP__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__msg__GameRobotHP__Sequence__init(rm_referee_msgs__msg__GameRobotHP__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__GameRobotHP * data = NULL;

  if (size) {
    data = (rm_referee_msgs__msg__GameRobotHP *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__msg__GameRobotHP), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__msg__GameRobotHP__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__msg__GameRobotHP__fini(&data[i - 1]);
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
rm_referee_msgs__msg__GameRobotHP__Sequence__fini(rm_referee_msgs__msg__GameRobotHP__Sequence * array)
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
      rm_referee_msgs__msg__GameRobotHP__fini(&array->data[i]);
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

rm_referee_msgs__msg__GameRobotHP__Sequence *
rm_referee_msgs__msg__GameRobotHP__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__GameRobotHP__Sequence * array = (rm_referee_msgs__msg__GameRobotHP__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__msg__GameRobotHP__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__msg__GameRobotHP__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__msg__GameRobotHP__Sequence__destroy(rm_referee_msgs__msg__GameRobotHP__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__msg__GameRobotHP__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__msg__GameRobotHP__Sequence__are_equal(const rm_referee_msgs__msg__GameRobotHP__Sequence * lhs, const rm_referee_msgs__msg__GameRobotHP__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__msg__GameRobotHP__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__GameRobotHP__Sequence__copy(
  const rm_referee_msgs__msg__GameRobotHP__Sequence * input,
  rm_referee_msgs__msg__GameRobotHP__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__msg__GameRobotHP);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__msg__GameRobotHP * data =
      (rm_referee_msgs__msg__GameRobotHP *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__msg__GameRobotHP__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__msg__GameRobotHP__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__msg__GameRobotHP__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
