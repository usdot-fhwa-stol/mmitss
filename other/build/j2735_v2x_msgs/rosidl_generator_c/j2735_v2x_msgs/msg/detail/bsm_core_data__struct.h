// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MSG_COUNT_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__MSG_COUNT_MAX = 127
};

/// Constant 'ID_TIME_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__ID_TIME_MAX = 3000
};

/// Constant 'SEC_MARK_MOD'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SEC_MARK_MOD = 60000
};

/// Constant 'SEC_MARK_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SEC_MARK_UNAVAILABLE = 65535
};

/// Constant 'LONGITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LONGITUDE_UNAVAILABLE = 1800000001l
};

/// Constant 'LONGITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LONGITUDE_MAX = 1800000000l
};

/// Constant 'LONGITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LONGITUDE_MIN = -1799999999l
};

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LATITUDE_UNAVAILABLE = 900000001l
};

/// Constant 'LATITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LATITUDE_MAX = 900000000l
};

/// Constant 'LATITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__LATITUDE_MIN = -900000000l
};

/// Constant 'ELEVATION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__ELEVATION_UNAVAILABLE = -4096l
};

/// Constant 'ELEVATION_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__ELEVATION_MAX = 61439l
};

/// Constant 'ELEVATION_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__ELEVATION_MIN = -4095l
};

/// Constant 'SPEED_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SPEED_UNAVAILABLE = 8191
};

/// Constant 'SPEED_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SPEED_MAX = 8190
};

/// Constant 'SPEED_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__SPEED_MIN = 0
};

/// Constant 'HEADING_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__HEADING_UNAVAILABLE = 28800
};

/// Constant 'HEADING_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__HEADING_MAX = 28798
};

/// Constant 'HEADING_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__HEADING_MIN = 0
};

/// Constant 'STEER_WHEEL_ANGLE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__STEER_WHEEL_ANGLE_UNAVAILABLE = 127
};

/// Constant 'STEER_WHEEL_ANGLE_MAX'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__STEER_WHEEL_ANGLE_MAX = 126
};

/// Constant 'STEER_WHEEL_ANGLE_MIN'.
enum
{
  j2735_v2x_msgs__msg__BSMCoreData__STEER_WHEEL_ANGLE_MIN = -126
};

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.h"
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__struct.h"
// Member 'accel_set'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__struct.h"
// Member 'brakes'
#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.h"
// Member 'size'
#include "j2735_v2x_msgs/msg/detail/vehicle_size__struct.h"

// Struct defined in msg/BSMCoreData in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__BSMCoreData
{
  uint8_t msg_count;
  rosidl_runtime_c__uint8__Sequence id;
  uint16_t sec_mark;
  int32_t longitude;
  int32_t latitude;
  int32_t elev;
  j2735_v2x_msgs__msg__PositionalAccuracy accuracy;
  j2735_v2x_msgs__msg__TransmissionState transmission;
  uint16_t speed;
  uint16_t heading;
  int8_t angle;
  j2735_v2x_msgs__msg__AccelerationSet4Way accel_set;
  j2735_v2x_msgs__msg__BrakeSystemStatus brakes;
  j2735_v2x_msgs__msg__VehicleSize size;
} j2735_v2x_msgs__msg__BSMCoreData;

// Struct for a sequence of j2735_v2x_msgs__msg__BSMCoreData.
typedef struct j2735_v2x_msgs__msg__BSMCoreData__Sequence
{
  j2735_v2x_msgs__msg__BSMCoreData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BSMCoreData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_
