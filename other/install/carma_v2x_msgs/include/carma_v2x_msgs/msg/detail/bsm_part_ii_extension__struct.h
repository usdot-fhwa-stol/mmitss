// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__STRUCT_H_
#define CARMA_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_SAFETY_EXT'.
enum
{
  carma_v2x_msgs__msg__BSMPartIIExtension__VEHICLE_SAFETY_EXT = 0
};

/// Constant 'SPECIAL_VEHICLE_EXT'.
enum
{
  carma_v2x_msgs__msg__BSMPartIIExtension__SPECIAL_VEHICLE_EXT = 1
};

/// Constant 'SUPPLEMENTAL_VEHICLE_EXT'.
enum
{
  carma_v2x_msgs__msg__BSMPartIIExtension__SUPPLEMENTAL_VEHICLE_EXT = 2
};

// Include directives for member types
// Member 'vehicle_safety_extensions'
#include "carma_v2x_msgs/msg/detail/vehicle_safety_extensions__struct.h"
// Member 'special_vehicle_extensions'
#include "carma_v2x_msgs/msg/detail/special_vehicle_extensions__struct.h"
// Member 'supplemental_vehicle_extensions'
#include "carma_v2x_msgs/msg/detail/supplemental_vehicle_extensions__struct.h"

// Struct defined in msg/BSMPartIIExtension in the package carma_v2x_msgs.
typedef struct carma_v2x_msgs__msg__BSMPartIIExtension
{
  uint8_t part_ii_id;
  carma_v2x_msgs__msg__VehicleSafetyExtensions vehicle_safety_extensions;
  carma_v2x_msgs__msg__SpecialVehicleExtensions special_vehicle_extensions;
  carma_v2x_msgs__msg__SupplementalVehicleExtensions supplemental_vehicle_extensions;
} carma_v2x_msgs__msg__BSMPartIIExtension;

// Struct for a sequence of carma_v2x_msgs__msg__BSMPartIIExtension.
typedef struct carma_v2x_msgs__msg__BSMPartIIExtension__Sequence
{
  carma_v2x_msgs__msg__BSMPartIIExtension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_v2x_msgs__msg__BSMPartIIExtension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__STRUCT_H_
