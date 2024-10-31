// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SpecialVehicleExtensions.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_VEHICLE_ALERTS'.
enum
{
  j2735_v2x_msgs__msg__SpecialVehicleExtensions__HAS_VEHICLE_ALERTS = 1
};

/// Constant 'HAS_DESCRIPTION'.
enum
{
  j2735_v2x_msgs__msg__SpecialVehicleExtensions__HAS_DESCRIPTION = 2
};

/// Constant 'HAS_TRAILERS'.
enum
{
  j2735_v2x_msgs__msg__SpecialVehicleExtensions__HAS_TRAILERS = 4
};

// Include directives for member types
// Member 'vehicle_alerts'
#include "j2735_v2x_msgs/msg/detail/emergency_details__struct.h"
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/event_description__struct.h"
// Member 'trailers'
#include "j2735_v2x_msgs/msg/detail/trailer_data__struct.h"

// Struct defined in msg/SpecialVehicleExtensions in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__SpecialVehicleExtensions
{
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__EmergencyDetails vehicle_alerts;
  j2735_v2x_msgs__msg__EventDescription description;
  j2735_v2x_msgs__msg__TrailerData trailers;
} j2735_v2x_msgs__msg__SpecialVehicleExtensions;

// Struct for a sequence of j2735_v2x_msgs__msg__SpecialVehicleExtensions.
typedef struct j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence
{
  j2735_v2x_msgs__msg__SpecialVehicleExtensions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SpecialVehicleExtensions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__STRUCT_H_
