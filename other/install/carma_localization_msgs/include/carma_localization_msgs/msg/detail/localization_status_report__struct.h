// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_localization_msgs:msg/LocalizationStatusReport.idl
// generated code does not contain a copyright notice

#ifndef CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__STRUCT_H_
#define CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNINITIALIZED'.
enum
{
  carma_localization_msgs__msg__LocalizationStatusReport__UNINITIALIZED = 0
};

/// Constant 'INITIALIZING'.
enum
{
  carma_localization_msgs__msg__LocalizationStatusReport__INITIALIZING = 1
};

/// Constant 'OPERATIONAL'.
enum
{
  carma_localization_msgs__msg__LocalizationStatusReport__OPERATIONAL = 2
};

/// Constant 'DEGRADED'.
enum
{
  carma_localization_msgs__msg__LocalizationStatusReport__DEGRADED = 3
};

/// Constant 'DEGRADED_NO_LIDAR_FIX'.
enum
{
  carma_localization_msgs__msg__LocalizationStatusReport__DEGRADED_NO_LIDAR_FIX = 4
};

/// Constant 'AWAIT_MANUAL_INITIALIZATION'.
enum
{
  carma_localization_msgs__msg__LocalizationStatusReport__AWAIT_MANUAL_INITIALIZATION = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/LocalizationStatusReport in the package carma_localization_msgs.
typedef struct carma_localization_msgs__msg__LocalizationStatusReport
{
  std_msgs__msg__Header header;
  uint8_t status;
} carma_localization_msgs__msg__LocalizationStatusReport;

// Struct for a sequence of carma_localization_msgs__msg__LocalizationStatusReport.
typedef struct carma_localization_msgs__msg__LocalizationStatusReport__Sequence
{
  carma_localization_msgs__msg__LocalizationStatusReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_localization_msgs__msg__LocalizationStatusReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__STRUCT_H_
