// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlRequest.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/traffic_control_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'tcr_v01'
#include "carma_v2x_msgs/msg/detail/traffic_control_request_v01__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::TrafficControlRequest>()
{
  return "carma_v2x_msgs::msg::TrafficControlRequest";
}

template<>
inline const char * name<carma_v2x_msgs::msg::TrafficControlRequest>()
{
  return "carma_v2x_msgs/msg/TrafficControlRequest";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::TrafficControlRequest>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::TrafficControlRequestV01>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::TrafficControlRequest>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::TrafficControlRequestV01>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::TrafficControlRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST__TRAITS_HPP_
