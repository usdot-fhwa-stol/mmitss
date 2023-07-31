// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/RegionalExtension.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__REGIONAL_EXTENSION__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__REGIONAL_EXTENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RegionalExtension in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__RegionalExtension
{
  uint8_t structure_needs_at_least_one_member;
} carma_v2x_msgs__msg__RegionalExtension;

// Struct for a sequence of carma_v2x_msgs__msg__RegionalExtension.
typedef struct carma_v2x_msgs__msg__RegionalExtension__Sequence
{
  carma_v2x_msgs__msg__RegionalExtension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__RegionalExtension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__REGIONAL_EXTENSION__STRUCT_H_
