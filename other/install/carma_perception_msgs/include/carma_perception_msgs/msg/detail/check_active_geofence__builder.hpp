// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__BUILDER_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__BUILDER_HPP_

#include "carma_perception_msgs/msg/detail/check_active_geofence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_CheckActiveGeofence_advisory_speed
{
public:
  explicit Init_CheckActiveGeofence_advisory_speed(::carma_perception_msgs::msg::CheckActiveGeofence & msg)
  : msg_(msg)
  {}
  ::carma_perception_msgs::msg::CheckActiveGeofence advisory_speed(::carma_perception_msgs::msg::CheckActiveGeofence::_advisory_speed_type arg)
  {
    msg_.advisory_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_perception_msgs::msg::CheckActiveGeofence msg_;
};

class Init_CheckActiveGeofence_minimum_gap
{
public:
  explicit Init_CheckActiveGeofence_minimum_gap(::carma_perception_msgs::msg::CheckActiveGeofence & msg)
  : msg_(msg)
  {}
  Init_CheckActiveGeofence_advisory_speed minimum_gap(::carma_perception_msgs::msg::CheckActiveGeofence::_minimum_gap_type arg)
  {
    msg_.minimum_gap = std::move(arg);
    return Init_CheckActiveGeofence_advisory_speed(msg_);
  }

private:
  ::carma_perception_msgs::msg::CheckActiveGeofence msg_;
};

class Init_CheckActiveGeofence_distance_to_next_geofence
{
public:
  explicit Init_CheckActiveGeofence_distance_to_next_geofence(::carma_perception_msgs::msg::CheckActiveGeofence & msg)
  : msg_(msg)
  {}
  Init_CheckActiveGeofence_minimum_gap distance_to_next_geofence(::carma_perception_msgs::msg::CheckActiveGeofence::_distance_to_next_geofence_type arg)
  {
    msg_.distance_to_next_geofence = std::move(arg);
    return Init_CheckActiveGeofence_minimum_gap(msg_);
  }

private:
  ::carma_perception_msgs::msg::CheckActiveGeofence msg_;
};

class Init_CheckActiveGeofence_value
{
public:
  explicit Init_CheckActiveGeofence_value(::carma_perception_msgs::msg::CheckActiveGeofence & msg)
  : msg_(msg)
  {}
  Init_CheckActiveGeofence_distance_to_next_geofence value(::carma_perception_msgs::msg::CheckActiveGeofence::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_CheckActiveGeofence_distance_to_next_geofence(msg_);
  }

private:
  ::carma_perception_msgs::msg::CheckActiveGeofence msg_;
};

class Init_CheckActiveGeofence_reason
{
public:
  explicit Init_CheckActiveGeofence_reason(::carma_perception_msgs::msg::CheckActiveGeofence & msg)
  : msg_(msg)
  {}
  Init_CheckActiveGeofence_value reason(::carma_perception_msgs::msg::CheckActiveGeofence::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_CheckActiveGeofence_value(msg_);
  }

private:
  ::carma_perception_msgs::msg::CheckActiveGeofence msg_;
};

class Init_CheckActiveGeofence_type
{
public:
  explicit Init_CheckActiveGeofence_type(::carma_perception_msgs::msg::CheckActiveGeofence & msg)
  : msg_(msg)
  {}
  Init_CheckActiveGeofence_reason type(::carma_perception_msgs::msg::CheckActiveGeofence::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CheckActiveGeofence_reason(msg_);
  }

private:
  ::carma_perception_msgs::msg::CheckActiveGeofence msg_;
};

class Init_CheckActiveGeofence_is_on_active_geofence
{
public:
  Init_CheckActiveGeofence_is_on_active_geofence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckActiveGeofence_type is_on_active_geofence(::carma_perception_msgs::msg::CheckActiveGeofence::_is_on_active_geofence_type arg)
  {
    msg_.is_on_active_geofence = std::move(arg);
    return Init_CheckActiveGeofence_type(msg_);
  }

private:
  ::carma_perception_msgs::msg::CheckActiveGeofence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_perception_msgs::msg::CheckActiveGeofence>()
{
  return carma_perception_msgs::msg::builder::Init_CheckActiveGeofence_is_on_active_geofence();
}

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__CHECK_ACTIVE_GEOFENCE__BUILDER_HPP_
