// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__STRUCT_H_

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
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/id128b__struct.h"
// Member 'package'
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__struct.h"
// Member 'params'
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__struct.h"
// Member 'geometry'
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__struct.h"

// Struct defined in msg/TrafficControlMessageV01 in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TrafficControlMessageV01
{
  j2735_v2x_msgs__msg__Id64b reqid;
  uint8_t reqseq;
  uint16_t msgtot;
  uint16_t msgnum;
  j2735_v2x_msgs__msg__Id128b id;
  uint64_t updated;
  j2735_v2x_msgs__msg__TrafficControlPackage package;
  bool package_exists;
  j2735_v2x_msgs__msg__TrafficControlParams params;
  bool params_exists;
  j2735_v2x_msgs__msg__TrafficControlGeometry geometry;
  bool geometry_exists;
} j2735_v2x_msgs__msg__TrafficControlMessageV01;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlMessageV01.
typedef struct j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlMessageV01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__STRUCT_H_
