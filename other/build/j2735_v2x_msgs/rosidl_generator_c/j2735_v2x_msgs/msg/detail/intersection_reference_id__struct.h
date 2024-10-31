// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/IntersectionReferenceID.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_REFERENCE_ID__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_REFERENCE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REGION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__IntersectionReferenceID__REGION_UNAVAILABLE = 0
};

// Struct defined in msg/IntersectionReferenceID in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__IntersectionReferenceID
{
  uint16_t region;
  bool region_exists;
  uint16_t id;
} j2735_v2x_msgs__msg__IntersectionReferenceID;

// Struct for a sequence of j2735_v2x_msgs__msg__IntersectionReferenceID.
typedef struct j2735_v2x_msgs__msg__IntersectionReferenceID__Sequence
{
  j2735_v2x_msgs__msg__IntersectionReferenceID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__IntersectionReferenceID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_REFERENCE_ID__STRUCT_H_
