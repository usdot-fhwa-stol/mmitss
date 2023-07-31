// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ConnectionManeuverAssist in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__ConnectionManeuverAssist
{
  uint8_t connection_id;
  uint16_t queue_length;
  bool queue_length_exists;
  uint16_t available_storage_length;
  bool available_storage_length_exists;
  bool wait_on_stop;
  bool wait_on_stop_exists;
  bool ped_bicycle_detect;
  bool ped_bicycle_detect_exists;
} j2735_v2x_msgs__msg__ConnectionManeuverAssist;

// Struct for a sequence of j2735_v2x_msgs__msg__ConnectionManeuverAssist.
typedef struct j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence
{
  j2735_v2x_msgs__msg__ConnectionManeuverAssist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_
