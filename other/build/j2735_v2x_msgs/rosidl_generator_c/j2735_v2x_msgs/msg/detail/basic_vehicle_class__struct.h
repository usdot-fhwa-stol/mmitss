// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BasicVehicleClass.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CLASS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN_VEHICLE_CLASS'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__UNKNOWN_VEHICLE_CLASS = 0
};

/// Constant 'SPECIAL_VEHICLE_CLASS'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__SPECIAL_VEHICLE_CLASS = 1
};

/// Constant 'PASSENGER_VEHICLE_TYPE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__PASSENGER_VEHICLE_TYPE_UNKNOWN = 10
};

/// Constant 'PASSENGER_VEHICLE_TYPE_OTHER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__PASSENGER_VEHICLE_TYPE_OTHER = 11
};

/// Constant 'LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__LIGHT_TRUCK_VEHICLE_TYPE_UNKNOWN = 20
};

/// Constant 'LIGHT_TRUCK_VEHICLE_TYPE_OTHER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__LIGHT_TRUCK_VEHICLE_TYPE_OTHER = 21
};

/// Constant 'TRUCK_VEHICLE_TYPE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_VEHICLE_TYPE_UNKNOWN = 25
};

/// Constant 'TRUCK_VEHICLE_TYPE_OTHER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_VEHICLE_TYPE_OTHER = 26
};

/// Constant 'TRUCK_AXLE_COUNT_2'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_AXLE_COUNT_2 = 27
};

/// Constant 'TRUCK_AXLE_COUNT_3'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_AXLE_COUNT_3 = 28
};

/// Constant 'TRUCK_AXLE_COUNT_4'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_AXLE_COUNT_4 = 29
};

/// Constant 'TRUCK_AXLE_COUNT_4_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_AXLE_COUNT_4_TRAILER = 30
};

/// Constant 'TRUCK_AXLE_COUNT_5_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_AXLE_COUNT_5_TRAILER = 31
};

/// Constant 'TRUCK_AXLE_COUNT_6_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_AXLE_COUNT_6_TRAILER = 32
};

/// Constant 'TRUCK_AXLE_COUNT_5_MULTI_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_AXLE_COUNT_5_MULTI_TRAILER = 33
};

/// Constant 'TRUCK_AXLE_COUNT_6_MULTI_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_AXLE_COUNT_6_MULTI_TRAILER = 34
};

/// Constant 'TRUCK_AXLE_COUNT_7_MULTI_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRUCK_AXLE_COUNT_7_MULTI_TRAILER = 35
};

/// Constant 'MOTORCYCLE_TYPE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__MOTORCYCLE_TYPE_UNKNOWN = 40
};

/// Constant 'MOTORCYCLE_TYPE_OTHER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__MOTORCYCLE_TYPE_OTHER = 41
};

/// Constant 'MOTORCYCLE_CRUISER_STANDARD'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__MOTORCYCLE_CRUISER_STANDARD = 42
};

/// Constant 'MOTORCYCLE_SPORT_UNCLAD'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__MOTORCYCLE_SPORT_UNCLAD = 43
};

/// Constant 'MOTORCYCLE_SPORT_TOURING'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__MOTORCYCLE_SPORT_TOURING = 44
};

/// Constant 'MOTORCYCLE_SUPORT_SPORT'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__MOTORCYCLE_SUPORT_SPORT = 45
};

/// Constant 'MOTORCYCLE_TOURING'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__MOTORCYCLE_TOURING = 46
};

/// Constant 'MOTORCYCLE_TRIKE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__MOTORCYCLE_TRIKE = 47
};

/// Constant 'MOTORCYCLE_WITH_PASSENGERS'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__MOTORCYCLE_WITH_PASSENGERS = 48
};

/// Constant 'TRANSIT_TYPE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRANSIT_TYPE_UNKNOWN = 50
};

/// Constant 'TRANSIT_TYPE_OTHER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRANSIT_TYPE_OTHER = 51
};

/// Constant 'TRANSIT_BRT'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRANSIT_BRT = 52
};

