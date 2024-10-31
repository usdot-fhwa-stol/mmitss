// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACCELERATION_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_AVAILABLE = 1
};

/// Constant 'ACCELERATION_VERTICAL_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_VERTICAL_AVAILABLE = 2
};

/// Constant 'YAWRATE_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__AccelerationSet4Way__YAWRATE_AVAILABLE = 4
};

/// Constant 'ACCELERATION_MAX'.
static const float carma_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_MAX = 20.0f;

/// Constant 'ACCELERATION_MIN'.
static const float carma_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_MIN = -20.0f;

/// Constant 'ACCELERATION_VERTICAL_MAX'.
static const float carma_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_VERTICAL_MAX = 24.892f;

/// Constant 'ACCELERATION_VERTICAL_MIN'.
static const float carma_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_VERTICAL_MIN = -24.696f;

/// Constant 'YAWRATE_MAX'.
static const float carma_v2x_msgs__msg__AccelerationSet4Way__YAWRATE_MAX = 327.67f;

/// Constant 'YAWRATE_MIN'.
static const float carma_v2x_msgs__msg__AccelerationSet4Way__YAWRATE_MIN = -327.67f;

// Struct defined in msg/AccelerationSet4Way in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__AccelerationSet4Way
{
  uint16_t presence_vector;
  float longitudinal;
  float lateral;
  float vert;
  float yaw_rate;
} carma_v2x_msgs__msg__AccelerationSet4Way;

// Struct for a sequence of carma_v2x_msgs__msg__AccelerationSet4Way.
typedef struct carma_v2x_msgs__msg__AccelerationSet4Way__Sequence
{
  carma_v2x_msgs__msg__AccelerationSet4Way * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__AccelerationSet4Way__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_
