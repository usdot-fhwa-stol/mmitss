// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_perception_msgs:msg/RoadwayObstacleList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__STRUCT_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roadway_obstacles'
#include "carma_perception_msgs/msg/detail/roadway_obstacle__struct.h"

// Struct defined in msg/RoadwayObstacleList in the package carma_perception_msgs.
typedef struct carma_perception_msgs__msg__RoadwayObstacleList
{
  carma_perception_msgs__msg__RoadwayObstacle__Sequence roadway_obstacles;
} carma_perception_msgs__msg__RoadwayObstacleList;

// Struct for a sequence of carma_perception_msgs__msg__RoadwayObstacleList.
typedef struct carma_perception_msgs__msg__RoadwayObstacleList__Sequence
{
  carma_perception_msgs__msg__RoadwayObstacleList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_perception_msgs__msg__RoadwayObstacleList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__STRUCT_H_
