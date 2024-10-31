// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/RTCMPackage.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_RTCM_HEADER'.
enum
{
  carma_v2x_msgs__msg__RTCMPackage__HAS_RTCM_HEADER = 1
};

// Include directives for member types
// Member 'rtcm_header'
#include "carma_v2x_msgs/msg/detail/rtcm_header__struct.h"
// Member 'messages'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/RTCMPackage in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__RTCMPackage
{
  uint16_t presence_vector;
  carma_v2x_msgs__msg__RTCMHeader rtcm_header;
  rosidl_runtime_c__uint8__Sequence messages;
} carma_v2x_msgs__msg__RTCMPackage;

// Struct for a sequence of carma_v2x_msgs__msg__RTCMPackage.
typedef struct carma_v2x_msgs__msg__RTCMPackage__Sequence
{
  carma_v2x_msgs__msg__RTCMPackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__RTCMPackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__RTCM_PACKAGE__STRUCT_H_
