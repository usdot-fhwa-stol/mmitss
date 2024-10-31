// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j3224_v2x_msgs:msg/DetectedVRUData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__STRUCT_H_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_BASIC_TYPE'.
enum
{
  j3224_v2x_msgs__msg__DetectedVRUData__HAS_BASIC_TYPE = 1
};

/// Constant 'HAS_PROPULSION'.
enum
{
  j3224_v2x_msgs__msg__DetectedVRUData__HAS_PROPULSION = 2
};

/// Constant 'HAS_ATTACHMENT'.
enum
{
  j3224_v2x_msgs__msg__DetectedVRUData__HAS_ATTACHMENT = 4
};

/// Constant 'HAS_RADIUS'.
enum
{
  j3224_v2x_msgs__msg__DetectedVRUData__HAS_RADIUS = 8
};

// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__struct.h"
// Member 'propulsion'
#include "j2735_v2x_msgs/msg/detail/propelled_information__struct.h"
// Member 'attachment'
#include "j2735_v2x_msgs/msg/detail/attachment__struct.h"
// Member 'radius'
#include "j2735_v2x_msgs/msg/detail/attachment_radius__struct.h"

// Struct defined in msg/DetectedVRUData in the package j3224_v2x_msgs.
typedef struct j3224_v2x_msgs__msg__DetectedVRUData
{
  uint8_t presence_vector;
  j2735_v2x_msgs__msg__PersonalDeviceUserType basic_type;
  j2735_v2x_msgs__msg__PropelledInformation propulsion;
  j2735_v2x_msgs__msg__Attachment attachment;
  j2735_v2x_msgs__msg__AttachmentRadius radius;
} j3224_v2x_msgs__msg__DetectedVRUData;

// Struct for a sequence of j3224_v2x_msgs__msg__DetectedVRUData.
typedef struct j3224_v2x_msgs__msg__DetectedVRUData__Sequence
{
  j3224_v2x_msgs__msg__DetectedVRUData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j3224_v2x_msgs__msg__DetectedVRUData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__STRUCT_H_
