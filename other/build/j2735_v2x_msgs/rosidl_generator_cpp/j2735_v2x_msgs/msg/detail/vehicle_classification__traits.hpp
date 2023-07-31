// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/vehicle_classification__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'key_type'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__traits.hpp"
// Member 'role'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__traits.hpp"
// Member 'hpms_type'
#include "j2735_v2x_msgs/msg/detail/vehicle_type__traits.hpp"
// Member 'vehicle_type'
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__traits.hpp"
// Member 'response_equip'
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__traits.hpp"
// Member 'responder_type'
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__traits.hpp"
// Member 'fuel_type'
#include "j2735_v2x_msgs/msg/detail/fuel_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::VehicleClassification>()
{
  return "j2735_v2x_msgs::msg::VehicleClassification";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::VehicleClassification>()
{
  return "j2735_v2x_msgs/msg/VehicleClassification";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::VehicleClassification>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::BasicVehicleClass>::value && has_fixed_size<j2735_v2x_msgs::msg::BasicVehicleRole>::value && has_fixed_size<j2735_v2x_msgs::msg::FuelType>::value && has_fixed_size<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment>::value && has_fixed_size<j2735_v2x_msgs::msg::ITISResponderGroupAffected>::value && has_fixed_size<j2735_v2x_msgs::msg::ITISVehicleGroupAffected>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleType>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::VehicleClassification>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::BasicVehicleClass>::value && has_bounded_size<j2735_v2x_msgs::msg::BasicVehicleRole>::value && has_bounded_size<j2735_v2x_msgs::msg::FuelType>::value && has_bounded_size<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment>::value && has_bounded_size<j2735_v2x_msgs::msg::ITISResponderGroupAffected>::value && has_bounded_size<j2735_v2x_msgs::msg::ITISVehicleGroupAffected>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleType>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::VehicleClassification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_
