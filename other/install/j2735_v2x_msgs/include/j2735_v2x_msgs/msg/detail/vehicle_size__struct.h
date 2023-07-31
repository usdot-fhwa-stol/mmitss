// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VehicleSize.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_WIDTH_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__VehicleSize__VEHICLE_WIDTH_UNAVAILABLE = 0
};

/// Constant 'VEHICLE_WIDTH_MAX'.
enum
{
  j2735_v2x_msgs__msg__VehicleSize__VEHICLE_WIDTH_MAX = 1023
};

/// Constant 'VEHICLE_WIDTH_MIN'.
enum
{
  j2735_v2x_msgs__msg__VehicleSize__VEHICLE_WIDTH_MIN = 1
};

/// Constant 'VEHICLE_LENGTH_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__VehicleSize__VEHICLE_LENGTH_UNAVAILABLE = 0
};

/// Constant 'VEHICLE_LENGTH_MAX'.
enum
{
  j2735_v2x_msgs__msg__VehicleSize__VEHICLE_LENGTH_MAX = 4095
};

/// Constant 'VEHICLE_LENGTH_MIN'.
enum
{
  j2735_v2x_msgs__msg__VehicleSize__VEHICLE_LENGTH_MIN = 1
};

// Struct defined in msg/VehicleSize in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__VehicleSize
{
  uint16_t vehicle_width;
  uint16_t vehicle_length;
} j2735_v2x_msgs__msg__VehicleSize;

// Struct for a sequence of j2735_v2x_msgs__msg__VehicleSize.
typedef struct j2735_v2x_msgs__msg__VehicleSize__Sequence
{
  j2735_v2x_msgs__msg__VehicleSize * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VehicleSize__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SIZE__STRUCT_H_
