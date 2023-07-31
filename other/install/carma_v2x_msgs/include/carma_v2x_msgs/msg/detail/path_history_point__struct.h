// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lat_offset'
// Member 'lon_offset'
#include "carma_v2x_msgs/msg/detail/offset_llb18__struct.h"
// Member 'elevation_offset'
#include "carma_v2x_msgs/msg/detail/vert_offset_b12__struct.h"
// Member 'time_offset'
#include "carma_v2x_msgs/msg/detail/time_offset__struct.h"
// Member 'speed'
#include "carma_v2x_msgs/msg/detail/speed__struct.h"
// Member 'pos_accuracy'
#include "carma_v2x_msgs/msg/detail/positional_accuracy__struct.h"
// Member 'heading'
#include "carma_v2x_msgs/msg/detail/coarse_heading__struct.h"

// Struct defined in msg/PathHistoryPoint in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PathHistoryPoint
{
  carma_v2x_msgs__msg__OffsetLLB18 lat_offset;
  carma_v2x_msgs__msg__OffsetLLB18 lon_offset;
  carma_v2x_msgs__msg__VertOffsetB12 elevation_offset;
  carma_v2x_msgs__msg__TimeOffset time_offset;
  carma_v2x_msgs__msg__Speed speed;
  carma_v2x_msgs__msg__PositionalAccuracy pos_accuracy;
  carma_v2x_msgs__msg__CoarseHeading heading;
} carma_v2x_msgs__msg__PathHistoryPoint;

// Struct for a sequence of carma_v2x_msgs__msg__PathHistoryPoint.
typedef struct carma_v2x_msgs__msg__PathHistoryPoint__Sequence
{
  carma_v2x_msgs__msg__PathHistoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PathHistoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_H_
