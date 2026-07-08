// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:msg/RobotCustomData.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/robot_custom_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__msg__RobotCustomData__init(rm_referee_msgs__msg__RobotCustomData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__msg__RobotCustomData__fini(msg);
    return false;
  }
  // data
  return true;
}

void
rm_referee_msgs__msg__RobotCustomData__fini(rm_referee_msgs__msg__RobotCustomData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
}

bool
rm_referee_msgs__msg__RobotCustomData__are_equal(const rm_referee_msgs__msg__RobotCustomData * lhs, const rm_referee_msgs__msg__RobotCustomData * rhs)
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
  // data
  for (size_t i = 0; i < 30; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__RobotCustomData__copy(
  const rm_referee_msgs__msg__RobotCustomData * input,
  rm_referee_msgs__msg__RobotCustomData * output)
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
  // data
  for (size_t i = 0; i < 30; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

rm_referee_msgs__msg__RobotCustomData *
rm_referee_msgs__msg__RobotCustomData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__RobotCustomData * msg = (rm_referee_msgs__msg__RobotCustomData *)allocator.allocate(sizeof(rm_referee_msgs__msg__RobotCustomData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__msg__RobotCustomData));
  bool success = rm_referee_msgs__msg__RobotCustomData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__msg__RobotCustomData__destroy(rm_referee_msgs__msg__RobotCustomData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__msg__RobotCustomData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__msg__RobotCustomData__Sequence__init(rm_referee_msgs__msg__RobotCustomData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__RobotCustomData * data = NULL;

  if (size) {
    data = (rm_referee_msgs__msg__RobotCustomData *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__msg__RobotCustomData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__msg__RobotCustomData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__msg__RobotCustomData__fini(&data[i - 1]);
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
rm_referee_msgs__msg__RobotCustomData__Sequence__fini(rm_referee_msgs__msg__RobotCustomData__Sequence * array)
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
      rm_referee_msgs__msg__RobotCustomData__fini(&array->data[i]);
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

rm_referee_msgs__msg__RobotCustomData__Sequence *
rm_referee_msgs__msg__RobotCustomData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__RobotCustomData__Sequence * array = (rm_referee_msgs__msg__RobotCustomData__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__msg__RobotCustomData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__msg__RobotCustomData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__msg__RobotCustomData__Sequence__destroy(rm_referee_msgs__msg__RobotCustomData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__msg__RobotCustomData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__msg__RobotCustomData__Sequence__are_equal(const rm_referee_msgs__msg__RobotCustomData__Sequence * lhs, const rm_referee_msgs__msg__RobotCustomData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__msg__RobotCustomData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__RobotCustomData__Sequence__copy(
  const rm_referee_msgs__msg__RobotCustomData__Sequence * input,
  rm_referee_msgs__msg__RobotCustomData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__msg__RobotCustomData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__msg__RobotCustomData * data =
      (rm_referee_msgs__msg__RobotCustomData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__msg__RobotCustomData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__msg__RobotCustomData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__msg__RobotCustomData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
