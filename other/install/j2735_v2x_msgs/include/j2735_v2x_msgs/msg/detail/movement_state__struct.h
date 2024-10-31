// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'movement_name'
#include "rosidl_runtime_c/string.h"
// Member 'state_time_speed'
#include "j2735_v2x_msgs/msg/detail/movement_event_list__struct.h"
// Member 'maneuver_assist_list'
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__struct.h"

// Struct defined in msg/MovementState in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__MovementState
{
  rosidl_runtime_c__String movement_name;
  bool movement_name_exists;
  uint8_t signal_group;
  j2735_v2x_msgs__msg__MovementEventList state_time_speed;
  j2735_v2x_msgs__msg__ManeuverAssistList maneuver_assist_list;
  bool maneuver_assist_list_exists;
} j2735_v2x_msgs__msg__MovementState;

// Struct for a sequence of j2735_v2x_msgs__msg__MovementState.
typedef struct j2735_v2x_msgs__msg__MovementState__Sequence
{
  j2735_v2x_msgs__msg__MovementState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MovementState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
