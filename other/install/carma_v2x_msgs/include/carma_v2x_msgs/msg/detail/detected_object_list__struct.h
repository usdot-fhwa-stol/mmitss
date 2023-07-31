// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/DetectedObjectList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DETECTED_OBJECT_DATA_MIN_SIZE'.
enum
{
  carma_v2x_msgs__msg__DetectedObjectList__DETECTED_OBJECT_DATA_MIN_SIZE = 1
};

/// Constant 'DETECTED_OBJECT_DATA_MAX_SIZE'.
enum
{
  carma_v2x_msgs__msg__DetectedObjectList__DETECTED_OBJECT_DATA_MAX_SIZE = 256
};

// Include directives for member types
// Member 'detected_object_data'
#include "carma_v2x_msgs/msg/detail/detected_object_data__struct.h"

// Struct defined in msg/DetectedObjectList in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__DetectedObjectList
{
  carma_v2x_msgs__msg__DetectedObjectData__Sequence detected_object_data;
} carma_v2x_msgs__msg__DetectedObjectList;

// Struct for a sequence of carma_v2x_msgs__msg__DetectedObjectList.
typedef struct carma_v2x_msgs__msg__DetectedObjectList__Sequence
{
  carma_v2x_msgs__msg__DetectedObjectList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__DetectedObjectList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_LIST__STRUCT_H_
