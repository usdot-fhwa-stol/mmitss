// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:msg/LightBarCDAType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_CDA_TYPE__STRUCT_H_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_CDA_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPEA'.
enum
{
  carma_msgs__msg__LightBarCDAType__TYPEA = 0
};

/// Constant 'TYPEB'.
enum
{
  carma_msgs__msg__LightBarCDAType__TYPEB = 1
};

/// Constant 'TYPEC'.
enum
{
  carma_msgs__msg__LightBarCDAType__TYPEC = 2
};

/// Constant 'TYPED'.
enum
{
  carma_msgs__msg__LightBarCDAType__TYPED = 3
};

// Struct defined in msg/LightBarCDAType in the package carma_msgs.
typedef struct carma_msgs__msg__LightBarCDAType
{
  uint8_t type;
} carma_msgs__msg__LightBarCDAType;

// Struct for a sequence of carma_msgs__msg__LightBarCDAType.
typedef struct carma_msgs__msg__LightBarCDAType__Sequence
{
  carma_msgs__msg__LightBarCDAType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__msg__LightBarCDAType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_CDA_TYPE__STRUCT_H_
