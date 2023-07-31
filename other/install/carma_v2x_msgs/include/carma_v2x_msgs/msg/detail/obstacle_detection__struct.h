// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_DESCRIPTION'.
enum
{
  carma_v2x_msgs__msg__ObstacleDetection__HAS_DESCRIPTION = 1
};

/// Constant 'HAS_LOCATION_DETAILS'.
enum
{
  carma_v2x_msgs__msg__ObstacleDetection__HAS_LOCATION_DETAILS = 2
};

/// Constant 'HAS_VERT_EVENT'.
enum
{
  carma_v2x_msgs__msg__ObstacleDetection__HAS_VERT_EVENT = 4
};

// Include directives for member types
// Member 'ob_dist'
#include "carma_v2x_msgs/msg/detail/obstacle_distance__struct.h"
// Member 'ob_direct'
#include "carma_v2x_msgs/msg/detail/obstacle_direction__struct.h"
// Member 'date_time'
#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.h"
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__struct.h"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__struct.h"
// Member 'vert_event'
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__struct.h"

// Struct defined in msg/ObstacleDetection in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__ObstacleDetection
{
  uint16_t presence_vector;
  carma_v2x_msgs__msg__ObstacleDistance ob_dist;
  carma_v2x_msgs__msg__ObstacleDirection ob_direct;
  j2735_v2x_msgs__msg__DDateTime date_time;
  j2735_v2x_msgs__msg__ITIScodes description;
  j2735_v2x_msgs__msg__ITISGenericLocations location_details;
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold vert_event;
} carma_v2x_msgs__msg__ObstacleDetection;

// Struct for a sequence of carma_v2x_msgs__msg__ObstacleDetection.
typedef struct carma_v2x_msgs__msg__ObstacleDetection__Sequence
{
  carma_v2x_msgs__msg__ObstacleDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__ObstacleDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__STRUCT_H_
