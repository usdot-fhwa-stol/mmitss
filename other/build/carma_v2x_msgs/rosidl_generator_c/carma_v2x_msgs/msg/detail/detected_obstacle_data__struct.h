// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/DetectedObstacleData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obst_size'
#include "carma_v2x_msgs/msg/detail/obstacle_size__struct.h"
// Member 'obst_size_confidence'
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__struct.h"

// Struct defined in msg/DetectedObstacleData in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__DetectedObstacleData
{
  carma_v2x_msgs__msg__ObstacleSize obst_size;
  j3224_v2x_msgs__msg__ObstacleSizeConfidence obst_size_confidence;
} carma_v2x_msgs__msg__DetectedObstacleData;

// Struct for a sequence of carma_v2x_msgs__msg__DetectedObstacleData.
typedef struct carma_v2x_msgs__msg__DetectedObstacleData__Sequence
{
  carma_v2x_msgs__msg__DetectedObstacleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__DetectedObstacleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__STRUCT_H_
