// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/Attitude.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__ATTITUDE__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__ATTITUDE__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/attitude__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pitch'
#include "carma_v2x_msgs/msg/detail/pitch_detected__traits.hpp"
// Member 'roll'
#include "carma_v2x_msgs/msg/detail/roll_detected__traits.hpp"
// Member 'yaw'
#include "carma_v2x_msgs/msg/detail/yaw_detected__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::Attitude>()
{
  return "carma_v2x_msgs::msg::Attitude";
}

template<>
inline const char * name<carma_v2x_msgs::msg::Attitude>()
{
  return "carma_v2x_msgs/msg/Attitude";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::Attitude>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::PitchDetected>::value && has_fixed_size<carma_v2x_msgs::msg::RollDetected>::value && has_fixed_size<carma_v2x_msgs::msg::YawDetected>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::Attitude>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::PitchDetected>::value && has_bounded_size<carma_v2x_msgs::msg::RollDetected>::value && has_bounded_size<carma_v2x_msgs::msg::YawDetected>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::Attitude>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__ATTITUDE__TRAITS_HPP_
