// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:msg/MapCommand.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/map_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__msg__MapCommand__init(rm_referee_msgs__msg__MapCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__msg__MapCommand__fini(msg);
    return false;
  }
  // target_position_x
  // target_position_y
  // cmd_keyboard
  // target_robot_id
  // cmd_source
  return true;
}

void
rm_referee_msgs__msg__MapCommand__fini(rm_referee_msgs__msg__MapCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // target_position_x
  // target_position_y
  // cmd_keyboard
  // target_robot_id
  // cmd_source
}

bool
rm_referee_msgs__msg__MapCommand__are_equal(const rm_referee_msgs__msg__MapCommand * lhs, const rm_referee_msgs__msg__MapCommand * rhs)
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
  // target_position_x
  if (lhs->target_position_x != rhs->target_position_x) {
    return false;
  }
  // target_position_y
  if (lhs->target_position_y != rhs->target_position_y) {
    return false;
  }
  // cmd_keyboard
  if (lhs->cmd_keyboard != rhs->cmd_keyboard) {
    return false;
  }
  // target_robot_id
  if (lhs->target_robot_id != rhs->target_robot_id) {
    return false;
  }
  // cmd_source
  if (lhs->cmd_source != rhs->cmd_source) {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__msg__MapCommand__copy(
  const rm_referee_msgs__msg__MapCommand * input,
  rm_referee_msgs__msg__MapCommand * output)
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
  // target_position_x
  output->target_position_x = input->target_position_x;
  // target_position_y
  output->target_position_y = input->target_position_y;
  // cmd_keyboard
  output->cmd_keyboard = input->cmd_keyboard;
  // target_robot_id
  output->target_robot_id = input->target_robot_id;
  // cmd_source
  output->cmd_source = input->cmd_source;
  return true;
}

rm_referee_msgs__msg__MapCommand *
rm_referee_msgs__msg__MapCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__MapCommand * msg = (rm_referee_msgs__msg__MapCommand *)allocator.allocate(sizeof(rm_referee_msgs__msg__MapCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__msg__MapCommand));
  bool success = rm_referee_msgs__msg__MapCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__msg__MapCommand__destroy(rm_referee_msgs__msg__MapCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__msg__MapCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__msg__MapCommand__Sequence__init(rm_referee_msgs__msg__MapCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__MapCommand * data = NULL;

  if (size) {
    data = (rm_referee_msgs__msg__MapCommand *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__msg__MapCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__msg__MapCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__msg__MapCommand__fini(&data[i - 1]);
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
rm_referee_msgs__msg__MapCommand__Sequence__fini(rm_referee_msgs__msg__MapCommand__Sequence * array)
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
      rm_referee_msgs__msg__MapCommand__fini(&array->data[i]);
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

rm_referee_msgs__msg__MapCommand__Sequence *
rm_referee_msgs__msg__MapCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__MapCommand__Sequence * array = (rm_referee_msgs__msg__MapCommand__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__msg__MapCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__msg__MapCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__msg__MapCommand__Sequence__destroy(rm_referee_msgs__msg__MapCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__msg__MapCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__msg__MapCommand__Sequence__are_equal(const rm_referee_msgs__msg__MapCommand__Sequence * lhs, const rm_referee_msgs__msg__MapCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__msg__MapCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__MapCommand__Sequence__copy(
  const rm_referee_msgs__msg__MapCommand__Sequence * input,
  rm_referee_msgs__msg__MapCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__msg__MapCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__msg__MapCommand * data =
      (rm_referee_msgs__msg__MapCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__msg__MapCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__msg__MapCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__msg__MapCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
