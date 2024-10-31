// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/bsm_core_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__traits.hpp"
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__traits.hpp"
// Member 'accel_set'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'brakes'
#include "j2735_v2x_msgs/msg/detail/brake_system_status__traits.hpp"
// Member 'size'
#include "j2735_v2x_msgs/msg/detail/vehicle_size__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BSMCoreData>()
{
  return "j2735_v2x_msgs::msg::BSMCoreData";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BSMCoreData>()
{
  return "j2735_v2x_msgs/msg/BSMCoreData";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BSMCoreData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BSMCoreData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BSMCoreData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_
