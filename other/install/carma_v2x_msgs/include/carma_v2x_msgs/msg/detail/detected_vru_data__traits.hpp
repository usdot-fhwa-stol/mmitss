// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/DetectedVRUData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/detected_vru_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__traits.hpp"
// Member 'propulsion'
#include "j2735_v2x_msgs/msg/detail/propelled_information__traits.hpp"
// Member 'attachment'
#include "j2735_v2x_msgs/msg/detail/attachment__traits.hpp"
// Member 'radius'
#include "carma_v2x_msgs/msg/detail/attachment_radius__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::DetectedVRUData>()
{
  return "carma_v2x_msgs::msg::DetectedVRUData";
}

template<>
inline const char * name<carma_v2x_msgs::msg::DetectedVRUData>()
{
  return "carma_v2x_msgs/msg/DetectedVRUData";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::DetectedVRUData>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::AttachmentRadius>::value && has_fixed_size<j2735_v2x_msgs::msg::Attachment>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalDeviceUserType>::value && has_fixed_size<j2735_v2x_msgs::msg::PropelledInformation>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::DetectedVRUData>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::AttachmentRadius>::value && has_bounded_size<j2735_v2x_msgs::msg::Attachment>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalDeviceUserType>::value && has_bounded_size<j2735_v2x_msgs::msg::PropelledInformation>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::DetectedVRUData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_VRU_DATA__TRAITS_HPP_
