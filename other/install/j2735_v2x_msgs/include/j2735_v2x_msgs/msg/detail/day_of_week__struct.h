// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DayOfWeek.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUN'.
enum
{
  j2735_v2x_msgs__msg__DayOfWeek__SUN = 6
};

/// Constant 'MON'.
enum
{
  j2735_v2x_msgs__msg__DayOfWeek__MON = 5
};

/// Constant 'TUE'.
enum
{
  j2735_v2x_msgs__msg__DayOfWeek__TUE = 4
};

/// Constant 'WED'.
enum
{
  j2735_v2x_msgs__msg__DayOfWeek__WED = 3
};

/// Constant 'THU'.
enum
{
  j2735_v2x_msgs__msg__DayOfWeek__THU = 2
};

/// Constant 'FRI'.
enum
{
  j2735_v2x_msgs__msg__DayOfWeek__FRI = 1
};

/// Constant 'SAT'.
enum
{
  j2735_v2x_msgs__msg__DayOfWeek__SAT = 0
};

// Struct defined in msg/DayOfWeek in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__DayOfWeek
{
  uint8_t dow[7];
} j2735_v2x_msgs__msg__DayOfWeek;

// Struct for a sequence of j2735_v2x_msgs__msg__DayOfWeek.
typedef struct j2735_v2x_msgs__msg__DayOfWeek__Sequence
{
  j2735_v2x_msgs__msg__DayOfWeek * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DayOfWeek__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__STRUCT_H_
