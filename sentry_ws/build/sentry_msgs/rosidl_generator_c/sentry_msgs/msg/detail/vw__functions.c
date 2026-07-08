// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_msgs:msg/Vw.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/vw__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sentry_msgs__msg__Vw__init(sentry_msgs__msg__Vw * msg)
{
  if (!msg) {
    return false;
  }
  // vw
  return true;
}

void
sentry_msgs__msg__Vw__fini(sentry_msgs__msg__Vw * msg)
{
  if (!msg) {
    return;
  }
  // vw
}

bool
sentry_msgs__msg__Vw__are_equal(const sentry_msgs__msg__Vw * lhs, const sentry_msgs__msg__Vw * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vw
  if (lhs->vw != rhs->vw) {
    return false;
  }
  return true;
}

bool
sentry_msgs__msg__Vw__copy(
  const sentry_msgs__msg__Vw * input,
  sentry_msgs__msg__Vw * output)
{
  if (!input || !output) {
    return false;
  }
  // vw
  output->vw = input->vw;
  return true;
}

sentry_msgs__msg__Vw *
sentry_msgs__msg__Vw__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__Vw * msg = (sentry_msgs__msg__Vw *)allocator.allocate(sizeof(sentry_msgs__msg__Vw), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_msgs__msg__Vw));
  bool success = sentry_msgs__msg__Vw__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_msgs__msg__Vw__destroy(sentry_msgs__msg__Vw * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_msgs__msg__Vw__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_msgs__msg__Vw__Sequence__init(sentry_msgs__msg__Vw__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__Vw * data = NULL;

  if (size) {
    data = (sentry_msgs__msg__Vw *)allocator.zero_allocate(size, sizeof(sentry_msgs__msg__Vw), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_msgs__msg__Vw__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_msgs__msg__Vw__fini(&data[i - 1]);
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
sentry_msgs__msg__Vw__Sequence__fini(sentry_msgs__msg__Vw__Sequence * array)
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
      sentry_msgs__msg__Vw__fini(&array->data[i]);
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

sentry_msgs__msg__Vw__Sequence *
sentry_msgs__msg__Vw__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__Vw__Sequence * array = (sentry_msgs__msg__Vw__Sequence *)allocator.allocate(sizeof(sentry_msgs__msg__Vw__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_msgs__msg__Vw__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_msgs__msg__Vw__Sequence__destroy(sentry_msgs__msg__Vw__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_msgs__msg__Vw__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_msgs__msg__Vw__Sequence__are_equal(const sentry_msgs__msg__Vw__Sequence * lhs, const sentry_msgs__msg__Vw__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_msgs__msg__Vw__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_msgs__msg__Vw__Sequence__copy(
  const sentry_msgs__msg__Vw__Sequence * input,
  sentry_msgs__msg__Vw__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_msgs__msg__Vw);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_msgs__msg__Vw * data =
      (sentry_msgs__msg__Vw *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_msgs__msg__Vw__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_msgs__msg__Vw__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_msgs__msg__Vw__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
