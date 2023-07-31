// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_planning_msgs:msg/IntersectionTransitLeftTurnManeuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_LEFT_TURN_MANEUVER__FUNCTIONS_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_LEFT_TURN_MANEUVER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_planning_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_planning_msgs/msg/detail/intersection_transit_left_turn_maneuver__struct.h"

/// Initialize msg/IntersectionTransitLeftTurnManeuver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver
 * )) before or use
 * carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__init(carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver * msg);

/// Finalize msg/IntersectionTransitLeftTurnManeuver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__fini(carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver * msg);

/// Create msg/IntersectionTransitLeftTurnManeuver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver *
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__create();

/// Destroy msg/IntersectionTransitLeftTurnManeuver message.
/**
 * It calls
 * carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__destroy(carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver * msg);

/// Check for msg/IntersectionTransitLeftTurnManeuver message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__are_equal(const carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver * lhs, const carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver * rhs);

/// Copy a msg/IntersectionTransitLeftTurnManeuver message.
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
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__copy(
  const carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver * input,
  carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver * output);

/// Initialize array of msg/IntersectionTransitLeftTurnManeuver messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence__init(carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence * array, size_t size);

/// Finalize array of msg/IntersectionTransitLeftTurnManeuver messages.
/**
 * It calls
 * carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence__fini(carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence * array);

/// Create array of msg/IntersectionTransitLeftTurnManeuver messages.
/**
 * It allocates the memory for the array and calls
 * carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence *
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence__create(size_t size);

/// Destroy array of msg/IntersectionTransitLeftTurnManeuver messages.
/**
 * It calls
 * carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence__destroy(carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence * array);

/// Check for msg/IntersectionTransitLeftTurnManeuver message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence__are_equal(const carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence * lhs, const carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence * rhs);

/// Copy an array of msg/IntersectionTransitLeftTurnManeuver messages.
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
carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence__copy(
  const carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence * input,
  carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_LEFT_TURN_MANEUVER__FUNCTIONS_H_
