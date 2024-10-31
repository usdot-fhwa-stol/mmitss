// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/EquipmentType.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__EQUIPMENT_TYPE__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__EQUIPMENT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  j3224_v2x_msgs__msg__EquipmentType__UNKNOWN = 0
};

/// Constant 'RSU'.
enum
{
  j3224_v2x_msgs__msg__EquipmentType__RSU = 1
};

/// Constant 'OBU'.
enum
{
  j3224_v2x_msgs__msg__EquipmentType__OBU = 2
};

/// Constant 'VRU'.
enum
{
  j3224_v2x_msgs__msg__EquipmentType__VRU = 3
};

// Struct defined in msg/EquipmentType in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__EquipmentType
{
  uint8_t equipment_type;
} j3224_v2x_msgs__msg__EquipmentType;

// Struct for a sequence of j3224_v2x_msgs__msg__EquipmentType.
typedef struct j3224_v2x_msgs__msg__EquipmentType__Sequence
{
  j3224_v2x_msgs__msg__EquipmentType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__EquipmentType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__EQUIPMENT_TYPE__STRUCT_H_
