// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_planning_msgs:msg/IntersectionTransitRightTurnManeuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_RIGHT_TURN_MANEUVER__FUNCTIONS_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_RIGHT_TURN_MANEUVER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_planning_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__struct.h"

/// Initialize msg/IntersectionTransitRightTurnManeuver message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver
 * )) before or use
 * carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__init(carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver * msg);

/// Finalize msg/IntersectionTransitRightTurnManeuver message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__fini(carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver * msg);

/// Create msg/IntersectionTransitRightTurnManeuver message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver *
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__create();

/// Destroy msg/IntersectionTransitRightTurnManeuver message.
/**
 * It calls
 * carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__destroy(carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver * msg);

/// Check for msg/IntersectionTransitRightTurnManeuver message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__are_equal(const carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver * lhs, const carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver * rhs);

/// Copy a msg/IntersectionTransitRightTurnManeuver message.
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
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__copy(
  const carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver * input,
  carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver * output);

/// Initialize array of msg/IntersectionTransitRightTurnManeuver messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence__init(carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence * array, size_t size);

/// Finalize array of msg/IntersectionTransitRightTurnManeuver messages.
/**
 * It calls
 * carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence__fini(carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence * array);

/// Create array of msg/IntersectionTransitRightTurnManeuver messages.
/**
 * It allocates the memory for the array and calls
 * carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence *
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence__create(size_t size);

/// Destroy array of msg/IntersectionTransitRightTurnManeuver messages.
/**
 * It calls
 * carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
void
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence__destroy(carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence * array);

/// Check for msg/IntersectionTransitRightTurnManeuver message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_planning_msgs
bool
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence__are_equal(const carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence * lhs, const carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence * rhs);

/// Copy an array of msg/IntersectionTransitRightTurnManeuver messages.
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
carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence__copy(
  const carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence * input,
  carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__INTERSECTION_TRANSIT_RIGHT_TURN_MANEUVER__FUNCTIONS_H_
