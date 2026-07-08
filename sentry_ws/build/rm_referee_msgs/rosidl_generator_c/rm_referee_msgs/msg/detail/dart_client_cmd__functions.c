// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:msg/DartClientCmd.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/dart_client_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__msg__DartClientCmd__init(rm_referee_msgs__msg__DartClientCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__msg__DartClientCmd__fini(msg);
    return false;
  }
  // dart_launch_opening_status
  // reserved
  // target_change_time
  // latest_launch_cmd_time
  return true;
}

void
rm_referee_msgs__msg__DartClientCmd__fini(rm_referee_msgs__msg__DartClientCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // dart_launch_opening_status
  // reserved
  // target_change_time
  // latest_launch_cmd_time
}

bool
rm_referee_msgs__msg__DartClientCmd__are_equal(const rm_referee_msgs__msg__DartClientCmd * lhs, const rm_referee_msgs__msg__DartClientCmd * rhs)
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
  // dart_launch_opening_status
  if (lhs->dart_launch_opening_status != rhs->dart_launch_opening_status) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // target_change_time
  if (lhs->target_change_time != rhs->target_change_time) {
    return false;
  }
  // latest_launch_cmd_time
  if (lhs->latest_launch_cmd_time != rhs->latest_launch_cmd_time) {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__msg__DartClientCmd__copy(
  const rm_referee_msgs__msg__DartClientCmd * input,
  rm_referee_msgs__msg__DartClientCmd * output)
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
  // dart_launch_opening_status
  output->dart_launch_opening_status = input->dart_launch_opening_status;
  // reserved
  output->reserved = input->reserved;
  // target_change_time
  output->target_change_time = input->target_change_time;
  // latest_launch_cmd_time
  output->latest_launch_cmd_time = input->latest_launch_cmd_time;
  return true;
}

rm_referee_msgs__msg__DartClientCmd *
rm_referee_msgs__msg__DartClientCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__DartClientCmd * msg = (rm_referee_msgs__msg__DartClientCmd *)allocator.allocate(sizeof(rm_referee_msgs__msg__DartClientCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__msg__DartClientCmd));
  bool success = rm_referee_msgs__msg__DartClientCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__msg__DartClientCmd__destroy(rm_referee_msgs__msg__DartClientCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__msg__DartClientCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__msg__DartClientCmd__Sequence__init(rm_referee_msgs__msg__DartClientCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__DartClientCmd * data = NULL;

  if (size) {
    data = (rm_referee_msgs__msg__DartClientCmd *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__msg__DartClientCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__msg__DartClientCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__msg__DartClientCmd__fini(&data[i - 1]);
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
rm_referee_msgs__msg__DartClientCmd__Sequence__fini(rm_referee_msgs__msg__DartClientCmd__Sequence * array)
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
      rm_referee_msgs__msg__DartClientCmd__fini(&array->data[i]);
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

rm_referee_msgs__msg__DartClientCmd__Sequence *
rm_referee_msgs__msg__DartClientCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__DartClientCmd__Sequence * array = (rm_referee_msgs__msg__DartClientCmd__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__msg__DartClientCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__msg__DartClientCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__msg__DartClientCmd__Sequence__destroy(rm_referee_msgs__msg__DartClientCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__msg__DartClientCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__msg__DartClientCmd__Sequence__are_equal(const rm_referee_msgs__msg__DartClientCmd__Sequence * lhs, const rm_referee_msgs__msg__DartClientCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__msg__DartClientCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__DartClientCmd__Sequence__copy(
  const rm_referee_msgs__msg__DartClientCmd__Sequence * input,
  rm_referee_msgs__msg__DartClientCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__msg__DartClientCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__msg__DartClientCmd * data =
      (rm_referee_msgs__msg__DartClientCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__msg__DartClientCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__msg__DartClientCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__msg__DartClientCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
