// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rm_referee_msgs:msg/KeyboardMouseControl.idl
// generated code does not contain a copyright notice

#ifndef RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__FUNCTIONS_H_
#define RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rm_referee_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rm_referee_msgs/msg/detail/keyboard_mouse_control__struct.h"

/// Initialize msg/KeyboardMouseControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rm_referee_msgs__msg__KeyboardMouseControl
 * )) before or use
 * rm_referee_msgs__msg__KeyboardMouseControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
bool
rm_referee_msgs__msg__KeyboardMouseControl__init(rm_referee_msgs__msg__KeyboardMouseControl * msg);

/// Finalize msg/KeyboardMouseControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
void
rm_referee_msgs__msg__KeyboardMouseControl__fini(rm_referee_msgs__msg__KeyboardMouseControl * msg);

/// Create msg/KeyboardMouseControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rm_referee_msgs__msg__KeyboardMouseControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
rm_referee_msgs__msg__KeyboardMouseControl *
rm_referee_msgs__msg__KeyboardMouseControl__create();

/// Destroy msg/KeyboardMouseControl message.
/**
 * It calls
 * rm_referee_msgs__msg__KeyboardMouseControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
void
rm_referee_msgs__msg__KeyboardMouseControl__destroy(rm_referee_msgs__msg__KeyboardMouseControl * msg);

/// Check for msg/KeyboardMouseControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
bool
rm_referee_msgs__msg__KeyboardMouseControl__are_equal(const rm_referee_msgs__msg__KeyboardMouseControl * lhs, const rm_referee_msgs__msg__KeyboardMouseControl * rhs);

/// Copy a msg/KeyboardMouseControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
bool
rm_referee_msgs__msg__KeyboardMouseControl__copy(
  const rm_referee_msgs__msg__KeyboardMouseControl * input,
  rm_referee_msgs__msg__KeyboardMouseControl * output);

/// Initialize array of msg/KeyboardMouseControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * rm_referee_msgs__msg__KeyboardMouseControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
bool
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__init(rm_referee_msgs__msg__KeyboardMouseControl__Sequence * array, size_t size);

/// Finalize array of msg/KeyboardMouseControl messages.
/**
 * It calls
 * rm_referee_msgs__msg__KeyboardMouseControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
void
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__fini(rm_referee_msgs__msg__KeyboardMouseControl__Sequence * array);

/// Create array of msg/KeyboardMouseControl messages.
/**
 * It allocates the memory for the array and calls
 * rm_referee_msgs__msg__KeyboardMouseControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
rm_referee_msgs__msg__KeyboardMouseControl__Sequence *
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__create(size_t size);

/// Destroy array of msg/KeyboardMouseControl messages.
/**
 * It calls
 * rm_referee_msgs__msg__KeyboardMouseControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
void
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__destroy(rm_referee_msgs__msg__KeyboardMouseControl__Sequence * array);

/// Check for msg/KeyboardMouseControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
bool
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__are_equal(const rm_referee_msgs__msg__KeyboardMouseControl__Sequence * lhs, const rm_referee_msgs__msg__KeyboardMouseControl__Sequence * rhs);

/// Copy an array of msg/KeyboardMouseControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rm_referee_msgs
bool
rm_referee_msgs__msg__KeyboardMouseControl__Sequence__copy(
  const rm_referee_msgs__msg__KeyboardMouseControl__Sequence * input,
  rm_referee_msgs__msg__KeyboardMouseControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RM_REFEREE_MSGS__MSG__DETAIL__KEYBOARD_MOUSE_CONTROL__FUNCTIONS_H_
