// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_

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
// Member 'movement_event_list'
#include "carma_v2x_msgs/msg/detail/movement_event__struct.h"
// Member 'connection_maneuver_assist_list'
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.h"

// Struct defined in msg/MovementState in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__MovementState
{
  rosidl_runtime_c__String movement_name;
  bool movement_name_exists;
  uint8_t signal_group;
  carma_v2x_msgs__msg__MovementEvent__Sequence movement_event_list;
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence connection_maneuver_assist_list;
  bool maneuver_assist_list_exists;
} carma_v2x_msgs__msg__MovementState;

// Struct for a sequence of carma_v2x_msgs__msg__MovementState.
typedef struct carma_v2x_msgs__msg__MovementState__Sequence
{
  carma_v2x_msgs__msg__MovementState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__MovementState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
