// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from j3224_v2x_msgs:msg/VehicleSizeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE_CONFIDENCE__FUNCTIONS_H_
#define J3224_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE_CONFIDENCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "j3224_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__struct.h"

/// Initialize msg/VehicleSizeConfidence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * j3224_v2x_msgs__msg__VehicleSizeConfidence
 * )) before or use
 * j3224_v2x_msgs__msg__VehicleSizeConfidence__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
bool
j3224_v2x_msgs__msg__VehicleSizeConfidence__init(j3224_v2x_msgs__msg__VehicleSizeConfidence * msg);

/// Finalize msg/VehicleSizeConfidence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
void
j3224_v2x_msgs__msg__VehicleSizeConfidence__fini(j3224_v2x_msgs__msg__VehicleSizeConfidence * msg);

/// Create msg/VehicleSizeConfidence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * j3224_v2x_msgs__msg__VehicleSizeConfidence__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
j3224_v2x_msgs__msg__VehicleSizeConfidence *
j3224_v2x_msgs__msg__VehicleSizeConfidence__create();

/// Destroy msg/VehicleSizeConfidence message.
/**
 * It calls
 * j3224_v2x_msgs__msg__VehicleSizeConfidence__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
void
j3224_v2x_msgs__msg__VehicleSizeConfidence__destroy(j3224_v2x_msgs__msg__VehicleSizeConfidence * msg);

/// Check for msg/VehicleSizeConfidence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
bool
j3224_v2x_msgs__msg__VehicleSizeConfidence__are_equal(const j3224_v2x_msgs__msg__VehicleSizeConfidence * lhs, const j3224_v2x_msgs__msg__VehicleSizeConfidence * rhs);

/// Copy a msg/VehicleSizeConfidence message.
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
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
bool
j3224_v2x_msgs__msg__VehicleSizeConfidence__copy(
  const j3224_v2x_msgs__msg__VehicleSizeConfidence * input,
  j3224_v2x_msgs__msg__VehicleSizeConfidence * output);

/// Initialize array of msg/VehicleSizeConfidence messages.
/**
 * It allocates the memory for the number of elements and calls
 * j3224_v2x_msgs__msg__VehicleSizeConfidence__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
bool
j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence__init(j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence * array, size_t size);

/// Finalize array of msg/VehicleSizeConfidence messages.
/**
 * It calls
 * j3224_v2x_msgs__msg__VehicleSizeConfidence__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
void
j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence__fini(j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence * array);

/// Create array of msg/VehicleSizeConfidence messages.
/**
 * It allocates the memory for the array and calls
 * j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence *
j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence__create(size_t size);

/// Destroy array of msg/VehicleSizeConfidence messages.
/**
 * It calls
 * j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
void
j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence__destroy(j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence * array);

/// Check for msg/VehicleSizeConfidence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
bool
j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence__are_equal(const j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence * lhs, const j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence * rhs);

/// Copy an array of msg/VehicleSizeConfidence messages.
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
ROSIDL_GENERATOR_C_PUBLIC_j3224_v2x_msgs
bool
j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence__copy(
  const j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence * input,
  j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE_CONFIDENCE__FUNCTIONS_H_
