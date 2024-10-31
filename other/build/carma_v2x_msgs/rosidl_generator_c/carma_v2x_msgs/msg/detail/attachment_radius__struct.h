// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/AttachmentRadius.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ATTACHMENT_RADIUS_MIN'.
static const float carma_v2x_msgs__msg__AttachmentRadius__ATTACHMENT_RADIUS_MIN = 0.0f;

/// Constant 'ATTACHMENT_RADIUS_MAX'.
static const float carma_v2x_msgs__msg__AttachmentRadius__ATTACHMENT_RADIUS_MAX = 20.0f;

// Struct defined in msg/AttachmentRadius in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__AttachmentRadius
{
  float attachment_radius;
} carma_v2x_msgs__msg__AttachmentRadius;

// Struct for a sequence of carma_v2x_msgs__msg__AttachmentRadius.
typedef struct carma_v2x_msgs__msg__AttachmentRadius__Sequence
{
  carma_v2x_msgs__msg__AttachmentRadius * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__AttachmentRadius__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__STRUCT_H_
