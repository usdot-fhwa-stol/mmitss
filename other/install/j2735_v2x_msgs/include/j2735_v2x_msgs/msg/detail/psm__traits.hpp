// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PSM.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PSM__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PSM__TRAITS_HPP_

#include "j2735_v2x_msgs/msg/detail/psm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__traits.hpp"
// Member 'sec_mark'
#include "j2735_v2x_msgs/msg/detail/d_second__traits.hpp"
// Member 'msg_cnt'
#include "j2735_v2x_msgs/msg/detail/msg_count__traits.hpp"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/temporary_id__traits.hpp"
// Member 'position'
#include "j2735_v2x_msgs/msg/detail/position3_d__traits.hpp"
// Member 'accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__traits.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/velocity__traits.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading__traits.hpp"
// Member 'accel_set'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'path_history'
#include "j2735_v2x_msgs/msg/detail/path_history__traits.hpp"
// Member 'path_prediction'
#include "j2735_v2x_msgs/msg/detail/path_prediction__traits.hpp"
// Member 'propulsion'
#include "j2735_v2x_msgs/msg/detail/propelled_information__traits.hpp"
// Member 'use_state'
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__traits.hpp"
// Member 'cross_request'
#include "j2735_v2x_msgs/msg/detail/personal_crossing_request__traits.hpp"
// Member 'cross_state'
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__traits.hpp"
// Member 'cluster_size'
#include "j2735_v2x_msgs/msg/detail/number_of_participants_in_cluster__traits.hpp"
// Member 'cluster_radius'
#include "j2735_v2x_msgs/msg/detail/personal_cluster_radius__traits.hpp"
// Member 'event_responder_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_event_responder_worker_type__traits.hpp"
// Member 'activity_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_and_road_worker_activity__traits.hpp"
// Member 'activity_sub_type'
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__traits.hpp"
// Member 'assist_type'
#include "j2735_v2x_msgs/msg/detail/personal_assistive__traits.hpp"
// Member 'sizing'
#include "j2735_v2x_msgs/msg/detail/user_size_and_behaviour__traits.hpp"
// Member 'attachment'
#include "j2735_v2x_msgs/msg/detail/attachment__traits.hpp"
// Member 'attachment_radius'
#include "j2735_v2x_msgs/msg/detail/attachment_radius__traits.hpp"
// Member 'animal_type'
#include "j2735_v2x_msgs/msg/detail/animal_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PSM>()
{
  return "j2735_v2x_msgs::msg::PSM";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PSM>()
{
  return "j2735_v2x_msgs/msg/PSM";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PSM>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AccelerationSet4Way>::value && has_fixed_size<j2735_v2x_msgs::msg::AnimalType>::value && has_fixed_size<j2735_v2x_msgs::msg::Attachment>::value && has_fixed_size<j2735_v2x_msgs::msg::AttachmentRadius>::value && has_fixed_size<j2735_v2x_msgs::msg::DSecond>::value && has_fixed_size<j2735_v2x_msgs::msg::Heading>::value && has_fixed_size<j2735_v2x_msgs::msg::MsgCount>::value && has_fixed_size<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster>::value && has_fixed_size<j2735_v2x_msgs::msg::PathHistory>::value && has_fixed_size<j2735_v2x_msgs::msg::PathPrediction>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalAssistive>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalClusterRadius>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalCrossingInProgress>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalCrossingRequest>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalDeviceUsageState>::value && has_fixed_size<j2735_v2x_msgs::msg::PersonalDeviceUserType>::value && has_fixed_size<j2735_v2x_msgs::msg::Position3D>::value && has_fixed_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_fixed_size<j2735_v2x_msgs::msg::PropelledInformation>::value && has_fixed_size<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity>::value && has_fixed_size<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType>::value && has_fixed_size<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType>::value && has_fixed_size<j2735_v2x_msgs::msg::TemporaryID>::value && has_fixed_size<j2735_v2x_msgs::msg::UserSizeAndBehaviour>::value && has_fixed_size<j2735_v2x_msgs::msg::Velocity>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PSM>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AccelerationSet4Way>::value && has_bounded_size<j2735_v2x_msgs::msg::AnimalType>::value && has_bounded_size<j2735_v2x_msgs::msg::Attachment>::value && has_bounded_size<j2735_v2x_msgs::msg::AttachmentRadius>::value && has_bounded_size<j2735_v2x_msgs::msg::DSecond>::value && has_bounded_size<j2735_v2x_msgs::msg::Heading>::value && has_bounded_size<j2735_v2x_msgs::msg::MsgCount>::value && has_bounded_size<j2735_v2x_msgs::msg::NumberOfParticipantsInCluster>::value && has_bounded_size<j2735_v2x_msgs::msg::PathHistory>::value && has_bounded_size<j2735_v2x_msgs::msg::PathPrediction>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalAssistive>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalClusterRadius>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalCrossingInProgress>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalCrossingRequest>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalDeviceUsageState>::value && has_bounded_size<j2735_v2x_msgs::msg::PersonalDeviceUserType>::value && has_bounded_size<j2735_v2x_msgs::msg::Position3D>::value && has_bounded_size<j2735_v2x_msgs::msg::PositionalAccuracy>::value && has_bounded_size<j2735_v2x_msgs::msg::PropelledInformation>::value && has_bounded_size<j2735_v2x_msgs::msg::PublicSafetyAndRoadWorkerActivity>::value && has_bounded_size<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType>::value && has_bounded_size<j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType>::value && has_bounded_size<j2735_v2x_msgs::msg::TemporaryID>::value && has_bounded_size<j2735_v2x_msgs::msg::UserSizeAndBehaviour>::value && has_bounded_size<j2735_v2x_msgs::msg::Velocity>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PSM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PSM__TRAITS_HPP_
