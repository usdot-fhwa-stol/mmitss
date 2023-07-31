// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/GuidanceState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__GUIDANCE_STATE__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__GUIDANCE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STARTUP'.
enum
{
  carma_planning_msgs__msg__GuidanceState__STARTUP = 1
};

/// Constant 'DRIVERS_READY'.
enum
{
  carma_planning_msgs__msg__GuidanceState__DRIVERS_READY = 2
};

/// Constant 'ACTIVE'.
enum
{
  carma_planning_msgs__msg__GuidanceState__ACTIVE = 3
};

/// Constant 'ENGAGED'.
enum
{
  carma_planning_msgs__msg__GuidanceState__ENGAGED = 4
};

/// Constant 'INACTIVE'.
enum
{
  carma_planning_msgs__msg__GuidanceState__INACTIVE = 5
};

/// Constant 'ENTER_PARK'.
enum
{
  carma_planning_msgs__msg__GuidanceState__ENTER_PARK = 6
};

/// Constant 'SHUTDOWN'.
enum
{
  carma_planning_msgs__msg__GuidanceState__SHUTDOWN = 0
};

// Struct defined in msg/GuidanceState in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__GuidanceState
{
  uint8_t state;
} carma_planning_msgs__msg__GuidanceState;

// Struct for a sequence of carma_planning_msgs__msg__GuidanceState.
typedef struct carma_planning_msgs__msg__GuidanceState__Sequence
{
  carma_planning_msgs__msg__GuidanceState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__GuidanceState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__GUIDANCE_STATE__STRUCT_H_
