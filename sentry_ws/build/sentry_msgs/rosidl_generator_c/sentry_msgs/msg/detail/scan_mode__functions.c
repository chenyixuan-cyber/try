// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_msgs:msg/ScanMode.idl
// generated code does not contain a copyright notice
#include "sentry_msgs/msg/detail/scan_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sentry_msgs__msg__ScanMode__init(sentry_msgs__msg__ScanMode * msg)
{
  if (!msg) {
    return false;
  }
  // scan_mod_type
  return true;
}

void
sentry_msgs__msg__ScanMode__fini(sentry_msgs__msg__ScanMode * msg)
{
  if (!msg) {
    return;
  }
  // scan_mod_type
}

bool
sentry_msgs__msg__ScanMode__are_equal(const sentry_msgs__msg__ScanMode * lhs, const sentry_msgs__msg__ScanMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scan_mod_type
  if (lhs->scan_mod_type != rhs->scan_mod_type) {
    return false;
  }
  return true;
}

bool
sentry_msgs__msg__ScanMode__copy(
  const sentry_msgs__msg__ScanMode * input,
  sentry_msgs__msg__ScanMode * output)
{
  if (!input || !output) {
    return false;
  }
  // scan_mod_type
  output->scan_mod_type = input->scan_mod_type;
  return true;
}

sentry_msgs__msg__ScanMode *
sentry_msgs__msg__ScanMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__ScanMode * msg = (sentry_msgs__msg__ScanMode *)allocator.allocate(sizeof(sentry_msgs__msg__ScanMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_msgs__msg__ScanMode));
  bool success = sentry_msgs__msg__ScanMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_msgs__msg__ScanMode__destroy(sentry_msgs__msg__ScanMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_msgs__msg__ScanMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_msgs__msg__ScanMode__Sequence__init(sentry_msgs__msg__ScanMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__ScanMode * data = NULL;

  if (size) {
    data = (sentry_msgs__msg__ScanMode *)allocator.zero_allocate(size, sizeof(sentry_msgs__msg__ScanMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_msgs__msg__ScanMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_msgs__msg__ScanMode__fini(&data[i - 1]);
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
sentry_msgs__msg__ScanMode__Sequence__fini(sentry_msgs__msg__ScanMode__Sequence * array)
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
      sentry_msgs__msg__ScanMode__fini(&array->data[i]);
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

sentry_msgs__msg__ScanMode__Sequence *
sentry_msgs__msg__ScanMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_msgs__msg__ScanMode__Sequence * array = (sentry_msgs__msg__ScanMode__Sequence *)allocator.allocate(sizeof(sentry_msgs__msg__ScanMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_msgs__msg__ScanMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_msgs__msg__ScanMode__Sequence__destroy(sentry_msgs__msg__ScanMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_msgs__msg__ScanMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_msgs__msg__ScanMode__Sequence__are_equal(const sentry_msgs__msg__ScanMode__Sequence * lhs, const sentry_msgs__msg__ScanMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_msgs__msg__ScanMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_msgs__msg__ScanMode__Sequence__copy(
  const sentry_msgs__msg__ScanMode__Sequence * input,
  sentry_msgs__msg__ScanMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_msgs__msg__ScanMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_msgs__msg__ScanMode * data =
      (sentry_msgs__msg__ScanMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_msgs__msg__ScanMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_msgs__msg__ScanMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_msgs__msg__ScanMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
