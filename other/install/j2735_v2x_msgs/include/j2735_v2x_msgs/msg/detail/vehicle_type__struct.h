// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VehicleType.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__UNKNOWN = 1
};

/// Constant 'SPECIAL'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__SPECIAL = 2
};

/// Constant 'MOTO'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__MOTO = 3
};

/// Constant 'CAR'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__CAR = 4
};

/// Constant 'CAR_OTHER'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__CAR_OTHER = 5
};

/// Constant 'BUS'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__BUS = 6
};

/// Constant 'AXLE_CNT_2'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__AXLE_CNT_2 = 7
};

/// Constant 'AXLE_CNT_3'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__AXLE_CNT_3 = 8
};

/// Constant 'AXLE_CNT_4'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__AXLE_CNT_4 = 9
};

/// Constant 'AXLE_CNT_4_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__AXLE_CNT_4_TRAILER = 10
};

/// Constant 'AXLE_CNT_5_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__AXLE_CNT_5_TRAILER = 11
};

/// Constant 'AXLE_CNT_6_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__AXLE_CNT_6_TRAILER = 12
};

/// Constant 'AXLE_CNT_5_MULTI_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__AXLE_CNT_5_MULTI_TRAILER = 13
};

/// Constant 'AXLE_CNT_6_MULTI_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__AXLE_CNT_6_MULTI_TRAILER = 14
};

/// Constant 'AXLE_CNT_7_MULTI_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__VehicleType__AXLE_CNT_7_MULTI_TRAILER = 15
};

// Struct defined in msg/VehicleType in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__VehicleType
{
  uint8_t vehicle_type;
} j2735_v2x_msgs__msg__VehicleType;

// Struct for a sequence of j2735_v2x_msgs__msg__VehicleType.
typedef struct j2735_v2x_msgs__msg__VehicleType__Sequence
{
  j2735_v2x_msgs__msg__VehicleType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VehicleType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_TYPE__STRUCT_H_
