// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_perception_msgs:msg/TrafficSignalInfoList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__FUNCTIONS_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_perception_msgs/msg/detail/traffic_signal_info_list__struct.h"

/// Initialize msg/TrafficSignalInfoList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_perception_msgs__msg__TrafficSignalInfoList
 * )) before or use
 * carma_perception_msgs__msg__TrafficSignalInfoList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__TrafficSignalInfoList__init(carma_perception_msgs__msg__TrafficSignalInfoList * msg);

/// Finalize msg/TrafficSignalInfoList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__TrafficSignalInfoList__fini(carma_perception_msgs__msg__TrafficSignalInfoList * msg);

/// Create msg/TrafficSignalInfoList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_perception_msgs__msg__TrafficSignalInfoList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
carma_perception_msgs__msg__TrafficSignalInfoList *
carma_perception_msgs__msg__TrafficSignalInfoList__create();

/// Destroy msg/TrafficSignalInfoList message.
/**
 * It calls
 * carma_perception_msgs__msg__TrafficSignalInfoList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__TrafficSignalInfoList__destroy(carma_perception_msgs__msg__TrafficSignalInfoList * msg);

/// Check for msg/TrafficSignalInfoList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__TrafficSignalInfoList__are_equal(const carma_perception_msgs__msg__TrafficSignalInfoList * lhs, const carma_perception_msgs__msg__TrafficSignalInfoList * rhs);

/// Copy a msg/TrafficSignalInfoList message.
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
carma_perception_msgs__msg__TrafficSignalInfoList__copy(
  const carma_perception_msgs__msg__TrafficSignalInfoList * input,
  carma_perception_msgs__msg__TrafficSignalInfoList * output);

/// Initialize array of msg/TrafficSignalInfoList messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_perception_msgs__msg__TrafficSignalInfoList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__init(carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * array, size_t size);

/// Finalize array of msg/TrafficSignalInfoList messages.
/**
 * It calls
 * carma_perception_msgs__msg__TrafficSignalInfoList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__fini(carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * array);

/// Create array of msg/TrafficSignalInfoList messages.
/**
 * It allocates the memory for the array and calls
 * carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence *
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__create(size_t size);

/// Destroy array of msg/TrafficSignalInfoList messages.
/**
 * It calls
 * carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__destroy(carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * array);

/// Check for msg/TrafficSignalInfoList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__are_equal(const carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * lhs, const carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * rhs);

/// Copy an array of msg/TrafficSignalInfoList messages.
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
carma_perception_msgs__msg__TrafficSignalInfoList__Sequence__copy(
  const carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * input,
  carma_perception_msgs__msg__TrafficSignalInfoList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__FUNCTIONS_H_
