// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/DetectedObjectData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__STRUCT_H_

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
  carma_v2x_msgs__msg__DetectedObjectData__HAS_DETECTED_OBJECT_OPTIONAL_DATA = 1
};

// Include directives for member types
// Member 'detected_object_common_data'
#include "carma_v2x_msgs/msg/detail/detected_object_common_data__struct.h"
// Member 'detected_object_optional_data'
#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__struct.h"

// Struct defined in msg/DetectedObjectData in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__DetectedObjectData
{
  carma_v2x_msgs__msg__DetectedObjectCommonData detected_object_common_data;
  uint8_t presence_vector;
  carma_v2x_msgs__msg__DetectedObjectOptionalData detected_object_optional_data;
} carma_v2x_msgs__msg__DetectedObjectData;

// Struct for a sequence of carma_v2x_msgs__msg__DetectedObjectData.
typedef struct carma_v2x_msgs__msg__DetectedObjectData__Sequence
{
  carma_v2x_msgs__msg__DetectedObjectData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__DetectedObjectData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_DATA__STRUCT_H_
