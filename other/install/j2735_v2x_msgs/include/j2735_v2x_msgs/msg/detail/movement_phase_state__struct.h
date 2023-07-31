// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MovementPhaseState.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__STRUCT_H_

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
  j2735_v2x_msgs__msg__MovementPhaseState__UNAVAILABLE = 0
};

/// Constant 'DARK'.
enum
{
  j2735_v2x_msgs__msg__MovementPhaseState__DARK = 1
};

/// Constant 'STOP_THEN_PROCEED'.
enum
{
  j2735_v2x_msgs__msg__MovementPhaseState__STOP_THEN_PROCEED = 2
};

/// Constant 'STOP_AND_REMAIN'.
enum
{
  j2735_v2x_msgs__msg__MovementPhaseState__STOP_AND_REMAIN = 3
};

/// Constant 'PRE_MOVEMENT'.
enum
{
  j2735_v2x_msgs__msg__MovementPhaseState__PRE_MOVEMENT = 4
};

/// Constant 'PERMISSIVE_MOVEMENT_ALLOWED'.
enum
{
  j2735_v2x_msgs__msg__MovementPhaseState__PERMISSIVE_MOVEMENT_ALLOWED = 5
};

/// Constant 'PROTECTED_MOVEMENT_ALLOWED'.
enum
{
  j2735_v2x_msgs__msg__MovementPhaseState__PROTECTED_MOVEMENT_ALLOWED = 6
};

/// Constant 'PERMISSIVE_CLEARANCE'.
enum
{
  j2735_v2x_msgs__msg__MovementPhaseState__PERMISSIVE_CLEARANCE = 7
};

/// Constant 'PROTECTED_CLEARANCE'.
enum
{
  j2735_v2x_msgs__msg__MovementPhaseState__PROTECTED_CLEARANCE = 8
};

/// Constant 'CAUTION_CONFLICTING_TRAFFIC'.
enum
{
  j2735_v2x_msgs__msg__MovementPhaseState__CAUTION_CONFLICTING_TRAFFIC = 9
};

// Struct defined in msg/MovementPhaseState in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__MovementPhaseState
{
  uint8_t movement_phase_state;
} j2735_v2x_msgs__msg__MovementPhaseState;

// Struct for a sequence of j2735_v2x_msgs__msg__MovementPhaseState.
typedef struct j2735_v2x_msgs__msg__MovementPhaseState__Sequence
{
  j2735_v2x_msgs__msg__MovementPhaseState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MovementPhaseState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__STRUCT_H_
