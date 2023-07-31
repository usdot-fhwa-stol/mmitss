// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/PositionOffsetXYZ.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_OFFSET_Z'.
enum
{
  carma_v2x_msgs__msg__PositionOffsetXYZ__HAS_OFFSET_Z = 1
};

// Include directives for member types
// Member 'offset_x'
// Member 'offset_y'
// Member 'offset_z'
#include "carma_v2x_msgs/msg/detail/object_distance__struct.h"

// Struct defined in msg/PositionOffsetXYZ in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__PositionOffsetXYZ
{
  carma_v2x_msgs__msg__ObjectDistance offset_x;
  carma_v2x_msgs__msg__ObjectDistance offset_y;
  uint8_t presence_vector;
  carma_v2x_msgs__msg__ObjectDistance offset_z;
} carma_v2x_msgs__msg__PositionOffsetXYZ;

// Struct for a sequence of carma_v2x_msgs__msg__PositionOffsetXYZ.
typedef struct carma_v2x_msgs__msg__PositionOffsetXYZ__Sequence
{
  carma_v2x_msgs__msg__PositionOffsetXYZ * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__PositionOffsetXYZ__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__STRUCT_H_
