// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TrailerHistoryPoint.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_ELEVATION_OFFSET'.
enum
{
  carma_v2x_msgs__msg__TrailerHistoryPoint__HAS_ELEVATION_OFFSET = 1
};

/// Constant 'HAS_HEADING'.
enum
{
  carma_v2x_msgs__msg__TrailerHistoryPoint__HAS_HEADING = 2
};

// Include directives for member types
// Member 'pivot_angle'
#include "carma_v2x_msgs/msg/detail/angle__struct.h"
// Member 'time_offset'
#include "carma_v2x_msgs/msg/detail/time_offset__struct.h"
// Member 'position_offset'
#include "carma_v2x_msgs/msg/detail/node_xy24b__struct.h"
// Member 'elevation_offset'
#include "carma_v2x_msgs/msg/detail/vert_offset_b07__struct.h"
// Member 'heading'
#include "carma_v2x_msgs/msg/detail/coarse_heading__struct.h"

// Struct defined in msg/TrailerHistoryPoint in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TrailerHistoryPoint
{
  uint16_t presence_vector;
  carma_v2x_msgs__msg__Angle pivot_angle;
  carma_v2x_msgs__msg__TimeOffset time_offset;
  carma_v2x_msgs__msg__NodeXY24b position_offset;
  carma_v2x_msgs__msg__VertOffsetB07 elevation_offset;
  carma_v2x_msgs__msg__CoarseHeading heading;
} carma_v2x_msgs__msg__TrailerHistoryPoint;

// Struct for a sequence of carma_v2x_msgs__msg__TrailerHistoryPoint.
typedef struct carma_v2x_msgs__msg__TrailerHistoryPoint__Sequence
{
  carma_v2x_msgs__msg__TrailerHistoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TrailerHistoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__STRUCT_H_
