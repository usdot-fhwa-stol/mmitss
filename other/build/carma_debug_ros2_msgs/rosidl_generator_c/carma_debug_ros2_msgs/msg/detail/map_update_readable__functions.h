// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__FUNCTIONS_H_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_debug_ros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__struct.h"

/// Initialize msg/MapUpdateReadable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_debug_ros2_msgs__msg__MapUpdateReadable
 * )) before or use
 * carma_debug_ros2_msgs__msg__MapUpdateReadable__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__init(carma_debug_ros2_msgs__msg__MapUpdateReadable * msg);

/// Finalize msg/MapUpdateReadable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(carma_debug_ros2_msgs__msg__MapUpdateReadable * msg);

/// Create msg/MapUpdateReadable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_debug_ros2_msgs__msg__MapUpdateReadable__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
carma_debug_ros2_msgs__msg__MapUpdateReadable *
carma_debug_ros2_msgs__msg__MapUpdateReadable__create();

/// Destroy msg/MapUpdateReadable message.
/**
 * It calls
 * carma_debug_ros2_msgs__msg__MapUpdateReadable__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__MapUpdateReadable__destroy(carma_debug_ros2_msgs__msg__MapUpdateReadable * msg);

/// Check for msg/MapUpdateReadable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__are_equal(const carma_debug_ros2_msgs__msg__MapUpdateReadable * lhs, const carma_debug_ros2_msgs__msg__MapUpdateReadable * rhs);

/// Copy a msg/MapUpdateReadable message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__copy(
  const carma_debug_ros2_msgs__msg__MapUpdateReadable * input,
  carma_debug_ros2_msgs__msg__MapUpdateReadable * output);

/// Initialize array of msg/MapUpdateReadable messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_debug_ros2_msgs__msg__MapUpdateReadable__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__init(carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * array, size_t size);

/// Finalize array of msg/MapUpdateReadable messages.
/**
 * It calls
 * carma_debug_ros2_msgs__msg__MapUpdateReadable__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__fini(carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * array);

/// Create array of msg/MapUpdateReadable messages.
/**
 * It allocates the memory for the array and calls
 * carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence *
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__create(size_t size);

/// Destroy array of msg/MapUpdateReadable messages.
/**
 * It calls
 * carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__destroy(carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * array);

/// Check for msg/MapUpdateReadable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__are_equal(const carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * lhs, const carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * rhs);

/// Copy an array of msg/MapUpdateReadable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__copy(
  const carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * input,
  carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__MAP_UPDATE_READABLE__FUNCTIONS_H_
