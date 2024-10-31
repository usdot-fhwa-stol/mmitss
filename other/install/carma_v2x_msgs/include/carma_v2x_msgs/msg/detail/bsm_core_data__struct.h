// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_

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
  carma_v2x_msgs__msg__BSMCoreData__MSG_COUNT_MAX = 127
};

/// Constant 'ID_TIME_MAX'.
enum
{
  carma_v2x_msgs__msg__BSMCoreData__ID_TIME_MAX = 3000
};

/// Constant 'SEC_MARK_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__BSMCoreData__SEC_MARK_AVAILABLE = 1
};

/// Constant 'LATITUDE_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__BSMCoreData__LATITUDE_AVAILABLE = 2
};

/// Constant 'LONGITUDE_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__BSMCoreData__LONGITUDE_AVAILABLE = 4
};

/// Constant 'ELEVATION_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__BSMCoreData__ELEVATION_AVAILABLE = 8
};

/// Constant 'SPEED_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__BSMCoreData__SPEED_AVAILABLE = 16
};

/// Constant 'HEADING_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__BSMCoreData__HEADING_AVAILABLE = 32
};

/// Constant 'STEER_WHEEL_ANGLE_AVAILABLE'.
enum
{
  carma_v2x_msgs__msg__BSMCoreData__STEER_WHEEL_ANGLE_AVAILABLE = 64
};

/// Constant 'SEC_MARK_MOD'.
enum
{
  carma_v2x_msgs__msg__BSMCoreData__SEC_MARK_MOD = 60000
};

/// Constant 'LATITUDE_MAX'.
static const double carma_v2x_msgs__msg__BSMCoreData__LATITUDE_MAX = 90.0l;

/// Constant 'LATITUDE_MIN'.
static const double carma_v2x_msgs__msg__BSMCoreData__LATITUDE_MIN = -90.0l;

/// Constant 'LONGITUDE_MAX'.
static const double carma_v2x_msgs__msg__BSMCoreData__LONGITUDE_MAX = 180.0l;

/// Constant 'LONGITUDE_MIN'.
static const double carma_v2x_msgs__msg__BSMCoreData__LONGITUDE_MIN = -179.9999999l;

/// Constant 'ELEVATION_MAX'.
static const float carma_v2x_msgs__msg__BSMCoreData__ELEVATION_MAX = 6143.9f;

/// Constant 'ELEVATION_MIN'.
static const float carma_v2x_msgs__msg__BSMCoreData__ELEVATION_MIN = -409.5f;

/// Constant 'SPEED_MAX'.
static const float carma_v2x_msgs__msg__BSMCoreData__SPEED_MAX = 163.8f;

/// Constant 'SPEED_MIN'.
static const float carma_v2x_msgs__msg__BSMCoreData__SPEED_MIN = 0.0f;

/// Constant 'HEADING_MAX'.
static const float carma_v2x_msgs__msg__BSMCoreData__HEADING_MAX = 359.9875f;

/// Constant 'HEADING_MIN'.
static const float carma_v2x_msgs__msg__BSMCoreData__HEADING_MIN = 0.0f;

/// Constant 'STEER_WHEEL_ANGLE_MAX'.
static const float carma_v2x_msgs__msg__BSMCoreData__STEER_WHEEL_ANGLE_MAX = 189.0f;

/// Constant 'STEER_WHEEL_ANGLE_MIN'.
static const float carma_v2x_msgs__msg__BSMCoreData__STEER_WHEEL_ANGLE_MIN = -189.0f;

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'accuracy'
#include "carma_v2x_msgs/msg/detail/positional_accuracy__struct.h"
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__struct.h"
// Member 'accel_set'
#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__struct.h"
// Member 'brakes'
#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.h"
// Member 'size'
#include "carma_v2x_msgs/msg/detail/vehicle_size__struct.h"

// Struct defined in msg/BSMCoreData in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__BSMCoreData
{
  uint8_t msg_count;
  rosidl_runtime_c__uint8__Sequence id;
  uint16_t presence_vector;
  uint16_t sec_mark;
  double latitude;
  double longitude;
  float elev;
  carma_v2x_msgs__msg__PositionalAccuracy accuracy;
  j2735_v2x_msgs__msg__TransmissionState transmission;
  float speed;
  float heading;
  float angle;
  carma_v2x_msgs__msg__AccelerationSet4Way accel_set;
  j2735_v2x_msgs__msg__BrakeSystemStatus brakes;
  carma_v2x_msgs__msg__VehicleSize size;
} carma_v2x_msgs__msg__BSMCoreData;

// Struct for a sequence of carma_v2x_msgs__msg__BSMCoreData.
typedef struct carma_v2x_msgs__msg__BSMCoreData__Sequence
{
  carma_v2x_msgs__msg__BSMCoreData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__BSMCoreData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__STRUCT_H_
