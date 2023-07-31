// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/VehicleSizeConfidence.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE_CONFIDENCE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_VEHICLE_HEIGHT_CONFIDENCE'.
enum
{
  j3224_v2x_msgs__msg__VehicleSizeConfidence__HAS_VEHICLE_HEIGHT_CONFIDENCE = 1
};

// Include directives for member types
// Member 'vehicle_width_confidence'
// Member 'vehicle_length_confidence'
// Member 'vehicle_height_confidence'
#include "j3224_v2x_msgs/msg/detail/size_value_confidence__struct.h"

// Struct defined in msg/VehicleSizeConfidence in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__VehicleSizeConfidence
{
  j3224_v2x_msgs__msg__SizeValueConfidence vehicle_width_confidence;
  j3224_v2x_msgs__msg__SizeValueConfidence vehicle_length_confidence;
  uint8_t presence_vector;
  j3224_v2x_msgs__msg__SizeValueConfidence vehicle_height_confidence;
} j3224_v2x_msgs__msg__VehicleSizeConfidence;

// Struct for a sequence of j3224_v2x_msgs__msg__VehicleSizeConfidence.
typedef struct j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence
{
  j3224_v2x_msgs__msg__VehicleSizeConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__VehicleSizeConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE_CONFIDENCE__STRUCT_H_
