// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_KEY_TYPE'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__HAS_KEY_TYPE = 1
};

/// Constant 'HAS_ROLE'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__HAS_ROLE = 2
};

/// Constant 'HAS_ISO'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__HAS_ISO = 4
};

/// Constant 'HAS_HPMS_TYPE'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__HAS_HPMS_TYPE = 8
};

/// Constant 'HAS_VEHICLE_TYPE'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__HAS_VEHICLE_TYPE = 16
};

/// Constant 'HAS_RESPONSE_EQUIP'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__HAS_RESPONSE_EQUIP = 32
};

/// Constant 'HAS_RESPONDER_TYPE'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__HAS_RESPONDER_TYPE = 64
};

/// Constant 'HAS_FUEL_TYPE'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__HAS_FUEL_TYPE = 128
};

/// Constant 'ISO3833_MIN'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__ISO3833_MIN = 0
};

/// Constant 'ISO3833_MAX'.
enum
{
  j2735_v2x_msgs__msg__VehicleClassification__ISO3833_MAX = 100
};

// Include directives for member types
// Member 'key_type'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__struct.h"
// Member 'role'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__struct.h"
// Member 'hpms_type'
#include "j2735_v2x_msgs/msg/detail/vehicle_type__struct.h"
// Member 'vehicle_type'
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__struct.h"
// Member 'response_equip'
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__struct.h"
// Member 'responder_type'
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__struct.h"
// Member 'fuel_type'
#include "j2735_v2x_msgs/msg/detail/fuel_type__struct.h"

// Struct defined in msg/VehicleClassification in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__VehicleClassification
{
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__BasicVehicleClass key_type;
  j2735_v2x_msgs__msg__BasicVehicleRole role;
  uint8_t iso3833;
  j2735_v2x_msgs__msg__VehicleType hpms_type;
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected vehicle_type;
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment response_equip;
  j2735_v2x_msgs__msg__ITISResponderGroupAffected responder_type;
  j2735_v2x_msgs__msg__FuelType fuel_type;
} j2735_v2x_msgs__msg__VehicleClassification;

// Struct for a sequence of j2735_v2x_msgs__msg__VehicleClassification.
typedef struct j2735_v2x_msgs__msg__VehicleClassification__Sequence
{
  j2735_v2x_msgs__msg__VehicleClassification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VehicleClassification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_H_
