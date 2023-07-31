// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_

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
// Member 'intersections'
#include "j2735_v2x_msgs/msg/detail/intersection_state_list__struct.h"

// Struct defined in msg/SPAT in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__SPAT
{
  uint32_t time_stamp;
  bool time_stamp_exists;
  rosidl_runtime_c__String name;
  bool name_exists;
  j2735_v2x_msgs__msg__IntersectionStateList intersections;
} j2735_v2x_msgs__msg__SPAT;

// Struct for a sequence of j2735_v2x_msgs__msg__SPAT.
typedef struct j2735_v2x_msgs__msg__SPAT__Sequence
{
  j2735_v2x_msgs__msg__SPAT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SPAT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_
