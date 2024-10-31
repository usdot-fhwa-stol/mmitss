// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'event'
#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__struct.h"

// Struct defined in msg/PrivilegedEvents in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PrivilegedEvents
{
  uint8_t ssp_index;
  j2735_v2x_msgs__msg__PrivilegedEventFlags event;
} j2735_v2x_msgs__msg__PrivilegedEvents;

// Struct for a sequence of j2735_v2x_msgs__msg__PrivilegedEvents.
typedef struct j2735_v2x_msgs__msg__PrivilegedEvents__Sequence
{
  j2735_v2x_msgs__msg__PrivilegedEvents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PrivilegedEvents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__STRUCT_H_
