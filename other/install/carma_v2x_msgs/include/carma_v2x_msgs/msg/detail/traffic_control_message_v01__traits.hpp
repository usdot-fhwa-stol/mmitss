// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/traffic_control_message_v01__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'reqid'
#include "j2735_v2x_msgs/msg/detail/id64b__traits.hpp"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/id128b__traits.hpp"
// Member 'updated'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'package'
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__traits.hpp"
// Member 'params'
#include "carma_v2x_msgs/msg/detail/traffic_control_params__traits.hpp"
// Member 'geometry'
#include "carma_v2x_msgs/msg/detail/traffic_control_geometry__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::TrafficControlMessageV01>()
{
  return "carma_v2x_msgs::msg::TrafficControlMessageV01";
}

template<>
inline const char * name<carma_v2x_msgs::msg::TrafficControlMessageV01>()
{
  return "carma_v2x_msgs/msg/TrafficControlMessageV01";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::TrafficControlMessageV01>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<carma_v2x_msgs::msg::TrafficControlGeometry>::value && has_fixed_size<carma_v2x_msgs::msg::TrafficControlParams>::value && has_fixed_size<j2735_v2x_msgs::msg::Id128b>::value && has_fixed_size<j2735_v2x_msgs::msg::Id64b>::value && has_fixed_size<j2735_v2x_msgs::msg::TrafficControlPackage>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::TrafficControlMessageV01>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<carma_v2x_msgs::msg::TrafficControlGeometry>::value && has_bounded_size<carma_v2x_msgs::msg::TrafficControlParams>::value && has_bounded_size<j2735_v2x_msgs::msg::Id128b>::value && has_bounded_size<j2735_v2x_msgs::msg::Id64b>::value && has_bounded_size<j2735_v2x_msgs::msg::TrafficControlPackage>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::TrafficControlMessageV01>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__TRAITS_HPP_
