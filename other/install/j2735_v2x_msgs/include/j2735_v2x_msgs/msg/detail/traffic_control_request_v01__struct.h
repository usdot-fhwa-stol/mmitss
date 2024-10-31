// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reqid'
#include "j2735_v2x_msgs/msg/detail/id64b__struct.h"
// Member 'bounds'
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__struct.h"

// Struct defined in msg/TrafficControlRequestV01 in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TrafficControlRequestV01
{
  j2735_v2x_msgs__msg__Id64b reqid;
  uint8_t reqseq;
  int8_t scale;
  j2735_v2x_msgs__msg__TrafficControlBounds__Sequence bounds;
} j2735_v2x_msgs__msg__TrafficControlRequestV01;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlRequestV01.
typedef struct j2735_v2x_msgs__msg__TrafficControlRequestV01__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlRequestV01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlRequestV01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__STRUCT_H_
