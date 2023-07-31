// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_H_

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
  j2735_v2x_msgs__msg__TrafficControlDetail__SIGNAL_CHOICE = 0
};

/// Constant 'STOP_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__STOP_CHOICE = 1
};

/// Constant 'YIELD_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__YIELD_CHOICE = 2
};

/// Constant 'NOTOWING_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__NOTOWING_CHOICE = 3
};

/// Constant 'RESTRICTED_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__RESTRICTED_CHOICE = 4
};

/// Constant 'CLOSED_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__CLOSED_CHOICE = 5
};

/// Constant 'CHAINS_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__CHAINS_CHOICE = 6
};

/// Constant 'DIRECTION_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__DIRECTION_CHOICE = 7
};

/// Constant 'LATAFFINITY_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__LATAFFINITY_CHOICE = 8
};

/// Constant 'LATPERM_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__LATPERM_CHOICE = 9
};

/// Constant 'PARKING_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__PARKING_CHOICE = 10
};

/// Constant 'MINSPEED_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MINSPEED_CHOICE = 11
};

/// Constant 'MAXSPEED_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXSPEED_CHOICE = 12
};

/// Constant 'MINHDWY_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MINHDWY_CHOICE = 13
};

/// Constant 'MAXVEHMASS_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHMASS_CHOICE = 14
};

/// Constant 'MAXVEHHEIGHT_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHHEIGHT_CHOICE = 15
};

/// Constant 'MAXVEHWIDTH_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHWIDTH_CHOICE = 16
};

/// Constant 'MAXVEHLENGTH_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHLENGTH_CHOICE = 17
};

/// Constant 'MAXVEHAXLES_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXVEHAXLES_CHOICE = 18
};

/// Constant 'MINVEHOCC_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MINVEHOCC_CHOICE = 19
};

/// Constant 'MAXPLATOONSIZE_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MAXPLATOONSIZE_CHOICE = 20
};

/// Constant 'MINPLATOONHDWY_CHOICE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__MINPLATOONHDWY_CHOICE = 21
};

/// Constant 'OPEN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__OPEN = 0
};

/// Constant 'CLOSED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__CLOSED = 1
};

/// Constant 'TAPERLEFT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__TAPERLEFT = 2
};

/// Constant 'TAPERRIGHT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__TAPERRIGHT = 3
};

/// Constant 'OPENLEFT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__OPENLEFT = 4
};

/// Constant 'OPENRIGHT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__OPENRIGHT = 5
};

/// Constant 'NO'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__NO = 0
};

/// Constant 'PERMITTED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__PERMITTED = 1
};

/// Constant 'REQUIRED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__REQUIRED = 2
};

/// Constant 'FORWARD'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__FORWARD = 0
};

/// Constant 'REVERSE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__REVERSE = 1
};

/// Constant 'LEFT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__LEFT = 0
};

/// Constant 'RIGHT'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__RIGHT = 1
};

/// Constant 'NONE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__NONE = 0
};

/// Constant 'PASSINGONLY'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__PASSINGONLY = 2
};

/// Constant 'EMERGENCYONLY'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__EMERGENCYONLY = 3
};

/// Constant 'PARALLEL'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__PARALLEL = 1
};

/// Constant 'ANGLED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlDetail__ANGLED = 2
};

// Include directives for member types
// Member 'signal'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/TrafficControlDetail in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TrafficControlDetail
{
  uint8_t choice;
  rosidl_runtime_c__uint8__Sequence signal;
  uint8_t closed;
  uint8_t chains;
  uint8_t direction;
  uint8_t lataffinity;
  uint8_t latperm[2];
  uint8_t parking;
  uint16_t minspeed;
  uint16_t maxspeed;
  uint16_t minhdwy;
  uint16_t maxvehmass;
  uint8_t maxvehheight;
  uint8_t maxvehwidth;
  uint16_t maxvehlength;
  uint8_t maxvehaxles;
  uint8_t minvehocc;
  uint8_t maxplatoonsize;
  uint16_t minplatoonhdwy;
} j2735_v2x_msgs__msg__TrafficControlDetail;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlDetail.
typedef struct j2735_v2x_msgs__msg__TrafficControlDetail__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlDetail * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlDetail__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_H_