/// Constant 'TRANSIT_EXPRESS_BUS'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRANSIT_EXPRESS_BUS = 53
};

/// Constant 'TRANSIT_LOCAL_BUS'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRANSIT_LOCAL_BUS = 54
};

/// Constant 'TRANSIT_SCHOOL_BUS'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRANSIT_SCHOOL_BUS = 55
};

/// Constant 'TRANSIT_FIXED_GUIDEWAY'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRANSIT_FIXED_GUIDEWAY = 56
};

/// Constant 'TRANSIT_PARATRANSIT'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRANSIT_PARATRANSIT = 57
};

/// Constant 'TRANSIT_PARATRANSIT_AMBULANCE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__TRANSIT_PARATRANSIT_AMBULANCE = 58
};

/// Constant 'EMERGENCY_TYPE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_TYPE_UNKNOWN = 60
};

/// Constant 'EMERGENCY_TYPE_OTHER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_TYPE_OTHER = 61
};

/// Constant 'EMERGENCY_FIRE_LIGHT_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_FIRE_LIGHT_VEHICLE = 62
};

/// Constant 'EMERGENCY_FIRE_HEAVY_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_FIRE_HEAVY_VEHICLE = 63
};

/// Constant 'EMERGENCY_FIRE_PARAMEDIC_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_FIRE_PARAMEDIC_VEHICLE = 64
};

/// Constant 'EMERGENCY_FIRE_AMBULANCE_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_FIRE_AMBULANCE_VEHICLE = 65
};

/// Constant 'EMERGENCY_POLICE_LIGHT_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_POLICE_LIGHT_VEHICLE = 66
};

/// Constant 'EMERGENCY_POLICE_HEAVY_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_POLICE_HEAVY_VEHICLE = 67
};

/// Constant 'EMERGENCY_OTHER_RESPONDER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_OTHER_RESPONDER = 68
};

/// Constant 'EMERGENCY_OTHER_AMBULANCE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__EMERGENCY_OTHER_AMBULANCE = 69
};

/// Constant 'OTHER_TRAVELER_TYPE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__OTHER_TRAVELER_TYPE_UNKNOWN = 80
};

/// Constant 'OTHER_TRAVELER_TYPE_OTHER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__OTHER_TRAVELER_TYPE_OTHER = 81
};

/// Constant 'OTHER_TRAVELER_PEDESTRIAN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__OTHER_TRAVELER_PEDESTRIAN = 82
};

/// Constant 'OTHER_TRAVELER_VISUALLY_DISABLED'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__OTHER_TRAVELER_VISUALLY_DISABLED = 83
};

/// Constant 'OTHER_TRAVELER_PHYSICALLY_DISABLED'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__OTHER_TRAVELER_PHYSICALLY_DISABLED = 84
};

/// Constant 'OTHER_TRAVELER_BICYCLE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__OTHER_TRAVELER_BICYCLE = 85
};

/// Constant 'OTHER_TRAVELER_VULNERABLE_ROADWORKER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__OTHER_TRAVELER_VULNERABLE_ROADWORKER = 86
};

/// Constant 'INFRASTRUCTURE_TYPE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__INFRASTRUCTURE_TYPE_UNKNOWN = 90
};

/// Constant 'INFRASTRUCTURE_FIXED'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__INFRASTRUCTURE_FIXED = 91
};

/// Constant 'INFRASTRUCTURE_MOVABLE'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__INFRASTRUCTURE_MOVABLE = 92
};

/// Constant 'INFRASTRUCTURE_CARGO_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__BasicVehicleClass__INFRASTRUCTURE_CARGO_TRAILER = 93
};

// Struct defined in msg/BasicVehicleClass in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__BasicVehicleClass
{
  uint8_t basic_vehicle_class;
} j2735_v2x_msgs__msg__BasicVehicleClass;

// Struct for a sequence of j2735_v2x_msgs__msg__BasicVehicleClass.
typedef struct j2735_v2x_msgs__msg__BasicVehicleClass__Sequence
{
  j2735_v2x_msgs__msg__BasicVehicleClass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BasicVehicleClass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CLASS__STRUCT_H_
