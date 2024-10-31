// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SIGNAL_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__SIGNAL_CHOICE = 0
};

/// Constant 'STOP_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__STOP_CHOICE = 1
};

/// Constant 'YIELD_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__YIELD_CHOICE = 2
};

/// Constant 'NOTOWING_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__NOTOWING_CHOICE = 3
};

/// Constant 'RESTRICTED_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__RESTRICTED_CHOICE = 4
};

/// Constant 'CLOSED_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__CLOSED_CHOICE = 5
};

/// Constant 'CHAINS_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__CHAINS_CHOICE = 6
};

/// Constant 'DIRECTION_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__DIRECTION_CHOICE = 7
};

/// Constant 'LATAFFINITY_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__LATAFFINITY_CHOICE = 8
};

/// Constant 'LATPERM_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__LATPERM_CHOICE = 9
};

/// Constant 'PARKING_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__PARKING_CHOICE = 10
};

/// Constant 'MINSPEED_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MINSPEED_CHOICE = 11
};

/// Constant 'MAXSPEED_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MAXSPEED_CHOICE = 12
};

/// Constant 'MINHDWY_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MINHDWY_CHOICE = 13
};

/// Constant 'MAXVEHMASS_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MAXVEHMASS_CHOICE = 14
};

/// Constant 'MAXVEHHEIGHT_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MAXVEHHEIGHT_CHOICE = 15
};

/// Constant 'MAXVEHWIDTH_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MAXVEHWIDTH_CHOICE = 16
};

/// Constant 'MAXVEHLENGTH_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MAXVEHLENGTH_CHOICE = 17
};

/// Constant 'MAXVEHAXLES_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MAXVEHAXLES_CHOICE = 18
};

/// Constant 'MINVEHOCC_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MINVEHOCC_CHOICE = 19
};

/// Constant 'MAXPLATOONSIZE_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MAXPLATOONSIZE_CHOICE = 20
};

/// Constant 'MINPLATOONHDWY_CHOICE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__MINPLATOONHDWY_CHOICE = 21
};

/// Constant 'OPEN'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__OPEN = 0
};

/// Constant 'CLOSED'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__CLOSED = 1
};

/// Constant 'TAPERLEFT'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__TAPERLEFT = 2
};

/// Constant 'TAPERRIGHT'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__TAPERRIGHT = 3
};

/// Constant 'OPENLEFT'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__OPENLEFT = 4
};

/// Constant 'OPENRIGHT'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__OPENRIGHT = 5
};

/// Constant 'NO'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__NO = 0
};

/// Constant 'PERMITTED'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__PERMITTED = 1
};

/// Constant 'REQUIRED'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__REQUIRED = 2
};

/// Constant 'FORWARD'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__FORWARD = 0
};

/// Constant 'REVERSE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__REVERSE = 1
};

/// Constant 'LEFT'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__LEFT = 0
};

/// Constant 'RIGHT'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__RIGHT = 1
};

/// Constant 'NONE'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__NONE = 0
};

/// Constant 'PASSINGONLY'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__PASSINGONLY = 2
};

/// Constant 'EMERGENCYONLY'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__EMERGENCYONLY = 3
};

/// Constant 'PARALLEL'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__PARALLEL = 1
};

/// Constant 'ANGLED'.
enum
{
  carma_v2x_msgs__msg__TrafficControlDetail__ANGLED = 2
};

// Include directives for member types
// Member 'signal'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/TrafficControlDetail in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__TrafficControlDetail
{
  uint8_t choice;
  rosidl_runtime_c__uint8__Sequence signal;
  uint8_t closed;
  uint8_t chains;
  uint8_t direction;
  uint8_t lataffinity;
  uint8_t latperm[2];
  uint8_t parking;
  double minspeed;
  double maxspeed;
  double minhdwy;
  double maxvehmass;
  double maxvehheight;
  double maxvehwidth;
  double maxvehlength;
  uint8_t maxvehaxles;
  uint8_t minvehocc;
  uint8_t maxplatoonsize;
  double minplatoonhdwy;
} carma_v2x_msgs__msg__TrafficControlDetail;

// Struct for a sequence of carma_v2x_msgs__msg__TrafficControlDetail.
typedef struct carma_v2x_msgs__msg__TrafficControlDetail__Sequence
{
  carma_v2x_msgs__msg__TrafficControlDetail * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__TrafficControlDetail__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_H_
