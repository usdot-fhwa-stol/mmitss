// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PublicSafetyDirectingTrafficSubType.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__UNAVAILABLE = 0
};

/// Constant 'POLICE_AND_TRAFFIC_OFFICERS'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__POLICE_AND_TRAFFIC_OFFICERS = 1
};

/// Constant 'TRAFFIC_CONTROL_PERSONS'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__TRAFFIC_CONTROL_PERSONS = 2
};

/// Constant 'RAILROAD_CROSSING_GURADS'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__RAILROAD_CROSSING_GURADS = 4
};

/// Constant 'CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__CIVIL_DEFENSE_NATIONAL_GUARD_MILITARY_POLICE = 8
};

/// Constant 'EMERGENCY_ORGANIZATION_PERSONNEL'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__EMERGENCY_ORGANIZATION_PERSONNEL = 16
};

/// Constant 'HIGHWAY_SERVICE_VEHICLE_PERSONNEL'.
enum
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__HIGHWAY_SERVICE_VEHICLE_PERSONNEL = 32
};

// Struct defined in msg/PublicSafetyDirectingTrafficSubType in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType
{
  uint8_t sub_types;
} j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType;

// Struct for a sequence of j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType.
typedef struct j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__Sequence
{
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__STRUCT_H_
