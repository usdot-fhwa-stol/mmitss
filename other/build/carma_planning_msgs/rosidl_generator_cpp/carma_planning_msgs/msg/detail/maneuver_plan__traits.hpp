// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:msg/ManeuverPlan.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__TRAITS_HPP_

#include "carma_planning_msgs/msg/detail/maneuver_plan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'planning_start_time'
// Member 'planning_completion_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::msg::ManeuverPlan>()
{
  return "carma_planning_msgs::msg::ManeuverPlan";
}

template<>
inline const char * name<carma_planning_msgs::msg::ManeuverPlan>()
{
  return "carma_planning_msgs/msg/ManeuverPlan";
}

template<>
struct has_fixed_size<carma_planning_msgs::msg::ManeuverPlan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_planning_msgs::msg::ManeuverPlan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_planning_msgs::msg::ManeuverPlan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PLAN__TRAITS_HPP_
