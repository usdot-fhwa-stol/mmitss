// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/RepeatParams.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'offset'
// Member 'period'
// Member 'span'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/RepeatParams in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__RepeatParams
{
  builtin_interfaces__msg__Duration offset;
  builtin_interfaces__msg__Duration period;
  builtin_interfaces__msg__Duration span;
} carma_v2x_msgs__msg__RepeatParams;

// Struct for a sequence of carma_v2x_msgs__msg__RepeatParams.
typedef struct carma_v2x_msgs__msg__RepeatParams__Sequence
{
  carma_v2x_msgs__msg__RepeatParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__RepeatParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_H_
