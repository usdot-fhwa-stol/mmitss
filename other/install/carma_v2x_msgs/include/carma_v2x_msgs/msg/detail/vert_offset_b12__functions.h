// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_v2x_msgs:msg/VertOffsetB12.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__FUNCTIONS_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_v2x_msgs/msg/detail/vert_offset_b12__struct.h"

/// Initialize msg/VertOffsetB12 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_v2x_msgs__msg__VertOffsetB12
 * )) before or use
 * carma_v2x_msgs__msg__VertOffsetB12__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__VertOffsetB12__init(carma_v2x_msgs__msg__VertOffsetB12 * msg);

/// Finalize msg/VertOffsetB12 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__VertOffsetB12__fini(carma_v2x_msgs__msg__VertOffsetB12 * msg);

/// Create msg/VertOffsetB12 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_v2x_msgs__msg__VertOffsetB12__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
carma_v2x_msgs__msg__VertOffsetB12 *
carma_v2x_msgs__msg__VertOffsetB12__create();

/// Destroy msg/VertOffsetB12 message.
/**
 * It calls
 * carma_v2x_msgs__msg__VertOffsetB12__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__VertOffsetB12__destroy(carma_v2x_msgs__msg__VertOffsetB12 * msg);

/// Check for msg/VertOffsetB12 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__VertOffsetB12__are_equal(const carma_v2x_msgs__msg__VertOffsetB12 * lhs, const carma_v2x_msgs__msg__VertOffsetB12 * rhs);

/// Copy a msg/VertOffsetB12 message.
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
carma_v2x_msgs__msg__VertOffsetB12__copy(
  const carma_v2x_msgs__msg__VertOffsetB12 * input,
  carma_v2x_msgs__msg__VertOffsetB12 * output);

/// Initialize array of msg/VertOffsetB12 messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_v2x_msgs__msg__VertOffsetB12__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__VertOffsetB12__Sequence__init(carma_v2x_msgs__msg__VertOffsetB12__Sequence * array, size_t size);

/// Finalize array of msg/VertOffsetB12 messages.
/**
 * It calls
 * carma_v2x_msgs__msg__VertOffsetB12__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__VertOffsetB12__Sequence__fini(carma_v2x_msgs__msg__VertOffsetB12__Sequence * array);

/// Create array of msg/VertOffsetB12 messages.
/**
 * It allocates the memory for the array and calls
 * carma_v2x_msgs__msg__VertOffsetB12__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
carma_v2x_msgs__msg__VertOffsetB12__Sequence *
carma_v2x_msgs__msg__VertOffsetB12__Sequence__create(size_t size);

/// Destroy array of msg/VertOffsetB12 messages.
/**
 * It calls
 * carma_v2x_msgs__msg__VertOffsetB12__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
void
carma_v2x_msgs__msg__VertOffsetB12__Sequence__destroy(carma_v2x_msgs__msg__VertOffsetB12__Sequence * array);

/// Check for msg/VertOffsetB12 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_v2x_msgs
bool
carma_v2x_msgs__msg__VertOffsetB12__Sequence__are_equal(const carma_v2x_msgs__msg__VertOffsetB12__Sequence * lhs, const carma_v2x_msgs__msg__VertOffsetB12__Sequence * rhs);

/// Copy an array of msg/VertOffsetB12 messages.
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
carma_v2x_msgs__msg__VertOffsetB12__Sequence__copy(
  const carma_v2x_msgs__msg__VertOffsetB12__Sequence * input,
  carma_v2x_msgs__msg__VertOffsetB12__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__FUNCTIONS_H_
