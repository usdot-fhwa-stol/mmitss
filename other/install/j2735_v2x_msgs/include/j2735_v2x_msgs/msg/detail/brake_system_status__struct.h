// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wheel_brakes'
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__struct.h"
// Member 'traction'
#include "j2735_v2x_msgs/msg/detail/traction_control_status__struct.h"
// Member 'abs'
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__struct.h"
// Member 'scs'
#include "j2735_v2x_msgs/msg/detail/stability_control_status__struct.h"
// Member 'brake_boost'
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__struct.h"
// Member 'aux_brakes'
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__struct.h"

// Struct defined in msg/BrakeSystemStatus in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__BrakeSystemStatus
{
  j2735_v2x_msgs__msg__BrakeAppliedStatus wheel_brakes;
  j2735_v2x_msgs__msg__TractionControlStatus traction;
  j2735_v2x_msgs__msg__AntiLockBrakeStatus abs;
  j2735_v2x_msgs__msg__StabilityControlStatus scs;
  j2735_v2x_msgs__msg__BrakeBoostApplied brake_boost;
  j2735_v2x_msgs__msg__AuxiliaryBrakeStatus aux_brakes;
} j2735_v2x_msgs__msg__BrakeSystemStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__BrakeSystemStatus.
typedef struct j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence
{
  j2735_v2x_msgs__msg__BrakeSystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_H_
