// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:msg/Buff.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/buff__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__msg__Buff__init(rm_referee_msgs__msg__Buff * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__msg__Buff__fini(msg);
    return false;
  }
  // recovery_buff
  // cooling_buff
  // defence_buff
  // vulnerability_buff
  // attack_buff
  // remaining_energy
  return true;
}

void
rm_referee_msgs__msg__Buff__fini(rm_referee_msgs__msg__Buff * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // recovery_buff
  // cooling_buff
  // defence_buff
  // vulnerability_buff
  // attack_buff
  // remaining_energy
}

bool
rm_referee_msgs__msg__Buff__are_equal(const rm_referee_msgs__msg__Buff * lhs, const rm_referee_msgs__msg__Buff * rhs)
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
  // recovery_buff
  if (lhs->recovery_buff != rhs->recovery_buff) {
    return false;
  }
  // cooling_buff
  if (lhs->cooling_buff != rhs->cooling_buff) {
    return false;
  }
  // defence_buff
  if (lhs->defence_buff != rhs->defence_buff) {
    return false;
  }
  // vulnerability_buff
  if (lhs->vulnerability_buff != rhs->vulnerability_buff) {
    return false;
  }
  // attack_buff
  if (lhs->attack_buff != rhs->attack_buff) {
    return false;
  }
  // remaining_energy
  if (lhs->remaining_energy != rhs->remaining_energy) {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__msg__Buff__copy(
  const rm_referee_msgs__msg__Buff * input,
  rm_referee_msgs__msg__Buff * output)
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
  // recovery_buff
  output->recovery_buff = input->recovery_buff;
  // cooling_buff
  output->cooling_buff = input->cooling_buff;
  // defence_buff
  output->defence_buff = input->defence_buff;
  // vulnerability_buff
  output->vulnerability_buff = input->vulnerability_buff;
  // attack_buff
  output->attack_buff = input->attack_buff;
  // remaining_energy
  output->remaining_energy = input->remaining_energy;
  return true;
}

rm_referee_msgs__msg__Buff *
rm_referee_msgs__msg__Buff__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__Buff * msg = (rm_referee_msgs__msg__Buff *)allocator.allocate(sizeof(rm_referee_msgs__msg__Buff), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__msg__Buff));
  bool success = rm_referee_msgs__msg__Buff__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__msg__Buff__destroy(rm_referee_msgs__msg__Buff * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__msg__Buff__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__msg__Buff__Sequence__init(rm_referee_msgs__msg__Buff__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__Buff * data = NULL;

  if (size) {
    data = (rm_referee_msgs__msg__Buff *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__msg__Buff), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__msg__Buff__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__msg__Buff__fini(&data[i - 1]);
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
rm_referee_msgs__msg__Buff__Sequence__fini(rm_referee_msgs__msg__Buff__Sequence * array)
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
      rm_referee_msgs__msg__Buff__fini(&array->data[i]);
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

rm_referee_msgs__msg__Buff__Sequence *
rm_referee_msgs__msg__Buff__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__Buff__Sequence * array = (rm_referee_msgs__msg__Buff__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__msg__Buff__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__msg__Buff__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__msg__Buff__Sequence__destroy(rm_referee_msgs__msg__Buff__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__msg__Buff__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__msg__Buff__Sequence__are_equal(const rm_referee_msgs__msg__Buff__Sequence * lhs, const rm_referee_msgs__msg__Buff__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__msg__Buff__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__Buff__Sequence__copy(
  const rm_referee_msgs__msg__Buff__Sequence * input,
  rm_referee_msgs__msg__Buff__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__msg__Buff);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__msg__Buff * data =
      (rm_referee_msgs__msg__Buff *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__msg__Buff__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__msg__Buff__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__msg__Buff__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
