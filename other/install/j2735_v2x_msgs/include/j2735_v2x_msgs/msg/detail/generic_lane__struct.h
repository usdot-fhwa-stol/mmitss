// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'lane_attributes'
#include "j2735_v2x_msgs/msg/detail/lane_attributes__struct.h"
// Member 'maneuvers'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__struct.h"
// Member 'node_list'
#include "j2735_v2x_msgs/msg/detail/node_list_xy__struct.h"
// Member 'connects_to'
#include "j2735_v2x_msgs/msg/detail/connects_to_list__struct.h"
// Member 'overlay_lane_list'
#include "j2735_v2x_msgs/msg/detail/overlay_lane_list__struct.h"

// Struct defined in msg/GenericLane in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__GenericLane
{
  uint8_t lane_id;
  rosidl_runtime_c__String name;
  bool name_exists;
  uint8_t ingress_approach;
  bool ingress_approach_exists;
  uint8_t egress_approach;
  bool egress_approach_exists;
  j2735_v2x_msgs__msg__LaneAttributes lane_attributes;
  j2735_v2x_msgs__msg__AllowedManeuvers maneuvers;
  bool maneuvers_exists;
  j2735_v2x_msgs__msg__NodeListXY node_list;
  j2735_v2x_msgs__msg__ConnectsToList connects_to;
  bool connects_to_exists;
  j2735_v2x_msgs__msg__OverlayLaneList overlay_lane_list;
  bool overlay_lane_list_exists;
} j2735_v2x_msgs__msg__GenericLane;

// Struct for a sequence of j2735_v2x_msgs__msg__GenericLane.
typedef struct j2735_v2x_msgs__msg__GenericLane__Sequence
{
  j2735_v2x_msgs__msg__GenericLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__GenericLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_
