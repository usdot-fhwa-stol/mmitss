// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/RTCMHeader.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/rtcm_header__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/gnss_status__traits.hpp"
// Member 'ant_offset_x'
#include "carma_v2x_msgs/msg/detail/offset_b12__traits.hpp"
// Member 'ant_offset_y'
#include "carma_v2x_msgs/msg/detail/offset_b09__traits.hpp"
// Member 'ant_offset_z'
#include "carma_v2x_msgs/msg/detail/offset_b10__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::RTCMHeader>()
{
  return "carma_v2x_msgs::msg::RTCMHeader";
}

template<>
inline const char * name<carma_v2x_msgs::msg::RTCMHeader>()
{
  return "carma_v2x_msgs/msg/RTCMHeader";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::RTCMHeader>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::OffsetB09>::value && has_fixed_size<carma_v2x_msgs::msg::OffsetB10>::value && has_fixed_size<carma_v2x_msgs::msg::OffsetB12>::value && has_fixed_size<j2735_v2x_msgs::msg::GNSSStatus>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::RTCMHeader>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::OffsetB09>::value && has_bounded_size<carma_v2x_msgs::msg::OffsetB10>::value && has_bounded_size<carma_v2x_msgs::msg::OffsetB12>::value && has_bounded_size<j2735_v2x_msgs::msg::GNSSStatus>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::RTCMHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__TRAITS_HPP_
