// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_HEIGHT'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__HAS_HEIGHT = 1ul
};

/// Constant 'HAS_MASS'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__HAS_MASS = 2ul
};

/// Constant 'HAS_BUMPER_HEIGHTS'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__HAS_BUMPER_HEIGHTS = 4ul
};

/// Constant 'HAS_CENTER_OF_GRAVITY'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__HAS_CENTER_OF_GRAVITY = 8ul
};

/// Constant 'HAS_REAR_PIVOT'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__HAS_REAR_PIVOT = 16ul
};

/// Constant 'HAS_REAR_WHEEL_OFFSET'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__HAS_REAR_WHEEL_OFFSET = 32ul
};

/// Constant 'HAS_ELEVATION_OFFSET'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__HAS_ELEVATION_OFFSET = 64ul
};

/// Constant 'HAS_CRUMB_DATA'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescription__HAS_CRUMB_DATA = 128ul
};

// Include directives for member types
// Member 'is_dolly'
#include "j2735_v2x_msgs/msg/detail/is_dolly__struct.h"
// Member 'width'
#include "j2735_v2x_msgs/msg/detail/vehicle_width__struct.h"
// Member 'length'
#include "j2735_v2x_msgs/msg/detail/vehicle_length__struct.h"
// Member 'height'
// Member 'center_of_gravity'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__struct.h"
// Member 'mass'
#include "j2735_v2x_msgs/msg/detail/trailer_mass__struct.h"
// Member 'bumper_heights'
#include "j2735_v2x_msgs/msg/detail/bumper_heights__struct.h"
// Member 'front_pivot'
// Member 'rear_pivot'
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__struct.h"
// Member 'rear_wheel_offset'
#include "j2735_v2x_msgs/msg/detail/offset_b12__struct.h"
// Member 'position_offset'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__struct.h"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__struct.h"
// Member 'crumb_data'
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__struct.h"

// Struct defined in msg/TrailerUnitDescription in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TrailerUnitDescription
{
  uint32_t presence_vector;
  j2735_v2x_msgs__msg__IsDolly is_dolly;
  j2735_v2x_msgs__msg__VehicleWidth width;
  j2735_v2x_msgs__msg__VehicleLength length;
  j2735_v2x_msgs__msg__VehicleHeight height;
  j2735_v2x_msgs__msg__TrailerMass mass;
  j2735_v2x_msgs__msg__BumperHeights bumper_heights;
  j2735_v2x_msgs__msg__VehicleHeight center_of_gravity;
  j2735_v2x_msgs__msg__PivotPointDescription front_pivot;
  j2735_v2x_msgs__msg__PivotPointDescription rear_pivot;
  j2735_v2x_msgs__msg__OffsetB12 rear_wheel_offset;
  j2735_v2x_msgs__msg__NodeXY24b position_offset;
  j2735_v2x_msgs__msg__VertOffsetB07 elevation_offset;
  j2735_v2x_msgs__msg__TrailerHistoryPointList crumb_data;
} j2735_v2x_msgs__msg__TrailerUnitDescription;

// Struct for a sequence of j2735_v2x_msgs__msg__TrailerUnitDescription.
typedef struct j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence
{
  j2735_v2x_msgs__msg__TrailerUnitDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__STRUCT_H_
