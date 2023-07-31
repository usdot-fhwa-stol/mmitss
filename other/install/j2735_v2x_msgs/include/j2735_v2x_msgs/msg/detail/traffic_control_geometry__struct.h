// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REFLON_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLON_UNAVAILABLE = 1800000001l
};

/// Constant 'REFLON_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLON_MAX = 1800000000l
};

/// Constant 'REFLON_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLON_MIN = -1799999999l
};

/// Constant 'REFLAT_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLAT_UNAVAILABLE = 900000001l
};

/// Constant 'REFLAT_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLAT_MAX = 900000000l
};

/// Constant 'REFLAT_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFLAT_MIN = -900000000l
};

/// Constant 'REFELV_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFELV_UNKNOWN = 0l
};

/// Constant 'REFELV_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFELV_MAX = 65535l
};

/// Constant 'REFELV_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__REFELV_MIN = 1l
};

/// Constant 'HEADING_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__HEADING_MAX = 3599
};

/// Constant 'HEADING_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlGeometry__HEADING_MIN = 0
};

// Include directives for member types
// Member 'proj'
// Member 'datum'
#include "rosidl_runtime_c/string.h"
// Member 'nodes'
#include "j2735_v2x_msgs/msg/detail/path_node__struct.h"

// Struct defined in msg/TrafficControlGeometry in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TrafficControlGeometry
{
  rosidl_runtime_c__String proj;
  rosidl_runtime_c__String datum;
  uint64_t reftime;
  int32_t reflon;
  int32_t reflat;
  int32_t refelv;
  uint16_t heading;
  j2735_v2x_msgs__msg__PathNode__Sequence nodes;
} j2735_v2x_msgs__msg__TrafficControlGeometry;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlGeometry.
typedef struct j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_H_
