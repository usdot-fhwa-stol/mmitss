// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/DetectedObjectCommonData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/detected_object_common_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'obj_type'
#include "j3224_v2x_msgs/msg/detail/object_type__traits.hpp"
// Member 'obj_type_cfd'
#include "j3224_v2x_msgs/msg/detail/classification_confidence__traits.hpp"
// Member 'detected_id'
#include "j3224_v2x_msgs/msg/detail/object_id__traits.hpp"
// Member 'measurement_time'
#include "carma_v2x_msgs/msg/detail/measurement_time_offset__traits.hpp"
// Member 'time_confidence'
#include "j2735_v2x_msgs/msg/detail/time_confidence__traits.hpp"
// Member 'pos'
#include "carma_v2x_msgs/msg/detail/position_offset_xyz__traits.hpp"
// Member 'pos_confidence'
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__traits.hpp"
// Member 'speed'
// Member 'speed_z'
#include "carma_v2x_msgs/msg/detail/speed__traits.hpp"
// Member 'speed_confidence'
// Member 'speed_confidence_z'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__traits.hpp"
// Member 'heading'
#include "carma_v2x_msgs/msg/detail/heading__traits.hpp"
// Member 'heading_conf'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__traits.hpp"
// Member 'accel_4_way'
#include "carma_v2x_msgs/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'acc_cfd_x'
// Member 'acc_cfd_y'
// Member 'acc_cfd_z'
#include "j2735_v2x_msgs/msg/detail/acceleration_confidence__traits.hpp"
// Member 'acc_cfd_yaw'
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::DetectedObjectCommonData>()
{
  return "carma_v2x_msgs::msg::DetectedObjectCommonData";
}

template<>
inline const char * name<carma_v2x_msgs::msg::DetectedObjectCommonData>()
{
  return "carma_v2x_msgs/msg/DetectedObjectCommonData";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::DetectedObjectCommonData>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::AccelerationSet4Way>::value && has_fixed_size<carma_v2x_msgs::msg::Heading>::value && has_fixed_size<carma_v2x_msgs::msg::MeasurementTimeOffset>::value && has_fixed_size<carma_v2x_msgs::msg::PositionOffsetXYZ>::value && has_fixed_size<carma_v2x_msgs::msg::Speed>::value && has_fixed_size<j2735_v2x_msgs::msg::AccelerationConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::HeadingConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionConfidenceSet>::value && has_fixed_size<j2735_v2x_msgs::msg::SpeedConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::TimeConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::YawRateConfidence>::value && has_fixed_size<j3224_v2x_msgs::msg::ClassificationConfidence>::value && has_fixed_size<j3224_v2x_msgs::msg::ObjectID>::value && has_fixed_size<j3224_v2x_msgs::msg::ObjectType>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::DetectedObjectCommonData>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::AccelerationSet4Way>::value && has_bounded_size<carma_v2x_msgs::msg::Heading>::value && has_bounded_size<carma_v2x_msgs::msg::MeasurementTimeOffset>::value && has_bounded_size<carma_v2x_msgs::msg::PositionOffsetXYZ>::value && has_bounded_size<carma_v2x_msgs::msg::Speed>::value && has_bounded_size<j2735_v2x_msgs::msg::AccelerationConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::HeadingConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionConfidenceSet>::value && has_bounded_size<j2735_v2x_msgs::msg::SpeedConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::TimeConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::YawRateConfidence>::value && has_bounded_size<j3224_v2x_msgs::msg::ClassificationConfidence>::value && has_bounded_size<j3224_v2x_msgs::msg::ObjectID>::value && has_bounded_size<j3224_v2x_msgs::msg::ObjectType>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::DetectedObjectCommonData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__TRAITS_HPP_
