// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_v2x_msgs:msg/RollRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ROLL_RATE__FUNCTIONS_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ROLL_RATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_v2x_msgs/msg/detail/roll_rate__struct.h"

/// Initialize msg/RollRate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_v2x_msgs__msg__RollRate
 * )) before or use
 * carma_v2x_msgs__msg__RollRate__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__RollRate__init(carma_v2x_msgs__msg__RollRate * msg);

/// Finalize msg/RollRate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__RollRate__fini(carma_v2x_msgs__msg__RollRate * msg);

/// Create msg/RollRate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_v2x_msgs__msg__RollRate__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
carma_v2x_msgs__msg__RollRate *
carma_v2x_msgs__msg__RollRate__create();

/// Destroy msg/RollRate message.
/**
 * It calls
 * carma_v2x_msgs__msg__RollRate__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__RollRate__destroy(carma_v2x_msgs__msg__RollRate * msg);

/// Check for msg/RollRate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__RollRate__are_equal(const carma_v2x_msgs__msg__RollRate * lhs, const carma_v2x_msgs__msg__RollRate * rhs);

/// Copy a msg/RollRate message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__RollRate__copy(
  const carma_v2x_msgs__msg__RollRate * input,
  carma_v2x_msgs__msg__RollRate * output);

/// Initialize array of msg/RollRate messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_v2x_msgs__msg__RollRate__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__RollRate__Sequence__init(carma_v2x_msgs__msg__RollRate__Sequence * array, size_t size);

/// Finalize array of msg/RollRate messages.
/**
 * It calls
 * carma_v2x_msgs__msg__RollRate__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__RollRate__Sequence__fini(carma_v2x_msgs__msg__RollRate__Sequence * array);

/// Create array of msg/RollRate messages.
/**
 * It allocates the memory for the array and calls
 * carma_v2x_msgs__msg__RollRate__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
carma_v2x_msgs__msg__RollRate__Sequence *
carma_v2x_msgs__msg__RollRate__Sequence__create(size_t size);

/// Destroy array of msg/RollRate messages.
/**
 * It calls
 * carma_v2x_msgs__msg__RollRate__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__RollRate__Sequence__destroy(carma_v2x_msgs__msg__RollRate__Sequence * array);

/// Check for msg/RollRate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__RollRate__Sequence__are_equal(const carma_v2x_msgs__msg__RollRate__Sequence * lhs, const carma_v2x_msgs__msg__RollRate__Sequence * rhs);

/// Copy an array of msg/RollRate messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__RollRate__Sequence__copy(
  const carma_v2x_msgs__msg__RollRate__Sequence * input,
  carma_v2x_msgs__msg__RollRate__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ROLL_RATE__FUNCTIONS_H_
