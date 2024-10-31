// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/DetectedObstacleData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/detected_obstacle_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'obst_size'
#include "carma_v2x_msgs/msg/detail/obstacle_size__traits.hpp"
// Member 'obst_size_confidence'
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::DetectedObstacleData>()
{
  return "carma_v2x_msgs::msg::DetectedObstacleData";
}

template<>
inline const char * name<carma_v2x_msgs::msg::DetectedObstacleData>()
{
  return "carma_v2x_msgs/msg/DetectedObstacleData";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::DetectedObstacleData>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::ObstacleSize>::value && has_fixed_size<j3224_v2x_msgs::msg::ObstacleSizeConfidence>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::DetectedObstacleData>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::ObstacleSize>::value && has_bounded_size<j3224_v2x_msgs::msg::ObstacleSizeConfidence>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::DetectedObstacleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__TRAITS_HPP_
