// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NODE_XY1'.
enum
{
  carma_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY1 = 0
};

/// Constant 'NODE_XY2'.
enum
{
  carma_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY2 = 1
};

/// Constant 'NODE_XY3'.
enum
{
  carma_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY3 = 2
};

/// Constant 'NODE_XY4'.
enum
{
  carma_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY4 = 3
};

/// Constant 'NODE_XY5'.
enum
{
  carma_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY5 = 4
};

/// Constant 'NODE_XY6'.
enum
{
  carma_v2x_msgs__msg__NodeOffsetPointXY__NODE_XY6 = 5
};

/// Constant 'NODE_LATLON'.
enum
{
  carma_v2x_msgs__msg__NodeOffsetPointXY__NODE_LATLON = 6
};

/// Constant 'LONGITUDE_UNAVAILABLE'.
static const double carma_v2x_msgs__msg__NodeOffsetPointXY__LONGITUDE_UNAVAILABLE = 180.0000001l;

/// Constant 'LONGITUDE_MAX'.
static const double carma_v2x_msgs__msg__NodeOffsetPointXY__LONGITUDE_MAX = 180.0l;

/// Constant 'LONGITUDE_MIN'.
static const double carma_v2x_msgs__msg__NodeOffsetPointXY__LONGITUDE_MIN = -179.9999999l;

/// Constant 'LATITUDE_UNAVAILABLE'.
static const double carma_v2x_msgs__msg__NodeOffsetPointXY__LATITUDE_UNAVAILABLE = 90.0000001l;

/// Constant 'LATITUDE_MAX'.
static const double carma_v2x_msgs__msg__NodeOffsetPointXY__LATITUDE_MAX = 90.0l;

/// Constant 'LATITUDE_MIN'.
static const double carma_v2x_msgs__msg__NodeOffsetPointXY__LATITUDE_MIN = -90.0l;

// Struct defined in msg/NodeOffsetPointXY in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__NodeOffsetPointXY
{
  uint8_t choice;
  float x;
  float y;
  double longitude;
  double latitude;
} carma_v2x_msgs__msg__NodeOffsetPointXY;

// Struct for a sequence of carma_v2x_msgs__msg__NodeOffsetPointXY.
typedef struct carma_v2x_msgs__msg__NodeOffsetPointXY__Sequence
{
  carma_v2x_msgs__msg__NodeOffsetPointXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__NodeOffsetPointXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_
