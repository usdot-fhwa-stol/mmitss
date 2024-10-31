// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__FUNCTIONS_H_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_debug_ros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.h"

/// Initialize msg/RegulatoryElement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_debug_ros2_msgs__msg__RegulatoryElement
 * )) before or use
 * carma_debug_ros2_msgs__msg__RegulatoryElement__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__RegulatoryElement__init(carma_debug_ros2_msgs__msg__RegulatoryElement * msg);

/// Finalize msg/RegulatoryElement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__RegulatoryElement__fini(carma_debug_ros2_msgs__msg__RegulatoryElement * msg);

/// Create msg/RegulatoryElement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_debug_ros2_msgs__msg__RegulatoryElement__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
carma_debug_ros2_msgs__msg__RegulatoryElement *
carma_debug_ros2_msgs__msg__RegulatoryElement__create();

/// Destroy msg/RegulatoryElement message.
/**
 * It calls
 * carma_debug_ros2_msgs__msg__RegulatoryElement__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__RegulatoryElement__destroy(carma_debug_ros2_msgs__msg__RegulatoryElement * msg);

/// Check for msg/RegulatoryElement message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__RegulatoryElement__are_equal(const carma_debug_ros2_msgs__msg__RegulatoryElement * lhs, const carma_debug_ros2_msgs__msg__RegulatoryElement * rhs);

/// Copy a msg/RegulatoryElement message.
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
carma_debug_ros2_msgs__msg__RegulatoryElement__copy(
  const carma_debug_ros2_msgs__msg__RegulatoryElement * input,
  carma_debug_ros2_msgs__msg__RegulatoryElement * output);

/// Initialize array of msg/RegulatoryElement messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_debug_ros2_msgs__msg__RegulatoryElement__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__init(carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * array, size_t size);

/// Finalize array of msg/RegulatoryElement messages.
/**
 * It calls
 * carma_debug_ros2_msgs__msg__RegulatoryElement__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__fini(carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * array);

/// Create array of msg/RegulatoryElement messages.
/**
 * It allocates the memory for the array and calls
 * carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence *
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__create(size_t size);

/// Destroy array of msg/RegulatoryElement messages.
/**
 * It calls
 * carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__destroy(carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * array);

/// Check for msg/RegulatoryElement message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__are_equal(const carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * lhs, const carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * rhs);

/// Copy an array of msg/RegulatoryElement messages.
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
carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence__copy(
  const carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * input,
  carma_debug_ros2_msgs__msg__RegulatoryElement__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__FUNCTIONS_H_
