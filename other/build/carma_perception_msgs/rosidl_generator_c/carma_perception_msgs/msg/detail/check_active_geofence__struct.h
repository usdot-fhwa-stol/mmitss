// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__STRUCT_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_LIMIT'.
enum
{
  carma_perception_msgs__msg__CheckActiveGeofence__SPEED_LIMIT = 1
};

/// Constant 'LANE_CLOSED'.
enum
{
  carma_perception_msgs__msg__CheckActiveGeofence__LANE_CLOSED = 2
};

/// Constant 'LANE_OPEN'.
enum
{
  carma_perception_msgs__msg__CheckActiveGeofence__LANE_OPEN = 3
};

// Include directives for member types
// Member 'reason'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CheckActiveGeofence in the package carma_perception_msgs.
typedef struct carma_perception_msgs__msg__CheckActiveGeofence
{
  bool is_on_active_geofence;
  uint8_t type;
  rosidl_runtime_c__String reason;
  double value;
  double distance_to_next_geofence;
  double minimum_gap;
  double advisory_speed;
} carma_perception_msgs__msg__CheckActiveGeofence;

// Struct for a sequence of carma_perception_msgs__msg__CheckActiveGeofence.
typedef struct carma_perception_msgs__msg__CheckActiveGeofence__Sequence
{
  carma_perception_msgs__msg__CheckActiveGeofence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_perception_msgs__msg__CheckActiveGeofence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__STRUCT_H_
