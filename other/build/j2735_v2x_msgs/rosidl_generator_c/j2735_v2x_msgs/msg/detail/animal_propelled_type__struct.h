// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AnimalPropelledType.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_PROPELLED_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_PROPELLED_TYPE__STRUCT_H_

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
  j2735_v2x_msgs__msg__AnimalPropelledType__UNAVAILABLE = 0
};

/// Constant 'OTHER_TYPES'.
enum
{
  j2735_v2x_msgs__msg__AnimalPropelledType__OTHER_TYPES = 1
};

/// Constant 'ANIMAL_MOUNTED'.
enum
{
  j2735_v2x_msgs__msg__AnimalPropelledType__ANIMAL_MOUNTED = 2
};

/// Constant 'ANIMAL_DRAWN_CARRIAGE'.
enum
{
  j2735_v2x_msgs__msg__AnimalPropelledType__ANIMAL_DRAWN_CARRIAGE = 3
};

// Struct defined in msg/AnimalPropelledType in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__AnimalPropelledType
{
  uint8_t type;
} j2735_v2x_msgs__msg__AnimalPropelledType;

// Struct for a sequence of j2735_v2x_msgs__msg__AnimalPropelledType.
typedef struct j2735_v2x_msgs__msg__AnimalPropelledType__Sequence
{
  j2735_v2x_msgs__msg__AnimalPropelledType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AnimalPropelledType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_PROPELLED_TYPE__STRUCT_H_
