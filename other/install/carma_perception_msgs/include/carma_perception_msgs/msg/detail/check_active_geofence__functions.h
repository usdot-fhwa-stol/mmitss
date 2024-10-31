// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__FUNCTIONS_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_perception_msgs/msg/detail/check_active_geofence__struct.h"

/// Initialize msg/CheckActiveGeofence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_perception_msgs__msg__CheckActiveGeofence
 * )) before or use
 * carma_perception_msgs__msg__CheckActiveGeofence__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__CheckActiveGeofence__init(carma_perception_msgs__msg__CheckActiveGeofence * msg);

/// Finalize msg/CheckActiveGeofence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__CheckActiveGeofence__fini(carma_perception_msgs__msg__CheckActiveGeofence * msg);

/// Create msg/CheckActiveGeofence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_perception_msgs__msg__CheckActiveGeofence__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
carma_perception_msgs__msg__CheckActiveGeofence *
carma_perception_msgs__msg__CheckActiveGeofence__create();

/// Destroy msg/CheckActiveGeofence message.
/**
 * It calls
 * carma_perception_msgs__msg__CheckActiveGeofence__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__CheckActiveGeofence__destroy(carma_perception_msgs__msg__CheckActiveGeofence * msg);

/// Check for msg/CheckActiveGeofence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__CheckActiveGeofence__are_equal(const carma_perception_msgs__msg__CheckActiveGeofence * lhs, const carma_perception_msgs__msg__CheckActiveGeofence * rhs);

/// Copy a msg/CheckActiveGeofence message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__CheckActiveGeofence__copy(
  const carma_perception_msgs__msg__CheckActiveGeofence * input,
  carma_perception_msgs__msg__CheckActiveGeofence * output);

/// Initialize array of msg/CheckActiveGeofence messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_perception_msgs__msg__CheckActiveGeofence__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__init(carma_perception_msgs__msg__CheckActiveGeofence__Sequence * array, size_t size);

/// Finalize array of msg/CheckActiveGeofence messages.
/**
 * It calls
 * carma_perception_msgs__msg__CheckActiveGeofence__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__fini(carma_perception_msgs__msg__CheckActiveGeofence__Sequence * array);

/// Create array of msg/CheckActiveGeofence messages.
/**
 * It allocates the memory for the array and calls
 * carma_perception_msgs__msg__CheckActiveGeofence__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
carma_perception_msgs__msg__CheckActiveGeofence__Sequence *
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__create(size_t size);

/// Destroy array of msg/CheckActiveGeofence messages.
/**
 * It calls
 * carma_perception_msgs__msg__CheckActiveGeofence__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__destroy(carma_perception_msgs__msg__CheckActiveGeofence__Sequence * array);

/// Check for msg/CheckActiveGeofence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__are_equal(const carma_perception_msgs__msg__CheckActiveGeofence__Sequence * lhs, const carma_perception_msgs__msg__CheckActiveGeofence__Sequence * rhs);

/// Copy an array of msg/CheckActiveGeofence messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__CheckActiveGeofence__Sequence__copy(
  const carma_perception_msgs__msg__CheckActiveGeofence__Sequence * input,
  carma_perception_msgs__msg__CheckActiveGeofence__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__FUNCTIONS_H_
