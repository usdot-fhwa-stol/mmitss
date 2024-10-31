// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/DetectedVehicleData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/detected_vehicle_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'lights'
#include "j2735_v2x_msgs/msg/detail/exterior_lights__traits.hpp"
// Member 'veh_attitude'
#include "carma_v2x_msgs/msg/detail/attitude__traits.hpp"
// Member 'veh_attitude_confidence'
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__traits.hpp"
// Member 'veh_ang_vel'
#include "carma_v2x_msgs/msg/detail/angular_velocity__traits.hpp"
// Member 'veh_ang_vel_confidence'
#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__traits.hpp"
// Member 'size'
#include "carma_v2x_msgs/msg/detail/vehicle_size__traits.hpp"
// Member 'height'
#include "carma_v2x_msgs/msg/detail/vehicle_height__traits.hpp"
// Member 'vehicle_size_confidence'
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__traits.hpp"
// Member 'vehicle_class'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__traits.hpp"
// Member 'class_conf'
#include "j3224_v2x_msgs/msg/detail/classification_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::DetectedVehicleData>()
{
  return "carma_v2x_msgs::msg::DetectedVehicleData";
}

template<>
inline const char * name<carma_v2x_msgs::msg::DetectedVehicleData>()
{
  return "carma_v2x_msgs/msg/DetectedVehicleData";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::DetectedVehicleData>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::AngularVelocity>::value && has_fixed_size<carma_v2x_msgs::msg::Attitude>::value && has_fixed_size<carma_v2x_msgs::msg::VehicleHeight>::value && has_fixed_size<carma_v2x_msgs::msg::VehicleSize>::value && has_fixed_size<j2735_v2x_msgs::msg::BasicVehicleClass>::value && has_fixed_size<j2735_v2x_msgs::msg::ExteriorLights>::value && has_fixed_size<j3224_v2x_msgs::msg::AngularVelocityConfidence>::value && has_fixed_size<j3224_v2x_msgs::msg::AttitudeConfidence>::value && has_fixed_size<j3224_v2x_msgs::msg::ClassificationConfidence>::value && has_fixed_size<j3224_v2x_msgs::msg::VehicleSizeConfidence>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::DetectedVehicleData>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::AngularVelocity>::value && has_bounded_size<carma_v2x_msgs::msg::Attitude>::value && has_bounded_size<carma_v2x_msgs::msg::VehicleHeight>::value && has_bounded_size<carma_v2x_msgs::msg::VehicleSize>::value && has_bounded_size<j2735_v2x_msgs::msg::BasicVehicleClass>::value && has_bounded_size<j2735_v2x_msgs::msg::ExteriorLights>::value && has_bounded_size<j3224_v2x_msgs::msg::AngularVelocityConfidence>::value && has_bounded_size<j3224_v2x_msgs::msg::AttitudeConfidence>::value && has_bounded_size<j3224_v2x_msgs::msg::ClassificationConfidence>::value && has_bounded_size<j3224_v2x_msgs::msg::VehicleSizeConfidence>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::DetectedVehicleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__TRAITS_HPP_
