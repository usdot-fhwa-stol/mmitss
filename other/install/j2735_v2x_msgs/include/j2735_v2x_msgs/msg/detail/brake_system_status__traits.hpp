// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'wheel_brakes'
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__traits.hpp"
// Member 'traction'
#include "j2735_v2x_msgs/msg/detail/traction_control_status__traits.hpp"
// Member 'abs'
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__traits.hpp"
// Member 'scs'
#include "j2735_v2x_msgs/msg/detail/stability_control_status__traits.hpp"
// Member 'brake_boost'
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__traits.hpp"
// Member 'aux_brakes'
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BrakeSystemStatus>()
{
  return "j2735_v2x_msgs::msg::BrakeSystemStatus";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BrakeSystemStatus>()
{
  return "j2735_v2x_msgs/msg/BrakeSystemStatus";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BrakeSystemStatus>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AntiLockBrakeStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::AuxiliaryBrakeStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::BrakeAppliedStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::BrakeBoostApplied>::value && has_fixed_size<j2735_v2x_msgs::msg::StabilityControlStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::TractionControlStatus>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BrakeSystemStatus>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AntiLockBrakeStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::AuxiliaryBrakeStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::BrakeAppliedStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::BrakeBoostApplied>::value && has_bounded_size<j2735_v2x_msgs::msg::StabilityControlStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::TractionControlStatus>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BrakeSystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__TRAITS_HPP_
