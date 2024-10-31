// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_planning_msgs:msg/LaneFollowingManeuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_FOLLOWING_MANEUVER__FUNCTIONS_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_FOLLOWING_MANEUVER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_planning_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_planning_msgs/msg/detail/lane_following_maneuver__struct.h"

/// Initialize msg/LaneFollowingManeuver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_planning_msgs__msg__LaneFollowingManeuver
 * )) before or use
 * carma_planning_msgs__msg__LaneFollowingManeuver__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__LaneFollowingManeuver__init(carma_planning_msgs__msg__LaneFollowingManeuver * msg);

/// Finalize msg/LaneFollowingManeuver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__LaneFollowingManeuver__fini(carma_planning_msgs__msg__LaneFollowingManeuver * msg);

/// Create msg/LaneFollowingManeuver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_planning_msgs__msg__LaneFollowingManeuver__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
carma_planning_msgs__msg__LaneFollowingManeuver *
carma_planning_msgs__msg__LaneFollowingManeuver__create();

/// Destroy msg/LaneFollowingManeuver message.
/**
 * It calls
 * carma_planning_msgs__msg__LaneFollowingManeuver__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__LaneFollowingManeuver__destroy(carma_planning_msgs__msg__LaneFollowingManeuver * msg);

/// Check for msg/LaneFollowingManeuver message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__LaneFollowingManeuver__are_equal(const carma_planning_msgs__msg__LaneFollowingManeuver * lhs, const carma_planning_msgs__msg__LaneFollowingManeuver * rhs);

/// Copy a msg/LaneFollowingManeuver message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__LaneFollowingManeuver__copy(
  const carma_planning_msgs__msg__LaneFollowingManeuver * input,
  carma_planning_msgs__msg__LaneFollowingManeuver * output);

/// Initialize array of msg/LaneFollowingManeuver messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_planning_msgs__msg__LaneFollowingManeuver__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__init(carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * array, size_t size);

/// Finalize array of msg/LaneFollowingManeuver messages.
/**
 * It calls
 * carma_planning_msgs__msg__LaneFollowingManeuver__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__fini(carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * array);

/// Create array of msg/LaneFollowingManeuver messages.
/**
 * It allocates the memory for the array and calls
 * carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence *
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__create(size_t size);

/// Destroy array of msg/LaneFollowingManeuver messages.
/**
 * It calls
 * carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__destroy(carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * array);

/// Check for msg/LaneFollowingManeuver message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__are_equal(const carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * lhs, const carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * rhs);

/// Copy an array of msg/LaneFollowingManeuver messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__LaneFollowingManeuver__Sequence__copy(
  const carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * input,
  carma_planning_msgs__msg__LaneFollowingManeuver__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__LANE_FOLLOWING_MANEUVER__FUNCTIONS_H_
