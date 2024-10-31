// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__TRAITS_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__TRAITS_HPP_

#include "carma_debug_ros2_msgs/msg/detail/trajectory_curvature_speeds__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'trajectory_plan'
#include "carma_planning_msgs/msg/detail/trajectory_plan__traits.hpp"
// Member 'starting_state'
#include "carma_planning_msgs/msg/detail/vehicle_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds>()
{
  return "carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds";
}

template<>
inline const char * name<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds>()
{
  return "carma_debug_ros2_msgs/msg/TrajectoryCurvatureSpeeds";
}

template<>
struct has_fixed_size<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__TRAITS_HPP_
