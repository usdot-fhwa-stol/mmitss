// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/RTCMHeader.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/gnss_status__struct.h"
// Member 'ant_offset_x'
#include "carma_v2x_msgs/msg/detail/offset_b12__struct.h"
// Member 'ant_offset_y'
#include "carma_v2x_msgs/msg/detail/offset_b09__struct.h"
// Member 'ant_offset_z'
#include "carma_v2x_msgs/msg/detail/offset_b10__struct.h"

// Struct defined in msg/RTCMHeader in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__RTCMHeader
{
  j2735_v2x_msgs__msg__GNSSStatus status;
  carma_v2x_msgs__msg__OffsetB12 ant_offset_x;
  carma_v2x_msgs__msg__OffsetB09 ant_offset_y;
  carma_v2x_msgs__msg__OffsetB10 ant_offset_z;
} carma_v2x_msgs__msg__RTCMHeader;

// Struct for a sequence of carma_v2x_msgs__msg__RTCMHeader.
typedef struct carma_v2x_msgs__msg__RTCMHeader__Sequence
{
  carma_v2x_msgs__msg__RTCMHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__RTCMHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__STRUCT_H_
