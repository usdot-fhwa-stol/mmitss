// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAX_POINTS_IN_MESSAGE'.
enum
{
  carma_v2x_msgs__msg__Trajectory__MAX_POINTS_IN_MESSAGE = 60
};

// Include directives for member types
// Member 'location'
#include "carma_v2x_msgs/msg/detail/location_ecef__struct.h"
// Member 'offsets'
#include "carma_v2x_msgs/msg/detail/location_offset_ecef__struct.h"

// Struct defined in msg/Trajectory in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__Trajectory
{
  carma_v2x_msgs__msg__LocationECEF location;
  carma_v2x_msgs__msg__LocationOffsetECEF__Sequence offsets;
} carma_v2x_msgs__msg__Trajectory;

// Struct for a sequence of carma_v2x_msgs__msg__Trajectory.
typedef struct carma_v2x_msgs__msg__Trajectory__Sequence
{
  carma_v2x_msgs__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_H_
