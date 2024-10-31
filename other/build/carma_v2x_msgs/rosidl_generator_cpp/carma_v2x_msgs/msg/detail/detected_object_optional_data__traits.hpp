// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/DetectedObjectOptionalData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/detected_object_optional_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'det_veh'
#include "carma_v2x_msgs/msg/detail/detected_vehicle_data__traits.hpp"
// Member 'det_vru'
#include "carma_v2x_msgs/msg/detail/detected_vru_data__traits.hpp"
// Member 'det_obst'
#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::DetectedObjectOptionalData>()
{
  return "carma_v2x_msgs::msg::DetectedObjectOptionalData";
}

template<>
inline const char * name<carma_v2x_msgs::msg::DetectedObjectOptionalData>()
{
  return "carma_v2x_msgs/msg/DetectedObjectOptionalData";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::DetectedObjectOptionalData>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::DetectedObstacleData>::value && has_fixed_size<carma_v2x_msgs::msg::DetectedVRUData>::value && has_fixed_size<carma_v2x_msgs::msg::DetectedVehicleData>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::DetectedObjectOptionalData>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::DetectedObstacleData>::value && has_bounded_size<carma_v2x_msgs::msg::DetectedVRUData>::value && has_bounded_size<carma_v2x_msgs::msg::DetectedVehicleData>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::DetectedObjectOptionalData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__TRAITS_HPP_
