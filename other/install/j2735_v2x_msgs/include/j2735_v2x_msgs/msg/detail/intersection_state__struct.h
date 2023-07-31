// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MOY_INVALID'.
enum
{
  j2735_v2x_msgs__msg__IntersectionState__MOY_INVALID = 527040ul
};

/// Constant 'TIME_STAMP_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__IntersectionState__TIME_STAMP_UNAVAILABLE = 65535ul
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.h"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__struct.h"
// Member 'enabled_lanes'
#include "j2735_v2x_msgs/msg/detail/enabled_lane_list__struct.h"
// Member 'states'
#include "j2735_v2x_msgs/msg/detail/movement_list__struct.h"
// Member 'maneuever_assist_list'
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__struct.h"

// Struct defined in msg/IntersectionState in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__IntersectionState
{
  rosidl_runtime_c__String name;
  bool name_exists;
  j2735_v2x_msgs__msg__IntersectionReferenceID id;
  uint8_t revision;
  j2735_v2x_msgs__msg__IntersectionStatusObject status;
  uint32_t moy;
  bool moy_exists;
  uint32_t time_stamp;
  bool time_stamp_exists;
  j2735_v2x_msgs__msg__EnabledLaneList enabled_lanes;
  bool enabled_lanes_exists;
  j2735_v2x_msgs__msg__MovementList states;
  j2735_v2x_msgs__msg__ManeuverAssistList maneuever_assist_list;
  bool maneuever_assist_list_exists;
} j2735_v2x_msgs__msg__IntersectionState;

// Struct for a sequence of j2735_v2x_msgs__msg__IntersectionState.
typedef struct j2735_v2x_msgs__msg__IntersectionState__Sequence
{
  j2735_v2x_msgs__msg__IntersectionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__IntersectionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
