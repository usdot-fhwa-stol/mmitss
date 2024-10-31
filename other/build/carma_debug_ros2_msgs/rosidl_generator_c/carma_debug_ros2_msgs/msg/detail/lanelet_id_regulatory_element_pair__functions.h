// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__FUNCTIONS_H_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_debug_ros2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.h"

/// Initialize msg/LaneletIdRegulatoryElementPair message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair
 * )) before or use
 * carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__init(carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * msg);

/// Finalize msg/LaneletIdRegulatoryElementPair message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__fini(carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * msg);

/// Create msg/LaneletIdRegulatoryElementPair message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair *
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__create();

/// Destroy msg/LaneletIdRegulatoryElementPair message.
/**
 * It calls
 * carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__destroy(carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * msg);

/// Check for msg/LaneletIdRegulatoryElementPair message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__are_equal(const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * lhs, const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * rhs);

/// Copy a msg/LaneletIdRegulatoryElementPair message.
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
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__copy(
  const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * input,
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * output);

/// Initialize array of msg/LaneletIdRegulatoryElementPair messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init(carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * array, size_t size);

/// Finalize array of msg/LaneletIdRegulatoryElementPair messages.
/**
 * It calls
 * carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__fini(carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * array);

/// Create array of msg/LaneletIdRegulatoryElementPair messages.
/**
 * It allocates the memory for the array and calls
 * carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence *
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__create(size_t size);

/// Destroy array of msg/LaneletIdRegulatoryElementPair messages.
/**
 * It calls
 * carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
void
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__destroy(carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * array);

/// Check for msg/LaneletIdRegulatoryElementPair message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_debug_ros2_msgs
bool
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__are_equal(const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * lhs, const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * rhs);

/// Copy an array of msg/LaneletIdRegulatoryElementPair messages.
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
carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__copy(
  const carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * input,
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__FUNCTIONS_H_
