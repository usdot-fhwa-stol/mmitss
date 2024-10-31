// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_perception_msgs:msg/ExternalObjectList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT_LIST__STRUCT_H_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objects'
#include "carma_perception_msgs/msg/detail/external_object__struct.h"

// Struct defined in msg/ExternalObjectList in the package carma_perception_msgs.
typedef struct carma_perception_msgs__msg__ExternalObjectList
{
  std_msgs__msg__Header header;
  carma_perception_msgs__msg__ExternalObject__Sequence objects;
} carma_perception_msgs__msg__ExternalObjectList;

// Struct for a sequence of carma_perception_msgs__msg__ExternalObjectList.
typedef struct carma_perception_msgs__msg__ExternalObjectList__Sequence
{
  carma_perception_msgs__msg__ExternalObjectList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_perception_msgs__msg__ExternalObjectList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT_LIST__STRUCT_H_
