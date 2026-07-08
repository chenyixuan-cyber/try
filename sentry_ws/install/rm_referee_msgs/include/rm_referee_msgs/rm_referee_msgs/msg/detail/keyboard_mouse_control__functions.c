// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:msg/KeyboardMouseControl.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/keyboard_mouse_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__msg__KeyboardMouseControl__init(rm_referee_msgs__msg__KeyboardMouseControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__msg__KeyboardMouseControl__fini(msg);
    return false;
  }
  // mouse_x
  // mouse_y
  // mouse_z
  // left_button_down
  // right_button_down
  // keyboard_value
  // mid_button_down
  return true;
}

void
rm_referee_msgs__msg__KeyboardMouseControl__fini(rm_referee_msgs__msg__KeyboardMouseControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mouse_x
  // mouse_y
  // mouse_z
  // left_button_down
  // right_button_down
  // keyboard_value
  // mid_button_down
}

bool
rm_referee_msgs__msg__KeyboardMouseControl__are_equal(const rm_referee_msgs__msg__KeyboardMouseControl * lhs, const rm_referee_msgs__msg__KeyboardMouseControl * rhs)
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
  // mouse_x
  if (lhs->mouse_x != rhs->mouse_x) {
    return false;
  }
  // mouse_y
  if (lhs->mouse_y != rhs->mouse_y) {
    return false;
  }
  // mouse_z
  if (lhs->mouse_z != rhs->mouse_z) {
    return false;
  }
  // left_button_down
  if (lhs->left_button_down != rhs->left_button_down) {
    return false;
  }
  // right_button_down
  if (lhs->right_button_down != rhs->right_button_down) {
    return false;
  }
  // keyboard_value
  if (lhs->keyboard_value != rhs->keyboard_value) {
    return false;
  }
  // mid_button_down
  if (lhs->mid_button_down != rhs->mid_button_down) {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__msg__KeyboardMouseControl__copy(
  const rm_referee_msgs__msg__KeyboardMouseControl * input,
  rm_referee_msgs__msg__KeyboardMouseControl * output)
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
  // mouse_x
  output->mouse_x = input->mouse_x;
  // mouse_y
  output->mouse_y = input->mouse_y;
  // mouse_z
  output->mouse_z = input->mouse_z;
  // left_button_down
  output->left_button_down = input->left_button_down;
  // right_button_down
  output->right_button_down = input->right_button_down;
  // keyboard_value
  output->keyboard_value = input->keyboard_value;
  // mid_button_down
  output->mid_button_down = input->mid_button_down;
  return true;
}

rm_referee_msgs__msg__KeyboardMouseControl *
rm_referee_msgs__msg__KeyboardMouseControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__KeyboardMouseControl * msg = (rm_referee_msgs__msg__KeyboardMouseControl *)allocator.allocate(sizeof(rm_referee_msgs__msg__KeyboardMouseControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__msg__KeyboardMouseControl));
  bool success = rm_referee_msgs__msg__KeyboardMouseControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__msg__KeyboardMouseControl__destroy(rm_referee_msgs__msg__KeyboardMouseControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__msg__KeyboardMouseControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__init(rm_referee_msgs__msg__KeyboardMouseControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__KeyboardMouseControl * data = NULL;

  if (size) {
    data = (rm_referee_msgs__msg__KeyboardMouseControl *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__msg__KeyboardMouseControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__msg__KeyboardMouseControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__msg__KeyboardMouseControl__fini(&data[i - 1]);
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
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__fini(rm_referee_msgs__msg__KeyboardMouseControl__Sequence * array)
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
      rm_referee_msgs__msg__KeyboardMouseControl__fini(&array->data[i]);
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

rm_referee_msgs__msg__KeyboardMouseControl__Sequence *
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__KeyboardMouseControl__Sequence * array = (rm_referee_msgs__msg__KeyboardMouseControl__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__msg__KeyboardMouseControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__msg__KeyboardMouseControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__destroy(rm_referee_msgs__msg__KeyboardMouseControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__msg__KeyboardMouseControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__are_equal(const rm_referee_msgs__msg__KeyboardMouseControl__Sequence * lhs, const rm_referee_msgs__msg__KeyboardMouseControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__msg__KeyboardMouseControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__copy(
  const rm_referee_msgs__msg__KeyboardMouseControl__Sequence * input,
  rm_referee_msgs__msg__KeyboardMouseControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__msg__KeyboardMouseControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__msg__KeyboardMouseControl * data =
      (rm_referee_msgs__msg__KeyboardMouseControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__msg__KeyboardMouseControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__msg__KeyboardMouseControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__msg__KeyboardMouseControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
