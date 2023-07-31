// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/LocationECEF.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_ECEF__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_ECEF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LocationECEF in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__LocationECEF
{
  int32_t ecef_x;
  int32_t ecef_y;
  int32_t ecef_z;
  uint64_t timestamp;
} carma_v2x_msgs__msg__LocationECEF;

// Struct for a sequence of carma_v2x_msgs__msg__LocationECEF.
typedef struct carma_v2x_msgs__msg__LocationECEF__Sequence
{
  carma_v2x_msgs__msg__LocationECEF * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__LocationECEF__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_ECEF__STRUCT_H_
