// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/Position3D.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LATITUDE_UNAVAILABLE'.
static const double carma_v2x_msgs__msg__Position3D__LATITUDE_UNAVAILABLE = 90.0000001l;

/// Constant 'LATITUDE_MAX'.
static const double carma_v2x_msgs__msg__Position3D__LATITUDE_MAX = 90.0l;

/// Constant 'LATITUDE_MIN'.
static const double carma_v2x_msgs__msg__Position3D__LATITUDE_MIN = -90.0l;

/// Constant 'LONGITUDE_UNAVAILABLE'.
static const double carma_v2x_msgs__msg__Position3D__LONGITUDE_UNAVAILABLE = 180.0000001l;

/// Constant 'LONGITUDE_MAX'.
static const double carma_v2x_msgs__msg__Position3D__LONGITUDE_MAX = 180.0l;

/// Constant 'LONGITUDE_MIN'.
static const double carma_v2x_msgs__msg__Position3D__LONGITUDE_MIN = -179.9999999l;

/// Constant 'ELEVATION_UNAVAILABLE'.
static const float carma_v2x_msgs__msg__Position3D__ELEVATION_UNAVAILABLE = -409.6f;

/// Constant 'ELEVATION_MAX'.
static const float carma_v2x_msgs__msg__Position3D__ELEVATION_MAX = 6143.9f;

/// Constant 'ELEVATION_MIN'.
static const float carma_v2x_msgs__msg__Position3D__ELEVATION_MIN = -409.5f;

// Struct defined in msg/Position3D in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__Position3D
{
  double latitude;
  double longitude;
  float elevation;
  bool elevation_exists;
} carma_v2x_msgs__msg__Position3D;

// Struct for a sequence of carma_v2x_msgs__msg__Position3D.
typedef struct carma_v2x_msgs__msg__Position3D__Sequence
{
  carma_v2x_msgs__msg__Position3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__Position3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_H_
