// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_v2x_msgs:msg/SensorDataSharingMessage.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__TRAITS_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__TRAITS_HPP_

#include "carma_v2x_msgs/msg/detail/sensor_data_sharing_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'msg_cnt'
#include "j2735_v2x_msgs/msg/detail/msg_count__traits.hpp"
// Member 'source_id'
#include "j2735_v2x_msgs/msg/detail/temporary_id__traits.hpp"
// Member 'equipment_type'
#include "j3224_v2x_msgs/msg/detail/equipment_type__traits.hpp"
// Member 'sdsm_time_stamp'
#include "j2735_v2x_msgs/msg/detail/d_date_time__traits.hpp"
// Member 'ref_pos'
#include "carma_v2x_msgs/msg/detail/position3_d__traits.hpp"
// Member 'ref_pos_xy_conf'
#include "carma_v2x_msgs/msg/detail/positional_accuracy__traits.hpp"
// Member 'objects'
#include "carma_v2x_msgs/msg/detail/detected_object_list__traits.hpp"
// Member 'ref_pos_el_conf'
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_v2x_msgs::msg::SensorDataSharingMessage>()
{
  return "carma_v2x_msgs::msg::SensorDataSharingMessage";
}

template<>
inline const char * name<carma_v2x_msgs::msg::SensorDataSharingMessage>()
{
  return "carma_v2x_msgs/msg/SensorDataSharingMessage";
}

template<>
struct has_fixed_size<carma_v2x_msgs::msg::SensorDataSharingMessage>
  : std::integral_constant<bool, has_fixed_size<carma_v2x_msgs::msg::DetectedObjectList>::value && has_fixed_size<carma_v2x_msgs::msg::Position3D>::value && has_fixed_size<carma_v2x_msgs::msg::PositionalAccuracy>::value && has_fixed_size<j2735_v2x_msgs::msg::DDateTime>::value && has_fixed_size<j2735_v2x_msgs::msg::ElevationConfidence>::value && has_fixed_size<j2735_v2x_msgs::msg::MsgCount>::value && has_fixed_size<j2735_v2x_msgs::msg::TemporaryID>::value && has_fixed_size<j3224_v2x_msgs::msg::EquipmentType>::value> {};

template<>
struct has_bounded_size<carma_v2x_msgs::msg::SensorDataSharingMessage>
  : std::integral_constant<bool, has_bounded_size<carma_v2x_msgs::msg::DetectedObjectList>::value && has_bounded_size<carma_v2x_msgs::msg::Position3D>::value && has_bounded_size<carma_v2x_msgs::msg::PositionalAccuracy>::value && has_bounded_size<j2735_v2x_msgs::msg::DDateTime>::value && has_bounded_size<j2735_v2x_msgs::msg::ElevationConfidence>::value && has_bounded_size<j2735_v2x_msgs::msg::MsgCount>::value && has_bounded_size<j2735_v2x_msgs::msg::TemporaryID>::value && has_bounded_size<j3224_v2x_msgs::msg::EquipmentType>::value> {};

template<>
struct is_message<carma_v2x_msgs::msg::SensorDataSharingMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__TRAITS_HPP_
