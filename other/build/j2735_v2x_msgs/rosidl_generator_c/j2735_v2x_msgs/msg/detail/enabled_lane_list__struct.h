// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/EnabledLaneList.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane_id_list'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/EnabledLaneList in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__EnabledLaneList
{
  rosidl_runtime_c__uint16__Sequence lane_id_list;
} j2735_v2x_msgs__msg__EnabledLaneList;

// Struct for a sequence of j2735_v2x_msgs__msg__EnabledLaneList.
typedef struct j2735_v2x_msgs__msg__EnabledLaneList__Sequence
{
  j2735_v2x_msgs__msg__EnabledLaneList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__EnabledLaneList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__STRUCT_H_
