// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/MeasurementTimeOffset.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MIN_MEASUREMENT_TIME_OFFSET'.
static const float carma_v2x_msgs__msg__MeasurementTimeOffset__MIN_MEASUREMENT_TIME_OFFSET = -1.5f;

/// Constant 'MAX_MEASUREMENT_TIME_OFFSET'.
static const float carma_v2x_msgs__msg__MeasurementTimeOffset__MAX_MEASUREMENT_TIME_OFFSET = 1.5f;

// Struct defined in msg/MeasurementTimeOffset in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__MeasurementTimeOffset
{
  float measurement_time_offset;
} carma_v2x_msgs__msg__MeasurementTimeOffset;

// Struct for a sequence of carma_v2x_msgs__msg__MeasurementTimeOffset.
typedef struct carma_v2x_msgs__msg__MeasurementTimeOffset__Sequence
{
  carma_v2x_msgs__msg__MeasurementTimeOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__MeasurementTimeOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__STRUCT_H_
