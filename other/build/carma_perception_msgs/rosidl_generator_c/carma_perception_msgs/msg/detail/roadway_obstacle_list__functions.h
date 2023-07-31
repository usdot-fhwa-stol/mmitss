// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_perception_msgs:msg/RoadwayObstacleList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__FUNCTIONS_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_perception_msgs/msg/detail/roadway_obstacle_list__struct.h"

/// Initialize msg/RoadwayObstacleList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_perception_msgs__msg__RoadwayObstacleList
 * )) before or use
 * carma_perception_msgs__msg__RoadwayObstacleList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__RoadwayObstacleList__init(carma_perception_msgs__msg__RoadwayObstacleList * msg);

/// Finalize msg/RoadwayObstacleList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__RoadwayObstacleList__fini(carma_perception_msgs__msg__RoadwayObstacleList * msg);

/// Create msg/RoadwayObstacleList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_perception_msgs__msg__RoadwayObstacleList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
carma_perception_msgs__msg__RoadwayObstacleList *
carma_perception_msgs__msg__RoadwayObstacleList__create();

/// Destroy msg/RoadwayObstacleList message.
/**
 * It calls
 * carma_perception_msgs__msg__RoadwayObstacleList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__RoadwayObstacleList__destroy(carma_perception_msgs__msg__RoadwayObstacleList * msg);

/// Check for msg/RoadwayObstacleList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__RoadwayObstacleList__are_equal(const carma_perception_msgs__msg__RoadwayObstacleList * lhs, const carma_perception_msgs__msg__RoadwayObstacleList * rhs);

/// Copy a msg/RoadwayObstacleList message.
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
carma_perception_msgs__msg__RoadwayObstacleList__copy(
  const carma_perception_msgs__msg__RoadwayObstacleList * input,
  carma_perception_msgs__msg__RoadwayObstacleList * output);

/// Initialize array of msg/RoadwayObstacleList messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_perception_msgs__msg__RoadwayObstacleList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__init(carma_perception_msgs__msg__RoadwayObstacleList__Sequence * array, size_t size);

/// Finalize array of msg/RoadwayObstacleList messages.
/**
 * It calls
 * carma_perception_msgs__msg__RoadwayObstacleList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__fini(carma_perception_msgs__msg__RoadwayObstacleList__Sequence * array);

/// Create array of msg/RoadwayObstacleList messages.
/**
 * It allocates the memory for the array and calls
 * carma_perception_msgs__msg__RoadwayObstacleList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
carma_perception_msgs__msg__RoadwayObstacleList__Sequence *
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__create(size_t size);

/// Destroy array of msg/RoadwayObstacleList messages.
/**
 * It calls
 * carma_perception_msgs__msg__RoadwayObstacleList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
void
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__destroy(carma_perception_msgs__msg__RoadwayObstacleList__Sequence * array);

/// Check for msg/RoadwayObstacleList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_perception_msgs
bool
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__are_equal(const carma_perception_msgs__msg__RoadwayObstacleList__Sequence * lhs, const carma_perception_msgs__msg__RoadwayObstacleList__Sequence * rhs);

/// Copy an array of msg/RoadwayObstacleList messages.
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
carma_perception_msgs__msg__RoadwayObstacleList__Sequence__copy(
  const carma_perception_msgs__msg__RoadwayObstacleList__Sequence * input,
  carma_perception_msgs__msg__RoadwayObstacleList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__FUNCTIONS_H_
