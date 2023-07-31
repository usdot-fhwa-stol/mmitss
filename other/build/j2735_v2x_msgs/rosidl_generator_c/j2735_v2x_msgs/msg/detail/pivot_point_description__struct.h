// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PivotPointDescription.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pivot_offset'
#include "j2735_v2x_msgs/msg/detail/offset_b11__struct.h"
// Member 'pivot_angle'
#include "j2735_v2x_msgs/msg/detail/angle__struct.h"
// Member 'pivots'
#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__struct.h"

// Struct defined in msg/PivotPointDescription in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PivotPointDescription
{
  j2735_v2x_msgs__msg__OffsetB11 pivot_offset;
  j2735_v2x_msgs__msg__Angle pivot_angle;
  j2735_v2x_msgs__msg__PivotingAllowed pivots;
} j2735_v2x_msgs__msg__PivotPointDescription;

// Struct for a sequence of j2735_v2x_msgs__msg__PivotPointDescription.
typedef struct j2735_v2x_msgs__msg__PivotPointDescription__Sequence
{
  j2735_v2x_msgs__msg__PivotPointDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PivotPointDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__STRUCT_H_
