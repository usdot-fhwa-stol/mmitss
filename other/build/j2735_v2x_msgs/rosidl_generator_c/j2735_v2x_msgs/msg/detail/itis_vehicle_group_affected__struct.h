// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ITISVehicleGroupAffected.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_VEHICLE_GROUP_AFFECTED__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_VEHICLE_GROUP_AFFECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALL_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__ALL_VEHICLES = 9217
};

/// Constant 'BICYCLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__BICYCLES = 9218
};

/// Constant 'MOTORCYCLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__MOTORCYCLES = 9219
};

/// Constant 'CARS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__CARS = 9220
};

/// Constant 'LIGHT_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__LIGHT_VEHICLES = 9221
};

/// Constant 'CARS_AND_LIGHT_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__CARS_AND_LIGHT_VEHICLES = 9222
};

/// Constant 'CARS_WITH_TRAILERS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__CARS_WITH_TRAILERS = 9223
};

/// Constant 'CARS_WITH_RECREATIONAL_TRAILERS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__CARS_WITH_RECREATIONAL_TRAILERS = 9224
};

/// Constant 'VEHICLES_WITH_TRAILERS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__VEHICLES_WITH_TRAILERS = 9225
};

/// Constant 'HEAVY_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__HEAVY_VEHICLES = 9226
};

/// Constant 'TRUCKS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TRUCKS = 9227
};

/// Constant 'BUSES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__BUSES = 9228
};

/// Constant 'ARTICULATED_BUSES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__ARTICULATED_BUSES = 9229
};

/// Constant 'SCHOOL_BUSES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__SCHOOL_BUSES = 9230
};

/// Constant 'VEHICLES_WITH_SEMI_TRAILERS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__VEHICLES_WITH_SEMI_TRAILERS = 9231
};

/// Constant 'VEHICLES_WITH_DOUBLE_TRAILERS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__VEHICLES_WITH_DOUBLE_TRAILERS = 9232
};

/// Constant 'HIGH_PROFILE_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__HIGH_PROFILE_VEHICLES = 9233
};

/// Constant 'WIDE_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__WIDE_VEHICLES = 9234
};

/// Constant 'LONG_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__LONG_VEHICLES = 9235
};

/// Constant 'HAZARDOUS_LOADS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__HAZARDOUS_LOADS = 9236
};

/// Constant 'EXCEPTIONAL_LOADS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__EXCEPTIONAL_LOADS = 9237
};

/// Constant 'ABNORMAL_LOADS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__ABNORMAL_LOADS = 9238
};

/// Constant 'CONVOYS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__CONVOYS = 9239
};

/// Constant 'MAINTENANCE_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__MAINTENANCE_VEHICLES = 9240
};

/// Constant 'DELIVERY_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__DELIVERY_VEHICLES = 9241
};

/// Constant 'VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__VEHICLES_WITH_EVEN_NUMBERED_LICENSE_PLATES = 9242
};

/// Constant 'VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__VEHICLES_WITH_ODD_NUMBERED_LICENSE_PLATES = 9243
};

/// Constant 'VEHICLES_WITH_PARKING_PERMITS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__VEHICLES_WITH_PARKING_PERMITS = 9244
};

/// Constant 'VEHICLES_WITH_CATALYTIC_CONVERTERS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__VEHICLES_WITH_CATALYTIC_CONVERTERS = 9245
};

/// Constant 'VEHICLES_WITHOUT_CATALYTIC_CONVERTERS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__VEHICLES_WITHOUT_CATALYTIC_CONVERTERS = 9246
};

/// Constant 'GAS_POWERED_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__GAS_POWERED_VEHICLES = 9248
};

/// Constant 'LPG_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__LPG_VEHICLES = 9249
};

/// Constant 'MILITARY_CONVOYS'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__MILITARY_CONVOYS = 9250
};

/// Constant 'MILITARY_VEHICLES'.
enum
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__MILITARY_VEHICLES = 9251
};

// Struct defined in msg/ITISVehicleGroupAffected in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__ITISVehicleGroupAffected
{
  uint16_t vehicle_group_affected;
} j2735_v2x_msgs__msg__ITISVehicleGroupAffected;

// Struct for a sequence of j2735_v2x_msgs__msg__ITISVehicleGroupAffected.
typedef struct j2735_v2x_msgs__msg__ITISVehicleGroupAffected__Sequence
{
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ITISVehicleGroupAffected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_VEHICLE_GROUP_AFFECTED__STRUCT_H_
