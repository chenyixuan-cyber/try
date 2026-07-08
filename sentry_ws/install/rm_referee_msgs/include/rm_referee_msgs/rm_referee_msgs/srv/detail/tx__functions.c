// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:srv/Tx.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/srv/detail/tx__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rm_referee_msgs__srv__Tx_Request__init(rm_referee_msgs__srv__Tx_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__srv__Tx_Request__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    rm_referee_msgs__srv__Tx_Request__fini(msg);
    return false;
  }
  return true;
}

void
rm_referee_msgs__srv__Tx_Request__fini(rm_referee_msgs__srv__Tx_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
rm_referee_msgs__srv__Tx_Request__are_equal(const rm_referee_msgs__srv__Tx_Request * lhs, const rm_referee_msgs__srv__Tx_Request * rhs)
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
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__srv__Tx_Request__copy(
  const rm_referee_msgs__srv__Tx_Request * input,
  rm_referee_msgs__srv__Tx_Request * output)
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
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

rm_referee_msgs__srv__Tx_Request *
rm_referee_msgs__srv__Tx_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__srv__Tx_Request * msg = (rm_referee_msgs__srv__Tx_Request *)allocator.allocate(sizeof(rm_referee_msgs__srv__Tx_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__srv__Tx_Request));
  bool success = rm_referee_msgs__srv__Tx_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__srv__Tx_Request__destroy(rm_referee_msgs__srv__Tx_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__srv__Tx_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__srv__Tx_Request__Sequence__init(rm_referee_msgs__srv__Tx_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__srv__Tx_Request * data = NULL;

  if (size) {
    data = (rm_referee_msgs__srv__Tx_Request *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__srv__Tx_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__srv__Tx_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__srv__Tx_Request__fini(&data[i - 1]);
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
rm_referee_msgs__srv__Tx_Request__Sequence__fini(rm_referee_msgs__srv__Tx_Request__Sequence * array)
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
      rm_referee_msgs__srv__Tx_Request__fini(&array->data[i]);
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

rm_referee_msgs__srv__Tx_Request__Sequence *
rm_referee_msgs__srv__Tx_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__srv__Tx_Request__Sequence * array = (rm_referee_msgs__srv__Tx_Request__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__srv__Tx_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__srv__Tx_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__srv__Tx_Request__Sequence__destroy(rm_referee_msgs__srv__Tx_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__srv__Tx_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__srv__Tx_Request__Sequence__are_equal(const rm_referee_msgs__srv__Tx_Request__Sequence * lhs, const rm_referee_msgs__srv__Tx_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__srv__Tx_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__srv__Tx_Request__Sequence__copy(
  const rm_referee_msgs__srv__Tx_Request__Sequence * input,
  rm_referee_msgs__srv__Tx_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__srv__Tx_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__srv__Tx_Request * data =
      (rm_referee_msgs__srv__Tx_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__srv__Tx_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__srv__Tx_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__srv__Tx_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `header`
// already included above
// #include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__srv__Tx_Response__init(rm_referee_msgs__srv__Tx_Response * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__srv__Tx_Response__fini(msg);
    return false;
  }
  // ok
  return true;
}

void
rm_referee_msgs__srv__Tx_Response__fini(rm_referee_msgs__srv__Tx_Response * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ok
}

bool
rm_referee_msgs__srv__Tx_Response__are_equal(const rm_referee_msgs__srv__Tx_Response * lhs, const rm_referee_msgs__srv__Tx_Response * rhs)
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
  // ok
  if (lhs->ok != rhs->ok) {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__srv__Tx_Response__copy(
  const rm_referee_msgs__srv__Tx_Response * input,
  rm_referee_msgs__srv__Tx_Response * output)
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
  // ok
  output->ok = input->ok;
  return true;
}

rm_referee_msgs__srv__Tx_Response *
rm_referee_msgs__srv__Tx_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__srv__Tx_Response * msg = (rm_referee_msgs__srv__Tx_Response *)allocator.allocate(sizeof(rm_referee_msgs__srv__Tx_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__srv__Tx_Response));
  bool success = rm_referee_msgs__srv__Tx_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__srv__Tx_Response__destroy(rm_referee_msgs__srv__Tx_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__srv__Tx_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__srv__Tx_Response__Sequence__init(rm_referee_msgs__srv__Tx_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__srv__Tx_Response * data = NULL;

  if (size) {
    data = (rm_referee_msgs__srv__Tx_Response *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__srv__Tx_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__srv__Tx_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__srv__Tx_Response__fini(&data[i - 1]);
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
rm_referee_msgs__srv__Tx_Response__Sequence__fini(rm_referee_msgs__srv__Tx_Response__Sequence * array)
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
      rm_referee_msgs__srv__Tx_Response__fini(&array->data[i]);
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

rm_referee_msgs__srv__Tx_Response__Sequence *
rm_referee_msgs__srv__Tx_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__srv__Tx_Response__Sequence * array = (rm_referee_msgs__srv__Tx_Response__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__srv__Tx_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__srv__Tx_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__srv__Tx_Response__Sequence__destroy(rm_referee_msgs__srv__Tx_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__srv__Tx_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__srv__Tx_Response__Sequence__are_equal(const rm_referee_msgs__srv__Tx_Response__Sequence * lhs, const rm_referee_msgs__srv__Tx_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__srv__Tx_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__srv__Tx_Response__Sequence__copy(
  const rm_referee_msgs__srv__Tx_Response__Sequence * input,
  rm_referee_msgs__srv__Tx_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__srv__Tx_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__srv__Tx_Response * data =
      (rm_referee_msgs__srv__Tx_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__srv__Tx_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__srv__Tx_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__srv__Tx_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
