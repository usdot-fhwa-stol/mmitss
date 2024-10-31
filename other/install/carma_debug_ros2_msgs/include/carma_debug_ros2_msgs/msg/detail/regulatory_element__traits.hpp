// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__TRAITS_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__TRAITS_HPP_

#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_debug_ros2_msgs::msg::RegulatoryElement>()
{
  return "carma_debug_ros2_msgs::msg::RegulatoryElement";
}

template<>
inline const char * name<carma_debug_ros2_msgs::msg::RegulatoryElement>()
{
  return "carma_debug_ros2_msgs/msg/RegulatoryElement";
}

template<>
struct has_fixed_size<carma_debug_ros2_msgs::msg::RegulatoryElement>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_debug_ros2_msgs::msg::RegulatoryElement>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_debug_ros2_msgs::msg::RegulatoryElement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__TRAITS_HPP_
