// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_LOCATION_DETAILS'.
enum
{
  j2735_v2x_msgs__msg__DisabledVehicle__HAS_LOCATION_DETAILS = 1
};

/// Constant 'STATUS_DETAILS_MIN'.
enum
{
  j2735_v2x_msgs__msg__DisabledVehicle__STATUS_DETAILS_MIN = 532
};

/// Constant 'STATUS_DETAILS_MAX'.
enum
{
  j2735_v2x_msgs__msg__DisabledVehicle__STATUS_DETAILS_MAX = 541
};

// Include directives for member types
// Member 'status_details'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__struct.h"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__struct.h"

// Struct defined in msg/DisabledVehicle in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__DisabledVehicle
{
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__ITIScodes status_details;
  j2735_v2x_msgs__msg__ITISGenericLocations location_details;
} j2735_v2x_msgs__msg__DisabledVehicle;

// Struct for a sequence of j2735_v2x_msgs__msg__DisabledVehicle.
typedef struct j2735_v2x_msgs__msg__DisabledVehicle__Sequence
{
  j2735_v2x_msgs__msg__DisabledVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DisabledVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__STRUCT_H_
