// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OverlayLaneList.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__OVERLAY_LANE_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OVERLAY_LANE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'overlay_lane_list'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/OverlayLaneList in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__OverlayLaneList
{
  rosidl_runtime_c__uint16__Sequence overlay_lane_list;
} j2735_v2x_msgs__msg__OverlayLaneList;

// Struct for a sequence of j2735_v2x_msgs__msg__OverlayLaneList.
typedef struct j2735_v2x_msgs__msg__OverlayLaneList__Sequence
{
  j2735_v2x_msgs__msg__OverlayLaneList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OverlayLaneList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OVERLAY_LANE_LIST__STRUCT_H_
