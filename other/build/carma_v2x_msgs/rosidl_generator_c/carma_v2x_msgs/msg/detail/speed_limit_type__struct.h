// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/SpeedLimitType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__UNKNOWN = 0
};

/// Constant 'MAXSPEEDINSCHOOLZONE'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__MAXSPEEDINSCHOOLZONE = 1
};

/// Constant 'MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT = 2
};

/// Constant 'MAXSPEEDINCONSTRUCTIONZONE'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__MAXSPEEDINCONSTRUCTIONZONE = 3
};

/// Constant 'VEHICLEMINSPEED'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__VEHICLEMINSPEED = 4
};

/// Constant 'VEHICLEMAXSPEED'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__VEHICLEMAXSPEED = 5
};

/// Constant 'VEHICLENIGHTMAXSPEED'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__VEHICLENIGHTMAXSPEED = 6
};

/// Constant 'TRUCKMINSPEED'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__TRUCKMINSPEED = 7
};

/// Constant 'TRUCKMAXSPEED'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__TRUCKMAXSPEED = 8
};

/// Constant 'TRUCKNIGHTMAXSPEED'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__TRUCKNIGHTMAXSPEED = 9
};

/// Constant 'VEHICLESWITHTRAILERSMINSPEED'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__VEHICLESWITHTRAILERSMINSPEED = 10
};

/// Constant 'VEHICLESWITHTRAILERSMAXSPEED'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__VEHICLESWITHTRAILERSMAXSPEED = 11
};

/// Constant 'VEHICLESWITHTRAILERSNIGHTMAXSPEED'.
enum
{
  carma_v2x_msgs__msg__SpeedLimitType__VEHICLESWITHTRAILERSNIGHTMAXSPEED = 12
};

// Struct defined in msg/SpeedLimitType in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__SpeedLimitType
{
  uint8_t speed_limit_type;
} carma_v2x_msgs__msg__SpeedLimitType;

// Struct for a sequence of carma_v2x_msgs__msg__SpeedLimitType.
typedef struct carma_v2x_msgs__msg__SpeedLimitType__Sequence
{
  carma_v2x_msgs__msg__SpeedLimitType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__SpeedLimitType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_H_
