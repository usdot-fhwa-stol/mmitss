// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/intersection_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionState_maneuever_assist_list_exists
{
public:
  explicit Init_IntersectionState_maneuever_assist_list_exists(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::IntersectionState maneuever_assist_list_exists(::carma_v2x_msgs::msg::IntersectionState::_maneuever_assist_list_exists_type arg)
  {
    msg_.maneuever_assist_list_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_connection_maneuver_assist_list
{
public:
  explicit Init_IntersectionState_connection_maneuver_assist_list(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_maneuever_assist_list_exists connection_maneuver_assist_list(::carma_v2x_msgs::msg::IntersectionState::_connection_maneuver_assist_list_type arg)
  {
    msg_.connection_maneuver_assist_list = std::move(arg);
    return Init_IntersectionState_maneuever_assist_list_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_movement_list
{
public:
  explicit Init_IntersectionState_movement_list(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_connection_maneuver_assist_list movement_list(::carma_v2x_msgs::msg::IntersectionState::_movement_list_type arg)
  {
    msg_.movement_list = std::move(arg);
    return Init_IntersectionState_connection_maneuver_assist_list(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_enabled_lanes_exists
{
public:
  explicit Init_IntersectionState_enabled_lanes_exists(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_movement_list enabled_lanes_exists(::carma_v2x_msgs::msg::IntersectionState::_enabled_lanes_exists_type arg)
  {
    msg_.enabled_lanes_exists = std::move(arg);
    return Init_IntersectionState_movement_list(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_lane_id_list
{
public:
  explicit Init_IntersectionState_lane_id_list(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_enabled_lanes_exists lane_id_list(::carma_v2x_msgs::msg::IntersectionState::_lane_id_list_type arg)
  {
    msg_.lane_id_list = std::move(arg);
    return Init_IntersectionState_enabled_lanes_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_time_stamp_exists
{
public:
  explicit Init_IntersectionState_time_stamp_exists(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_lane_id_list time_stamp_exists(::carma_v2x_msgs::msg::IntersectionState::_time_stamp_exists_type arg)
  {
    msg_.time_stamp_exists = std::move(arg);
    return Init_IntersectionState_lane_id_list(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_time_stamp
{
public:
  explicit Init_IntersectionState_time_stamp(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_time_stamp_exists time_stamp(::carma_v2x_msgs::msg::IntersectionState::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_IntersectionState_time_stamp_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_moy_exists
{
public:
  explicit Init_IntersectionState_moy_exists(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_time_stamp moy_exists(::carma_v2x_msgs::msg::IntersectionState::_moy_exists_type arg)
  {
    msg_.moy_exists = std::move(arg);
    return Init_IntersectionState_time_stamp(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_moy
{
public:
  explicit Init_IntersectionState_moy(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_moy_exists moy(::carma_v2x_msgs::msg::IntersectionState::_moy_type arg)
  {
    msg_.moy = std::move(arg);
    return Init_IntersectionState_moy_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_status
{
public:
  explicit Init_IntersectionState_status(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_moy status(::carma_v2x_msgs::msg::IntersectionState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_IntersectionState_moy(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_revision
{
public:
  explicit Init_IntersectionState_revision(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_status revision(::carma_v2x_msgs::msg::IntersectionState::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_IntersectionState_status(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_id
{
public:
  explicit Init_IntersectionState_id(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_revision id(::carma_v2x_msgs::msg::IntersectionState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IntersectionState_revision(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_name_exists
{
public:
  explicit Init_IntersectionState_name_exists(::carma_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_id name_exists(::carma_v2x_msgs::msg::IntersectionState::_name_exists_type arg)
  {
    msg_.name_exists = std::move(arg);
    return Init_IntersectionState_id(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_name
{
public:
  Init_IntersectionState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionState_name_exists name(::carma_v2x_msgs::msg::IntersectionState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IntersectionState_name_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::IntersectionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::IntersectionState>()
{
  return carma_v2x_msgs::msg::builder::Init_IntersectionState_name();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_
