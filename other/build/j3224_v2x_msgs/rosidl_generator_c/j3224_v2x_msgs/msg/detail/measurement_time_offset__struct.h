// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/MeasurementTimeOffset.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_MEASUREMENT_TIME_OFFSET'.
enum
{
  j3224_v2x_msgs__msg__MeasurementTimeOffset__MIN_MEASUREMENT_TIME_OFFSET = -1500
};

/// Constant 'MAX_MEASUREMENT_TIME_OFFSET'.
enum
{
  j3224_v2x_msgs__msg__MeasurementTimeOffset__MAX_MEASUREMENT_TIME_OFFSET = 1500
};

// Struct defined in msg/MeasurementTimeOffset in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__MeasurementTimeOffset
{
  int16_t measurement_time_offset;
} j3224_v2x_msgs__msg__MeasurementTimeOffset;

// Struct for a sequence of j3224_v2x_msgs__msg__MeasurementTimeOffset.
typedef struct j3224_v2x_msgs__msg__MeasurementTimeOffset__Sequence
{
  j3224_v2x_msgs__msg__MeasurementTimeOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__MeasurementTimeOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__STRUCT_H_
