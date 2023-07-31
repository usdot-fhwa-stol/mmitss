// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/movement_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementState_maneuver_assist_list_exists
{
public:
  explicit Init_MovementState_maneuver_assist_list_exists(::carma_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::MovementState maneuver_assist_list_exists(::carma_v2x_msgs::msg::MovementState::_maneuver_assist_list_exists_type arg)
  {
    msg_.maneuver_assist_list_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_connection_maneuver_assist_list
{
public:
  explicit Init_MovementState_connection_maneuver_assist_list(::carma_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_maneuver_assist_list_exists connection_maneuver_assist_list(::carma_v2x_msgs::msg::MovementState::_connection_maneuver_assist_list_type arg)
  {
    msg_.connection_maneuver_assist_list = std::move(arg);
    return Init_MovementState_maneuver_assist_list_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_movement_event_list
{
public:
  explicit Init_MovementState_movement_event_list(::carma_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_connection_maneuver_assist_list movement_event_list(::carma_v2x_msgs::msg::MovementState::_movement_event_list_type arg)
  {
    msg_.movement_event_list = std::move(arg);
    return Init_MovementState_connection_maneuver_assist_list(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_signal_group
{
public:
  explicit Init_MovementState_signal_group(::carma_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_movement_event_list signal_group(::carma_v2x_msgs::msg::MovementState::_signal_group_type arg)
  {
    msg_.signal_group = std::move(arg);
    return Init_MovementState_movement_event_list(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_movement_name_exists
{
public:
  explicit Init_MovementState_movement_name_exists(::carma_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_signal_group movement_name_exists(::carma_v2x_msgs::msg::MovementState::_movement_name_exists_type arg)
  {
    msg_.movement_name_exists = std::move(arg);
    return Init_MovementState_signal_group(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_movement_name
{
public:
  Init_MovementState_movement_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementState_movement_name_exists movement_name(::carma_v2x_msgs::msg::MovementState::_movement_name_type arg)
  {
    msg_.movement_name = std::move(arg);
    return Init_MovementState_movement_name_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::MovementState>()
{
  return carma_v2x_msgs::msg::builder::Init_MovementState_movement_name();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_
