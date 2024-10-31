// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_

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
  carma_v2x_msgs__msg__IntersectionState__MOY_INVALID = 527040ul
};

/// Constant 'TIME_STAMP_UNAVAILABLE'.
static const float carma_v2x_msgs__msg__IntersectionState__TIME_STAMP_UNAVAILABLE = 65.535f;

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.h"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__struct.h"
// Member 'lane_id_list'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'movement_list'
#include "carma_v2x_msgs/msg/detail/movement_state__struct.h"
// Member 'connection_maneuver_assist_list'
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.h"

// Struct defined in msg/IntersectionState in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__IntersectionState
{
  rosidl_runtime_c__String name;
  bool name_exists;
  j2735_v2x_msgs__msg__IntersectionReferenceID id;
  uint8_t revision;
  j2735_v2x_msgs__msg__IntersectionStatusObject status;
  uint32_t moy;
  bool moy_exists;
  float time_stamp;
  bool time_stamp_exists;
  rosidl_runtime_c__uint16__Sequence lane_id_list;
  bool enabled_lanes_exists;
  carma_v2x_msgs__msg__MovementState__Sequence movement_list;
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence connection_maneuver_assist_list;
  bool maneuever_assist_list_exists;
} carma_v2x_msgs__msg__IntersectionState;

// Struct for a sequence of carma_v2x_msgs__msg__IntersectionState.
typedef struct carma_v2x_msgs__msg__IntersectionState__Sequence
{
  carma_v2x_msgs__msg__IntersectionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__IntersectionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
