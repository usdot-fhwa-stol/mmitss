// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_perception_msgs:msg/TrafficSignalInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__TRAITS_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__TRAITS_HPP_

#include "carma_perception_msgs/msg/detail/traffic_signal_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_perception_msgs::msg::TrafficSignalInfo>()
{
  return "carma_perception_msgs::msg::TrafficSignalInfo";
}

template<>
inline const char * name<carma_perception_msgs::msg::TrafficSignalInfo>()
{
  return "carma_perception_msgs/msg/TrafficSignalInfo";
}

template<>
struct has_fixed_size<carma_perception_msgs::msg::TrafficSignalInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_perception_msgs::msg::TrafficSignalInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_perception_msgs::msg::TrafficSignalInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO__TRAITS_HPP_
