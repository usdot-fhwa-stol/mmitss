// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleState in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__VehicleState
{
  double x_pos_global;
  double y_pos_global;
  double orientation;
  double longitudinal_vel;
  double lateral_vel;
  double yaw_rate;
  double front_wheel_rotation_rate;
  double rear_wheel_rotation_rate;
  double steering_angle;
  double trailer_angle;
  double prev_vel_cmd;
  double prev_steering_cmd;
} carma_planning_msgs__msg__VehicleState;

// Struct for a sequence of carma_planning_msgs__msg__VehicleState.
typedef struct carma_planning_msgs__msg__VehicleState__Sequence
{
  carma_planning_msgs__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
