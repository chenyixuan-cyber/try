// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_referee_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice
#include "rm_referee_msgs/msg/detail/power_heat_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
rm_referee_msgs__msg__PowerHeatData__init(rm_referee_msgs__msg__PowerHeatData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    rm_referee_msgs__msg__PowerHeatData__fini(msg);
    return false;
  }
  // reserved
  // reserved_2
  // reserved_3
  // buffer_energy
  // shooter_17mm_1_barrel_heat
  // shooter_42mm_barrel_heat
  return true;
}

void
rm_referee_msgs__msg__PowerHeatData__fini(rm_referee_msgs__msg__PowerHeatData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // reserved
  // reserved_2
  // reserved_3
  // buffer_energy
  // shooter_17mm_1_barrel_heat
  // shooter_42mm_barrel_heat
}

bool
rm_referee_msgs__msg__PowerHeatData__are_equal(const rm_referee_msgs__msg__PowerHeatData * lhs, const rm_referee_msgs__msg__PowerHeatData * rhs)
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
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // reserved_2
  if (lhs->reserved_2 != rhs->reserved_2) {
    return false;
  }
  // reserved_3
  if (lhs->reserved_3 != rhs->reserved_3) {
    return false;
  }
  // buffer_energy
  if (lhs->buffer_energy != rhs->buffer_energy) {
    return false;
  }
  // shooter_17mm_1_barrel_heat
  if (lhs->shooter_17mm_1_barrel_heat != rhs->shooter_17mm_1_barrel_heat) {
    return false;
  }
  // shooter_42mm_barrel_heat
  if (lhs->shooter_42mm_barrel_heat != rhs->shooter_42mm_barrel_heat) {
    return false;
  }
  return true;
}

bool
rm_referee_msgs__msg__PowerHeatData__copy(
  const rm_referee_msgs__msg__PowerHeatData * input,
  rm_referee_msgs__msg__PowerHeatData * output)
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
  // reserved
  output->reserved = input->reserved;
  // reserved_2
  output->reserved_2 = input->reserved_2;
  // reserved_3
  output->reserved_3 = input->reserved_3;
  // buffer_energy
  output->buffer_energy = input->buffer_energy;
  // shooter_17mm_1_barrel_heat
  output->shooter_17mm_1_barrel_heat = input->shooter_17mm_1_barrel_heat;
  // shooter_42mm_barrel_heat
  output->shooter_42mm_barrel_heat = input->shooter_42mm_barrel_heat;
  return true;
}

rm_referee_msgs__msg__PowerHeatData *
rm_referee_msgs__msg__PowerHeatData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__PowerHeatData * msg = (rm_referee_msgs__msg__PowerHeatData *)allocator.allocate(sizeof(rm_referee_msgs__msg__PowerHeatData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_referee_msgs__msg__PowerHeatData));
  bool success = rm_referee_msgs__msg__PowerHeatData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_referee_msgs__msg__PowerHeatData__destroy(rm_referee_msgs__msg__PowerHeatData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_referee_msgs__msg__PowerHeatData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_referee_msgs__msg__PowerHeatData__Sequence__init(rm_referee_msgs__msg__PowerHeatData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__PowerHeatData * data = NULL;

  if (size) {
    data = (rm_referee_msgs__msg__PowerHeatData *)allocator.zero_allocate(size, sizeof(rm_referee_msgs__msg__PowerHeatData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_referee_msgs__msg__PowerHeatData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_referee_msgs__msg__PowerHeatData__fini(&data[i - 1]);
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
rm_referee_msgs__msg__PowerHeatData__Sequence__fini(rm_referee_msgs__msg__PowerHeatData__Sequence * array)
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
      rm_referee_msgs__msg__PowerHeatData__fini(&array->data[i]);
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

rm_referee_msgs__msg__PowerHeatData__Sequence *
rm_referee_msgs__msg__PowerHeatData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_referee_msgs__msg__PowerHeatData__Sequence * array = (rm_referee_msgs__msg__PowerHeatData__Sequence *)allocator.allocate(sizeof(rm_referee_msgs__msg__PowerHeatData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_referee_msgs__msg__PowerHeatData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_referee_msgs__msg__PowerHeatData__Sequence__destroy(rm_referee_msgs__msg__PowerHeatData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_referee_msgs__msg__PowerHeatData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_referee_msgs__msg__PowerHeatData__Sequence__are_equal(const rm_referee_msgs__msg__PowerHeatData__Sequence * lhs, const rm_referee_msgs__msg__PowerHeatData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_referee_msgs__msg__PowerHeatData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_referee_msgs__msg__PowerHeatData__Sequence__copy(
  const rm_referee_msgs__msg__PowerHeatData__Sequence * input,
  rm_referee_msgs__msg__PowerHeatData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_referee_msgs__msg__PowerHeatData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_referee_msgs__msg__PowerHeatData * data =
      (rm_referee_msgs__msg__PowerHeatData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_referee_msgs__msg__PowerHeatData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_referee_msgs__msg__PowerHeatData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_referee_msgs__msg__PowerHeatData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
