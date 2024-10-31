// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/UserSizeAndBehaviour.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__USER_SIZE_AND_BEHAVIOUR__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__USER_SIZE_AND_BEHAVIOUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__UserSizeAndBehaviour__UNAVAILABLE = 0
};

/// Constant 'SMALL_STATURE'.
enum
{
  j2735_v2x_msgs__msg__UserSizeAndBehaviour__SMALL_STATURE = 1
};

/// Constant 'LARGE_STATURE'.
enum
{
  j2735_v2x_msgs__msg__UserSizeAndBehaviour__LARGE_STATURE = 2
};

/// Constant 'ERRATIC_MOVING'.
enum
{
  j2735_v2x_msgs__msg__UserSizeAndBehaviour__ERRATIC_MOVING = 4
};

/// Constant 'SLOW_MOVING'.
enum
{
  j2735_v2x_msgs__msg__UserSizeAndBehaviour__SLOW_MOVING = 8
};

// Struct defined in msg/UserSizeAndBehaviour in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__UserSizeAndBehaviour
{
  uint8_t sizes_and_behaviors;
} j2735_v2x_msgs__msg__UserSizeAndBehaviour;

// Struct for a sequence of j2735_v2x_msgs__msg__UserSizeAndBehaviour.
typedef struct j2735_v2x_msgs__msg__UserSizeAndBehaviour__Sequence
{
  j2735_v2x_msgs__msg__UserSizeAndBehaviour * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__UserSizeAndBehaviour__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__USER_SIZE_AND_BEHAVIOUR__STRUCT_H_
