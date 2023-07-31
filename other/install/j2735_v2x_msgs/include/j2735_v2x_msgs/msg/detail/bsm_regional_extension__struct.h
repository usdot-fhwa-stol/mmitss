// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BSMRegionalExtension.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROUTE_DESTINATIONS'.
enum
{
  j2735_v2x_msgs__msg__BSMRegionalExtension__ROUTE_DESTINATIONS = 1
};

// Include directives for member types
// Member 'route_destination_points'
#include "j2735_v2x_msgs/msg/detail/position3_d__struct.h"

// Struct defined in msg/BSMRegionalExtension in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__BSMRegionalExtension
{
  uint16_t regional_extension_id;
  j2735_v2x_msgs__msg__Position3D__Sequence route_destination_points;
} j2735_v2x_msgs__msg__BSMRegionalExtension;

// Struct for a sequence of j2735_v2x_msgs__msg__BSMRegionalExtension.
typedef struct j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence
{
  j2735_v2x_msgs__msg__BSMRegionalExtension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__STRUCT_H_
