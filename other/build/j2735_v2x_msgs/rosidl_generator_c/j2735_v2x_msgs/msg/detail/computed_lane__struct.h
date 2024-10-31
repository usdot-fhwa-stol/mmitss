// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROTATEXY_INVALID'.
enum
{
  j2735_v2x_msgs__msg__ComputedLane__ROTATEXY_INVALID = 255
};

// Include directives for member types
// Member 'offset_x_axis'
#include "j2735_v2x_msgs/msg/detail/offset_xaxis__struct.h"
// Member 'offset_y_axis'
#include "j2735_v2x_msgs/msg/detail/offset_yaxis__struct.h"

// Struct defined in msg/ComputedLane in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__ComputedLane
{
  uint16_t reference_lane_id;
  j2735_v2x_msgs__msg__OffsetXaxis offset_x_axis;
  j2735_v2x_msgs__msg__OffsetYaxis offset_y_axis;
  uint16_t rotate_xy;
  bool rotatexy_exists;
  int16_t scale_x_axis;
  bool scale_x_axis_exists;
  int16_t scale_y_axis;
  bool scale_y_axis_exists;
} j2735_v2x_msgs__msg__ComputedLane;

// Struct for a sequence of j2735_v2x_msgs__msg__ComputedLane.
typedef struct j2735_v2x_msgs__msg__ComputedLane__Sequence
{
  j2735_v2x_msgs__msg__ComputedLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ComputedLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__STRUCT_H_
