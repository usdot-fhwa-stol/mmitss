// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'connecting_lane'
#include "j2735_v2x_msgs/msg/detail/connecting_lane__struct.h"
// Member 'remote_intersection'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.h"

// Struct defined in msg/Connection in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__Connection
{
  j2735_v2x_msgs__msg__ConnectingLane connecting_lane;
  j2735_v2x_msgs__msg__IntersectionReferenceID remote_intersection;
  bool remote_intersection_exists;
  uint8_t signal_group;
  bool signal_group_exists;
  uint8_t user_class;
  bool user_class_exists;
  uint8_t connection_id;
  bool connection_id_exists;
} j2735_v2x_msgs__msg__Connection;

// Struct for a sequence of j2735_v2x_msgs__msg__Connection.
typedef struct j2735_v2x_msgs__msg__Connection__Sequence
{
  j2735_v2x_msgs__msg__Connection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Connection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
