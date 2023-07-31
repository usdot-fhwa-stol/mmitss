// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PrivilegedEventFlags.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENT_FLAGS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENT_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PrivilegedEventFlags__PE_UNAVAILABLE = 1
};

/// Constant 'PE_EMERGENCY_RESPONSE'.
enum
{
  j2735_v2x_msgs__msg__PrivilegedEventFlags__PE_EMERGENCY_RESPONSE = 2
};

/// Constant 'PE_EMERGENCY_LIGHTS_ACTIVE'.
enum
{
  j2735_v2x_msgs__msg__PrivilegedEventFlags__PE_EMERGENCY_LIGHTS_ACTIVE = 4
};

/// Constant 'PE_EMERGENCY_SOUND_ACTIVE'.
enum
{
  j2735_v2x_msgs__msg__PrivilegedEventFlags__PE_EMERGENCY_SOUND_ACTIVE = 8
};

/// Constant 'PE_NON_EMERGENCY_LIGHTS_ACTIVE'.
enum
{
  j2735_v2x_msgs__msg__PrivilegedEventFlags__PE_NON_EMERGENCY_LIGHTS_ACTIVE = 16
};

/// Constant 'PE_NON_EMERGENCY_SOUND_ACTIVE'.
enum
{
  j2735_v2x_msgs__msg__PrivilegedEventFlags__PE_NON_EMERGENCY_SOUND_ACTIVE = 32
};

// Struct defined in msg/PrivilegedEventFlags in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PrivilegedEventFlags
{
  uint16_t privileged_event_flags;
} j2735_v2x_msgs__msg__PrivilegedEventFlags;

// Struct for a sequence of j2735_v2x_msgs__msg__PrivilegedEventFlags.
typedef struct j2735_v2x_msgs__msg__PrivilegedEventFlags__Sequence
{
  j2735_v2x_msgs__msg__PrivilegedEventFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PrivilegedEventFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENT_FLAGS__STRUCT_H_
