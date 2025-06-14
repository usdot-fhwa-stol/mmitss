// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from can_msgs:msg/CanState.idl
// generated code does not contain a copyright notice

#ifndef CAN_MSGS__MSG__DETAIL__CAN_STATE__FUNCTIONS_H_
#define CAN_MSGS__MSG__DETAIL__CAN_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "can_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "can_msgs/msg/detail/can_state__struct.h"

/// Initialize msg/CanState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * can_msgs__msg__CanState
 * )) before or use
 * can_msgs__msg__CanState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
bool
can_msgs__msg__CanState__init(can_msgs__msg__CanState * msg);

/// Finalize msg/CanState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
void
can_msgs__msg__CanState__fini(can_msgs__msg__CanState * msg);

/// Create msg/CanState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * can_msgs__msg__CanState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
can_msgs__msg__CanState *
can_msgs__msg__CanState__create();

/// Destroy msg/CanState message.
/**
 * It calls
 * can_msgs__msg__CanState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
void
can_msgs__msg__CanState__destroy(can_msgs__msg__CanState * msg);

/// Check for msg/CanState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
bool
can_msgs__msg__CanState__are_equal(const can_msgs__msg__CanState * lhs, const can_msgs__msg__CanState * rhs);

/// Copy a msg/CanState message.
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
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
bool
can_msgs__msg__CanState__copy(
  const can_msgs__msg__CanState * input,
  can_msgs__msg__CanState * output);

/// Initialize array of msg/CanState messages.
/**
 * It allocates the memory for the number of elements and calls
 * can_msgs__msg__CanState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
bool
can_msgs__msg__CanState__Sequence__init(can_msgs__msg__CanState__Sequence * array, size_t size);

/// Finalize array of msg/CanState messages.
/**
 * It calls
 * can_msgs__msg__CanState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
void
can_msgs__msg__CanState__Sequence__fini(can_msgs__msg__CanState__Sequence * array);

/// Create array of msg/CanState messages.
/**
 * It allocates the memory for the array and calls
 * can_msgs__msg__CanState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
can_msgs__msg__CanState__Sequence *
can_msgs__msg__CanState__Sequence__create(size_t size);

/// Destroy array of msg/CanState messages.
/**
 * It calls
 * can_msgs__msg__CanState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
void
can_msgs__msg__CanState__Sequence__destroy(can_msgs__msg__CanState__Sequence * array);

/// Check for msg/CanState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
bool
can_msgs__msg__CanState__Sequence__are_equal(const can_msgs__msg__CanState__Sequence * lhs, const can_msgs__msg__CanState__Sequence * rhs);

/// Copy an array of msg/CanState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_can_msgs
bool
can_msgs__msg__CanState__Sequence__copy(
  const can_msgs__msg__CanState__Sequence * input,
  can_msgs__msg__CanState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAN_MSGS__MSG__DETAIL__CAN_STATE__FUNCTIONS_H_
