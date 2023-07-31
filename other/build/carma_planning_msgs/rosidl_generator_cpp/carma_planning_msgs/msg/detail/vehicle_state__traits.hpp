// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_

#include "carma_planning_msgs/msg/detail/vehicle_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::msg::VehicleState>()
{
  return "carma_planning_msgs::msg::VehicleState";
}

template<>
inline const char * name<carma_planning_msgs::msg::VehicleState>()
{
  return "carma_planning_msgs/msg/VehicleState";
}

template<>
struct has_fixed_size<carma_planning_msgs::msg::VehicleState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_planning_msgs::msg::VehicleState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_planning_msgs::msg::VehicleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
