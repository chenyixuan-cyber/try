// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_msgs:msg/ArmorPresence.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/armor_presence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
sentry_msgs__msg__ArmorPresence__init(sentry_msgs__msg__ArmorPresence * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sentry_msgs__msg__ArmorPresence__fini(msg);
    return false;
  }
  // left
  // behind
  // right
  // enemy_color
  return true;
}

void
sentry_msgs__msg__ArmorPresence__fini(sentry_msgs__msg__ArmorPresence * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left
  // behind
  // right
  // enemy_color
}

bool
sentry_msgs__msg__ArmorPresence__are_equal(const sentry_msgs__msg__ArmorPresence * lhs, const sentry_msgs__msg__ArmorPresence * rhs)
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
  // left
  if (lhs->left != rhs->left) {
    return false;
  }
  // behind
  if (lhs->behind != rhs->behind) {
    return false;
  }
  // right
  if (lhs->right != rhs->right) {
    return false;
  }
  // enemy_color
  if (lhs->enemy_color != rhs->enemy_color) {
    return false;
  }
  return true;
}

bool
sentry_msgs__msg__ArmorPresence__copy(
  const sentry_msgs__msg__ArmorPresence * input,
  sentry_msgs__msg__ArmorPresence * output)
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
  // left
  output->left = input->left;
  // behind
  output->behind = input->behind;
  // right
  output->right = input->right;
  // enemy_color
  output->enemy_color = input->enemy_color;
  return true;
}

sentry_msgs__msg__ArmorPresence *
sentry_msgs__msg__ArmorPresence__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__ArmorPresence * msg = (sentry_msgs__msg__ArmorPresence *)allocator.allocate(sizeof(sentry_msgs__msg__ArmorPresence), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_msgs__msg__ArmorPresence));
  bool success = sentry_msgs__msg__ArmorPresence__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_msgs__msg__ArmorPresence__destroy(sentry_msgs__msg__ArmorPresence * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_msgs__msg__ArmorPresence__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_msgs__msg__ArmorPresence__Sequence__init(sentry_msgs__msg__ArmorPresence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__ArmorPresence * data = NULL;

  if (size) {
    data = (sentry_msgs__msg__ArmorPresence *)allocator.zero_allocate(size, sizeof(sentry_msgs__msg__ArmorPresence), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_msgs__msg__ArmorPresence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_msgs__msg__ArmorPresence__fini(&data[i - 1]);
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
sentry_msgs__msg__ArmorPresence__Sequence__fini(sentry_msgs__msg__ArmorPresence__Sequence * array)
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
      sentry_msgs__msg__ArmorPresence__fini(&array->data[i]);
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

sentry_msgs__msg__ArmorPresence__Sequence *
sentry_msgs__msg__ArmorPresence__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__ArmorPresence__Sequence * array = (sentry_msgs__msg__ArmorPresence__Sequence *)allocator.allocate(sizeof(sentry_msgs__msg__ArmorPresence__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_msgs__msg__ArmorPresence__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_msgs__msg__ArmorPresence__Sequence__destroy(sentry_msgs__msg__ArmorPresence__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_msgs__msg__ArmorPresence__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_msgs__msg__ArmorPresence__Sequence__are_equal(const sentry_msgs__msg__ArmorPresence__Sequence * lhs, const sentry_msgs__msg__ArmorPresence__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_msgs__msg__ArmorPresence__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_msgs__msg__ArmorPresence__Sequence__copy(
  const sentry_msgs__msg__ArmorPresence__Sequence * input,
  sentry_msgs__msg__ArmorPresence__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_msgs__msg__ArmorPresence);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_msgs__msg__ArmorPresence * data =
      (sentry_msgs__msg__ArmorPresence *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_msgs__msg__ArmorPresence__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_msgs__msg__ArmorPresence__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_msgs__msg__ArmorPresence__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
