// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__TRAITS_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__TRAITS_HPP_

#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'element'
#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair>()
{
  return "carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair";
}

template<>
inline const char * name<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair>()
{
  return "carma_debug_ros2_msgs/msg/LaneletIdRegulatoryElementPair";
}

template<>
struct has_fixed_size<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair>
  : std::integral_constant<bool, has_fixed_size<carma_debug_ros2_msgs::msg::RegulatoryElement>::value> {};

template<>
struct has_bounded_size<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair>
  : std::integral_constant<bool, has_bounded_size<carma_debug_ros2_msgs::msg::RegulatoryElement>::value> {};

template<>
struct is_message<carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__TRAITS_HPP_
