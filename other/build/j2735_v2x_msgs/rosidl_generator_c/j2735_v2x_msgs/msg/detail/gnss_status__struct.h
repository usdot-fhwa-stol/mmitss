// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/GNSSStatus.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__GNSS_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__GNSS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__GNSSStatus__UNAVAILABLE = 0
};

/// Constant 'IS_HEALTHY'.
enum
{
  j2735_v2x_msgs__msg__GNSSStatus__IS_HEALTHY = 1
};

/// Constant 'IS_MONITORED'.
enum
{
  j2735_v2x_msgs__msg__GNSSStatus__IS_MONITORED = 2
};

/// Constant 'BASE_STATION_TYPE'.
enum
{
  j2735_v2x_msgs__msg__GNSSStatus__BASE_STATION_TYPE = 4
};

/// Constant 'APDOP_OF_UNDER_5'.
enum
{
  j2735_v2x_msgs__msg__GNSSStatus__APDOP_OF_UNDER_5 = 8
};

/// Constant 'IN_VIEW_OF_UNDER_5'.
enum
{
  j2735_v2x_msgs__msg__GNSSStatus__IN_VIEW_OF_UNDER_5 = 16
};

/// Constant 'LOCAL_CORRECTIONS_PRESENT'.
enum
{
  j2735_v2x_msgs__msg__GNSSStatus__LOCAL_CORRECTIONS_PRESENT = 32
};

/// Constant 'NETWORK_CORRECTIONS_PRESENT'.
enum
{
  j2735_v2x_msgs__msg__GNSSStatus__NETWORK_CORRECTIONS_PRESENT = 64
};

// Struct defined in msg/GNSSStatus in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__GNSSStatus
{
  uint8_t statuses;
} j2735_v2x_msgs__msg__GNSSStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__GNSSStatus.
typedef struct j2735_v2x_msgs__msg__GNSSStatus__Sequence
{
  j2735_v2x_msgs__msg__GNSSStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__GNSSStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GNSS_STATUS__STRUCT_H_
