// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_msgs:msg/SystemAlert.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__FUNCTIONS_H_
#define CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_msgs/msg/detail/system_alert__struct.h"

/// Initialize msg/SystemAlert message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_msgs__msg__SystemAlert
 * )) before or use
 * carma_msgs__msg__SystemAlert__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__SystemAlert__init(carma_msgs__msg__SystemAlert * msg);

/// Finalize msg/SystemAlert message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
void
carma_msgs__msg__SystemAlert__fini(carma_msgs__msg__SystemAlert * msg);

/// Create msg/SystemAlert message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_msgs__msg__SystemAlert__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
carma_msgs__msg__SystemAlert *
carma_msgs__msg__SystemAlert__create();

/// Destroy msg/SystemAlert message.
/**
 * It calls
 * carma_msgs__msg__SystemAlert__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
void
carma_msgs__msg__SystemAlert__destroy(carma_msgs__msg__SystemAlert * msg);

/// Check for msg/SystemAlert message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__SystemAlert__are_equal(const carma_msgs__msg__SystemAlert * lhs, const carma_msgs__msg__SystemAlert * rhs);

/// Copy a msg/SystemAlert message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__SystemAlert__copy(
  const carma_msgs__msg__SystemAlert * input,
  carma_msgs__msg__SystemAlert * output);

/// Initialize array of msg/SystemAlert messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_msgs__msg__SystemAlert__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__SystemAlert__Sequence__init(carma_msgs__msg__SystemAlert__Sequence * array, size_t size);

/// Finalize array of msg/SystemAlert messages.
/**
 * It calls
 * carma_msgs__msg__SystemAlert__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
void
carma_msgs__msg__SystemAlert__Sequence__fini(carma_msgs__msg__SystemAlert__Sequence * array);

/// Create array of msg/SystemAlert messages.
/**
 * It allocates the memory for the array and calls
 * carma_msgs__msg__SystemAlert__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
carma_msgs__msg__SystemAlert__Sequence *
carma_msgs__msg__SystemAlert__Sequence__create(size_t size);

/// Destroy array of msg/SystemAlert messages.
/**
 * It calls
 * carma_msgs__msg__SystemAlert__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
void
carma_msgs__msg__SystemAlert__Sequence__destroy(carma_msgs__msg__SystemAlert__Sequence * array);

/// Check for msg/SystemAlert message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__SystemAlert__Sequence__are_equal(const carma_msgs__msg__SystemAlert__Sequence * lhs, const carma_msgs__msg__SystemAlert__Sequence * rhs);

/// Copy an array of msg/SystemAlert messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
bool
carma_msgs__msg__SystemAlert__Sequence__copy(
  const carma_msgs__msg__SystemAlert__Sequence * input,
  carma_msgs__msg__SystemAlert__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__FUNCTIONS_H_
