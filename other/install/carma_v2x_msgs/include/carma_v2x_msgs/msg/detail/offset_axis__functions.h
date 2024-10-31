// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_v2x_msgs:msg/OffsetAxis.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__FUNCTIONS_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_v2x_msgs/msg/detail/offset_axis__struct.h"

/// Initialize msg/OffsetAxis message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_v2x_msgs__msg__OffsetAxis
 * )) before or use
 * carma_v2x_msgs__msg__OffsetAxis__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__OffsetAxis__init(carma_v2x_msgs__msg__OffsetAxis * msg);

/// Finalize msg/OffsetAxis message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__OffsetAxis__fini(carma_v2x_msgs__msg__OffsetAxis * msg);

/// Create msg/OffsetAxis message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_v2x_msgs__msg__OffsetAxis__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
carma_v2x_msgs__msg__OffsetAxis *
carma_v2x_msgs__msg__OffsetAxis__create();

/// Destroy msg/OffsetAxis message.
/**
 * It calls
 * carma_v2x_msgs__msg__OffsetAxis__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__OffsetAxis__destroy(carma_v2x_msgs__msg__OffsetAxis * msg);

/// Check for msg/OffsetAxis message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__OffsetAxis__are_equal(const carma_v2x_msgs__msg__OffsetAxis * lhs, const carma_v2x_msgs__msg__OffsetAxis * rhs);

/// Copy a msg/OffsetAxis message.
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
carma_v2x_msgs__msg__OffsetAxis__copy(
  const carma_v2x_msgs__msg__OffsetAxis * input,
  carma_v2x_msgs__msg__OffsetAxis * output);

/// Initialize array of msg/OffsetAxis messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_v2x_msgs__msg__OffsetAxis__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__OffsetAxis__Sequence__init(carma_v2x_msgs__msg__OffsetAxis__Sequence * array, size_t size);

/// Finalize array of msg/OffsetAxis messages.
/**
 * It calls
 * carma_v2x_msgs__msg__OffsetAxis__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__OffsetAxis__Sequence__fini(carma_v2x_msgs__msg__OffsetAxis__Sequence * array);

/// Create array of msg/OffsetAxis messages.
/**
 * It allocates the memory for the array and calls
 * carma_v2x_msgs__msg__OffsetAxis__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
carma_v2x_msgs__msg__OffsetAxis__Sequence *
carma_v2x_msgs__msg__OffsetAxis__Sequence__create(size_t size);

/// Destroy array of msg/OffsetAxis messages.
/**
 * It calls
 * carma_v2x_msgs__msg__OffsetAxis__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__OffsetAxis__Sequence__destroy(carma_v2x_msgs__msg__OffsetAxis__Sequence * array);

/// Check for msg/OffsetAxis message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__OffsetAxis__Sequence__are_equal(const carma_v2x_msgs__msg__OffsetAxis__Sequence * lhs, const carma_v2x_msgs__msg__OffsetAxis__Sequence * rhs);

/// Copy an array of msg/OffsetAxis messages.
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
carma_v2x_msgs__msg__OffsetAxis__Sequence__copy(
  const carma_v2x_msgs__msg__OffsetAxis__Sequence * input,
  carma_v2x_msgs__msg__OffsetAxis__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OFFSET_AXIS__FUNCTIONS_H_
