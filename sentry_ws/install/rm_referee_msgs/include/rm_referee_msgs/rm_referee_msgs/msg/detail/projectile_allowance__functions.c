// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:msg/ProjectileAllowance.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/projectile_allowance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__msg__ProjectileAllowance__init(rm_referee_msgs__msg__ProjectileAllowance * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__msg__ProjectileAllowance__fini(msg);
    return false;
  }
  // projectile_allowance_17mm
  // projectile_allowance_42mm
  // remaining_gold_coin
  // projectile_allowance_fortress
  return true;
}

void
rm_referee_msgs__msg__ProjectileAllowance__fini(rm_referee_msgs__msg__ProjectileAllowance * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // projectile_allowance_17mm
  // projectile_allowance_42mm
  // remaining_gold_coin
  // projectile_allowance_fortress
}

bool
rm_referee_msgs__msg__ProjectileAllowance__are_equal(const rm_referee_msgs__msg__ProjectileAllowance * lhs, const rm_referee_msgs__msg__ProjectileAllowance * rhs)
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
  // projectile_allowance_17mm
  if (lhs->projectile_allowance_17mm != rhs->projectile_allowance_17mm) {
    return false;
  }
  // projectile_allowance_42mm
  if (lhs->projectile_allowance_42mm != rhs->projectile_allowance_42mm) {
    return false;
  }
  // remaining_gold_coin
  if (lhs->remaining_gold_coin != rhs->remaining_gold_coin) {
    return false;
  }
  // projectile_allowance_fortress
  if (lhs->projectile_allowance_fortress != rhs->projectile_allowance_fortress) {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__msg__ProjectileAllowance__copy(
  const rm_referee_msgs__msg__ProjectileAllowance * input,
  rm_referee_msgs__msg__ProjectileAllowance * output)
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
  // projectile_allowance_17mm
  output->projectile_allowance_17mm = input->projectile_allowance_17mm;
  // projectile_allowance_42mm
  output->projectile_allowance_42mm = input->projectile_allowance_42mm;
  // remaining_gold_coin
  output->remaining_gold_coin = input->remaining_gold_coin;
  // projectile_allowance_fortress
  output->projectile_allowance_fortress = input->projectile_allowance_fortress;
  return true;
}

rm_referee_msgs__msg__ProjectileAllowance *
rm_referee_msgs__msg__ProjectileAllowance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__ProjectileAllowance * msg = (rm_referee_msgs__msg__ProjectileAllowance *)allocator.allocate(sizeof(rm_referee_msgs__msg__ProjectileAllowance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__msg__ProjectileAllowance));
  bool success = rm_referee_msgs__msg__ProjectileAllowance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__msg__ProjectileAllowance__destroy(rm_referee_msgs__msg__ProjectileAllowance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__msg__ProjectileAllowance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__msg__ProjectileAllowance__Sequence__init(rm_referee_msgs__msg__ProjectileAllowance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__ProjectileAllowance * data = NULL;

  if (size) {
    data = (rm_referee_msgs__msg__ProjectileAllowance *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__msg__ProjectileAllowance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__msg__ProjectileAllowance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__msg__ProjectileAllowance__fini(&data[i - 1]);
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
rm_referee_msgs__msg__ProjectileAllowance__Sequence__fini(rm_referee_msgs__msg__ProjectileAllowance__Sequence * array)
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
      rm_referee_msgs__msg__ProjectileAllowance__fini(&array->data[i]);
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

rm_referee_msgs__msg__ProjectileAllowance__Sequence *
rm_referee_msgs__msg__ProjectileAllowance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__ProjectileAllowance__Sequence * array = (rm_referee_msgs__msg__ProjectileAllowance__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__msg__ProjectileAllowance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__msg__ProjectileAllowance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__msg__ProjectileAllowance__Sequence__destroy(rm_referee_msgs__msg__ProjectileAllowance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__msg__ProjectileAllowance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__msg__ProjectileAllowance__Sequence__are_equal(const rm_referee_msgs__msg__ProjectileAllowance__Sequence * lhs, const rm_referee_msgs__msg__ProjectileAllowance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__msg__ProjectileAllowance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__ProjectileAllowance__Sequence__copy(
  const rm_referee_msgs__msg__ProjectileAllowance__Sequence * input,
  rm_referee_msgs__msg__ProjectileAllowance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__msg__ProjectileAllowance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__msg__ProjectileAllowance * data =
      (rm_referee_msgs__msg__ProjectileAllowance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__msg__ProjectileAllowance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__msg__ProjectileAllowance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__msg__ProjectileAllowance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
