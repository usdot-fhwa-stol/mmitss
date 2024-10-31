// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_planning_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__STRUCT_H_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_FOLLOWING'.
enum
{
  carma_planning_msgs__msg__Maneuver__LANE_FOLLOWING = 0
};

/// Constant 'LANE_CHANGE'.
enum
{
  carma_planning_msgs__msg__Maneuver__LANE_CHANGE = 1
};

/// Constant 'INTERSECTION_TRANSIT_STRAIGHT'.
enum
{
  carma_planning_msgs__msg__Maneuver__INTERSECTION_TRANSIT_STRAIGHT = 2
};

/// Constant 'INTERSECTION_TRANSIT_LEFT_TURN'.
enum
{
  carma_planning_msgs__msg__Maneuver__INTERSECTION_TRANSIT_LEFT_TURN = 3
};

/// Constant 'INTERSECTION_TRANSIT_RIGHT_TURN'.
enum
{
  carma_planning_msgs__msg__Maneuver__INTERSECTION_TRANSIT_RIGHT_TURN = 4
};

/// Constant 'STOP_AND_WAIT'.
enum
{
  carma_planning_msgs__msg__Maneuver__STOP_AND_WAIT = 5
};

// Include directives for member types
// Member 'lane_following_maneuver'
#include "carma_planning_msgs/msg/detail/lane_following_maneuver__struct.h"
// Member 'lane_change_maneuver'
#include "carma_planning_msgs/msg/detail/lane_change_maneuver__struct.h"
// Member 'intersection_transit_straight_maneuver'
#include "carma_planning_msgs/msg/detail/intersection_transit_straight_maneuver__struct.h"
// Member 'intersection_transit_left_turn_maneuver'
#include "carma_planning_msgs/msg/detail/intersection_transit_left_turn_maneuver__struct.h"
// Member 'intersection_transit_right_turn_maneuver'
#include "carma_planning_msgs/msg/detail/intersection_transit_right_turn_maneuver__struct.h"
// Member 'stop_and_wait_maneuver'
#include "carma_planning_msgs/msg/detail/stop_and_wait_maneuver__struct.h"

// Struct defined in msg/Maneuver in the package carma_planning_msgs.
typedef struct carma_planning_msgs__msg__Maneuver
{
  uint8_t type;
  carma_planning_msgs__msg__LaneFollowingManeuver lane_following_maneuver;
  carma_planning_msgs__msg__LaneChangeManeuver lane_change_maneuver;
  carma_planning_msgs__msg__IntersectionTransitStraightManeuver intersection_transit_straight_maneuver;
  carma_planning_msgs__msg__IntersectionTransitLeftTurnManeuver intersection_transit_left_turn_maneuver;
  carma_planning_msgs__msg__IntersectionTransitRightTurnManeuver intersection_transit_right_turn_maneuver;
  carma_planning_msgs__msg__StopAndWaitManeuver stop_and_wait_maneuver;
} carma_planning_msgs__msg__Maneuver;

// Struct for a sequence of carma_planning_msgs__msg__Maneuver.
typedef struct carma_planning_msgs__msg__Maneuver__Sequence
{
  carma_planning_msgs__msg__Maneuver * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_planning_msgs__msg__Maneuver__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__STRUCT_H_
