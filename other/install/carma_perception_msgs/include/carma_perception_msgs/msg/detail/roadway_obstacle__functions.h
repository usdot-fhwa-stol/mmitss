// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_perception_msgs:msg/RoadwayObstacle.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__FUNCTIONS_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_perception_msgs/msg/detail/roadway_obstacle__struct.h"

/// Initialize msg/RoadwayObstacle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_perception_msgs__msg__RoadwayObstacle
 * )) before or use
 * carma_perception_msgs__msg__RoadwayObstacle__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__RoadwayObstacle__init(carma_perception_msgs__msg__RoadwayObstacle * msg);

/// Finalize msg/RoadwayObstacle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__RoadwayObstacle__fini(carma_perception_msgs__msg__RoadwayObstacle * msg);

/// Create msg/RoadwayObstacle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_perception_msgs__msg__RoadwayObstacle__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
carma_perception_msgs__msg__RoadwayObstacle *
carma_perception_msgs__msg__RoadwayObstacle__create();

/// Destroy msg/RoadwayObstacle message.
/**
 * It calls
 * carma_perception_msgs__msg__RoadwayObstacle__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__RoadwayObstacle__destroy(carma_perception_msgs__msg__RoadwayObstacle * msg);

/// Check for msg/RoadwayObstacle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__RoadwayObstacle__are_equal(const carma_perception_msgs__msg__RoadwayObstacle * lhs, const carma_perception_msgs__msg__RoadwayObstacle * rhs);

/// Copy a msg/RoadwayObstacle message.
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
carma_perception_msgs__msg__RoadwayObstacle__copy(
  const carma_perception_msgs__msg__RoadwayObstacle * input,
  carma_perception_msgs__msg__RoadwayObstacle * output);

/// Initialize array of msg/RoadwayObstacle messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_perception_msgs__msg__RoadwayObstacle__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__RoadwayObstacle__Sequence__init(carma_perception_msgs__msg__RoadwayObstacle__Sequence * array, size_t size);

/// Finalize array of msg/RoadwayObstacle messages.
/**
 * It calls
 * carma_perception_msgs__msg__RoadwayObstacle__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__RoadwayObstacle__Sequence__fini(carma_perception_msgs__msg__RoadwayObstacle__Sequence * array);

/// Create array of msg/RoadwayObstacle messages.
/**
 * It allocates the memory for the array and calls
 * carma_perception_msgs__msg__RoadwayObstacle__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
carma_perception_msgs__msg__RoadwayObstacle__Sequence *
carma_perception_msgs__msg__RoadwayObstacle__Sequence__create(size_t size);

/// Destroy array of msg/RoadwayObstacle messages.
/**
 * It calls
 * carma_perception_msgs__msg__RoadwayObstacle__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__RoadwayObstacle__Sequence__destroy(carma_perception_msgs__msg__RoadwayObstacle__Sequence * array);

/// Check for msg/RoadwayObstacle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__RoadwayObstacle__Sequence__are_equal(const carma_perception_msgs__msg__RoadwayObstacle__Sequence * lhs, const carma_perception_msgs__msg__RoadwayObstacle__Sequence * rhs);

/// Copy an array of msg/RoadwayObstacle messages.
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
carma_perception_msgs__msg__RoadwayObstacle__Sequence__copy(
  const carma_perception_msgs__msg__RoadwayObstacle__Sequence * input,
  carma_perception_msgs__msg__RoadwayObstacle__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__FUNCTIONS_H_
