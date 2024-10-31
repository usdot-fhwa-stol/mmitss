// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RestrictionUserType.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BASIC_TYPE'.
enum
{
  j2735_v2x_msgs__msg__RestrictionUserType__BASIC_TYPE = 0
};

/// Constant 'REGIONAL'.
enum
{
  j2735_v2x_msgs__msg__RestrictionUserType__REGIONAL = 1
};

// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/restriction_applies_to__struct.h"

// Struct defined in msg/RestrictionUserType in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__RestrictionUserType
{
  uint8_t choice;
  j2735_v2x_msgs__msg__RestrictionAppliesTo basic_type;
} j2735_v2x_msgs__msg__RestrictionUserType;

// Struct for a sequence of j2735_v2x_msgs__msg__RestrictionUserType.
typedef struct j2735_v2x_msgs__msg__RestrictionUserType__Sequence
{
  j2735_v2x_msgs__msg__RestrictionUserType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RestrictionUserType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__STRUCT_H_
