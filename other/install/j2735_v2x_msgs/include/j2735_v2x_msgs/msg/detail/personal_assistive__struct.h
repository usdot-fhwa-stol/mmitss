// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PersonalAssistive.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_ASSISTIVE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_ASSISTIVE__STRUCT_H_

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
  j2735_v2x_msgs__msg__PersonalAssistive__UNAVAILABLE = 0
};

/// Constant 'OTHER_TYPE'.
enum
{
  j2735_v2x_msgs__msg__PersonalAssistive__OTHER_TYPE = 1
};

/// Constant 'VISION'.
enum
{
  j2735_v2x_msgs__msg__PersonalAssistive__VISION = 2
};

/// Constant 'HEARING'.
enum
{
  j2735_v2x_msgs__msg__PersonalAssistive__HEARING = 4
};

/// Constant 'MOVEMENT'.
enum
{
  j2735_v2x_msgs__msg__PersonalAssistive__MOVEMENT = 8
};

/// Constant 'COGNITION'.
enum
{
  j2735_v2x_msgs__msg__PersonalAssistive__COGNITION = 16
};

// Struct defined in msg/PersonalAssistive in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PersonalAssistive
{
  uint8_t types;
} j2735_v2x_msgs__msg__PersonalAssistive;

// Struct for a sequence of j2735_v2x_msgs__msg__PersonalAssistive.
typedef struct j2735_v2x_msgs__msg__PersonalAssistive__Sequence
{
  j2735_v2x_msgs__msg__PersonalAssistive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PersonalAssistive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_ASSISTIVE__STRUCT_H_
