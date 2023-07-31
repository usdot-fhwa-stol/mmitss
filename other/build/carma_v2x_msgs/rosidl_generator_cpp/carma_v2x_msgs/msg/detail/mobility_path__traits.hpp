// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/MobilityPath.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_PATH__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_PATH__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/mobility_path__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'm_header'
#include "carma_v2x_msgs/msg/detail/mobility_header__traits.hpp"
// Member 'trajectory'
#include "carma_v2x_msgs/msg/detail/trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::MobilityPath>()
{
  return "carma_v2x_msgs::msg::MobilityPath";
}

template<>
inline const char * name<carma_v2x_msgs::msg::MobilityPath>()
{
  return "carma_v2x_msgs/msg/MobilityPath";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::MobilityPath>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::MobilityHeader>::value && has_fixed_size<carma_v2x_msgs::msg::Trajectory>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::MobilityPath>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::MobilityHeader>::value && has_bounded_size<carma_v2x_msgs::msg::Trajectory>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::MobilityPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_PATH__TRAITS_HPP_
