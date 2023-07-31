// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_perception_msgs:msg/PredictedState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__STRUCT_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'predicted_position'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'predicted_velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

// Struct defined in msg/PredictedState in the package carma_perception_msgs.
typedef struct carma_perception_msgs__msg__PredictedState
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose predicted_position;
  double predicted_position_confidence;
  geometry_msgs__msg__Twist predicted_velocity;
  double predicted_velocity_confidence;
} carma_perception_msgs__msg__PredictedState;

// Struct for a sequence of carma_perception_msgs__msg__PredictedState.
typedef struct carma_perception_msgs__msg__PredictedState__Sequence
{
  carma_perception_msgs__msg__PredictedState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_perception_msgs__msg__PredictedState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_STATE__STRUCT_H_
