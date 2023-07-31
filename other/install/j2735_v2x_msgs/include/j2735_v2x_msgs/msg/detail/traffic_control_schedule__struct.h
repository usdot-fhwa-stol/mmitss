// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dow'
#include "j2735_v2x_msgs/msg/detail/day_of_week__struct.h"
// Member 'between'
#include "j2735_v2x_msgs/msg/detail/daily_schedule__struct.h"
// Member 'repeat'
#include "j2735_v2x_msgs/msg/detail/repeat_params__struct.h"

// Struct defined in msg/TrafficControlSchedule in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TrafficControlSchedule
{
  uint64_t start;
  uint64_t end;
  bool end_exists;
  j2735_v2x_msgs__msg__DayOfWeek dow;
  bool dow_exists;
  j2735_v2x_msgs__msg__DailySchedule__Sequence between;
  bool between_exists;
  j2735_v2x_msgs__msg__RepeatParams repeat;
  bool repeat_exists;
} j2735_v2x_msgs__msg__TrafficControlSchedule;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlSchedule.
typedef struct j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlSchedule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__STRUCT_H_
