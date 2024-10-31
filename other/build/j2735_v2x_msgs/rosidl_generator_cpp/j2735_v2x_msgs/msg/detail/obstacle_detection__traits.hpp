// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/ObstacleDetection.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/obstacle_detection__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'ob_dist'
#include "j2735_v2x_msgs/msg/detail/obstacle_distance__traits.hpp"
// Member 'ob_direct'
#include "j2735_v2x_msgs/msg/detail/obstacle_direction__traits.hpp"
// Member 'date_time'
#include "j2735_v2x_msgs/msg/detail/d_date_time__traits.hpp"
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__traits.hpp"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__traits.hpp"
// Member 'vert_event'
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::ObstacleDetection>()
{
  return "j2735_v2x_msgs::msg::ObstacleDetection";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::ObstacleDetection>()
{
  return "j2735_v2x_msgs/msg/ObstacleDetection";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::ObstacleDetection>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::DDateTime>::value && has_fixed_size<j2735_v2x_msgs::msg::ITISGenericLocations>::value && has_fixed_size<j2735_v2x_msgs::msg::ITIScodes>::value && has_fixed_size<j2735_v2x_msgs::msg::ObstacleDirection>::value && has_fixed_size<j2735_v2x_msgs::msg::ObstacleDistance>::value && has_fixed_size<j2735_v2x_msgs::msg::VerticalAccelerationThreshold>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::ObstacleDetection>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::DDateTime>::value && has_bounded_size<j2735_v2x_msgs::msg::ITISGenericLocations>::value && has_bounded_size<j2735_v2x_msgs::msg::ITIScodes>::value && has_bounded_size<j2735_v2x_msgs::msg::ObstacleDirection>::value && has_bounded_size<j2735_v2x_msgs::msg::ObstacleDistance>::value && has_bounded_size<j2735_v2x_msgs::msg::VerticalAccelerationThreshold>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::ObstacleDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DETECTION__TRAITS_HPP_
