// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from can_msgs:msg/CanState.idl
// generated code does not contain a copyright notice

#ifndef CAN_MSGS__MSG__DETAIL__CAN_STATE__STRUCT_H_
#define CAN_MSGS__MSG__DETAIL__CAN_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLOSED'.
enum
{
  can_msgs__msg__CanState__CLOSED = 0
};

/// Constant 'OPEN'.
enum
{
  can_msgs__msg__CanState__OPEN = 1
};

/// Constant 'READY'.
enum
{
  can_msgs__msg__CanState__READY = 2
};

// Struct defined in msg/CanState in the package can_msgs.
typedef struct can_msgs__msg__CanState
{
  uint8_t driver_state;
} can_msgs__msg__CanState;

// Struct for a sequence of can_msgs__msg__CanState.
typedef struct can_msgs__msg__CanState__Sequence
{
  can_msgs__msg__CanState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} can_msgs__msg__CanState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAN_MSGS__MSG__DETAIL__CAN_STATE__STRUCT_H_
