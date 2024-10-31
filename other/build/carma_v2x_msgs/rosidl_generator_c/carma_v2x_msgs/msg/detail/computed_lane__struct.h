// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'offset_x_axis'
// Member 'offset_y_axis'
#include "carma_v2x_msgs/msg/detail/offset_axis__struct.h"

// Struct defined in msg/ComputedLane in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__ComputedLane
{
  uint16_t reference_lane_id;
  carma_v2x_msgs__msg__OffsetAxis offset_x_axis;
  carma_v2x_msgs__msg__OffsetAxis offset_y_axis;
  float rotate_xy;
  bool rotatexy_exists;
  int16_t scale_x_axis;
  bool scale_x_axis_exists;
  int16_t scale_y_axis;
  bool scale_y_axis_exists;
} carma_v2x_msgs__msg__ComputedLane;

// Struct for a sequence of carma_v2x_msgs__msg__ComputedLane.
typedef struct carma_v2x_msgs__msg__ComputedLane__Sequence
{
  carma_v2x_msgs__msg__ComputedLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__ComputedLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_
