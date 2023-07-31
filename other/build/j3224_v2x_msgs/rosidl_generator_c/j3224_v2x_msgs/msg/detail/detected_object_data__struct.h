// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/DetectedObjectData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_DETECTED_OBJECT_OPTIONAL_DATA'.
enum
{
  j3224_v2x_msgs__msg__DetectedObjectData__HAS_DETECTED_OBJECT_OPTIONAL_DATA = 1
};

// Include directives for member types
// Member 'detected_object_common_data'
#include "j3224_v2x_msgs/msg/detail/detected_object_common_data__struct.h"
// Member 'detected_object_optional_data'
#include "j3224_v2x_msgs/msg/detail/detected_object_optional_data__struct.h"

// Struct defined in msg/DetectedObjectData in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__DetectedObjectData
{
  j3224_v2x_msgs__msg__DetectedObjectCommonData detected_object_common_data;
  uint8_t presence_vector;
  j3224_v2x_msgs__msg__DetectedObjectOptionalData detected_object_optional_data;
} j3224_v2x_msgs__msg__DetectedObjectData;

// Struct for a sequence of j3224_v2x_msgs__msg__DetectedObjectData.
typedef struct j3224_v2x_msgs__msg__DetectedObjectData__Sequence
{
  j3224_v2x_msgs__msg__DetectedObjectData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__DetectedObjectData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__STRUCT_H_
