// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/movement_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementEvent_speeds_exists
{
public:
  explicit Init_MovementEvent_speeds_exists(::carma_v2x_msgs::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::MovementEvent speeds_exists(::carma_v2x_msgs::msg::MovementEvent::_speeds_exists_type arg)
  {
    msg_.speeds_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementEvent msg_;
};

class Init_MovementEvent_advisory_speed_list
{
public:
  explicit Init_MovementEvent_advisory_speed_list(::carma_v2x_msgs::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  Init_MovementEvent_speeds_exists advisory_speed_list(::carma_v2x_msgs::msg::MovementEvent::_advisory_speed_list_type arg)
  {
    msg_.advisory_speed_list = std::move(arg);
    return Init_MovementEvent_speeds_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementEvent msg_;
};

class Init_MovementEvent_timing_exists
{
public:
  explicit Init_MovementEvent_timing_exists(::carma_v2x_msgs::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  Init_MovementEvent_advisory_speed_list timing_exists(::carma_v2x_msgs::msg::MovementEvent::_timing_exists_type arg)
  {
    msg_.timing_exists = std::move(arg);
    return Init_MovementEvent_advisory_speed_list(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementEvent msg_;
};

class Init_MovementEvent_timing
{
public:
  explicit Init_MovementEvent_timing(::carma_v2x_msgs::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  Init_MovementEvent_timing_exists timing(::carma_v2x_msgs::msg::MovementEvent::_timing_type arg)
  {
    msg_.timing = std::move(arg);
    return Init_MovementEvent_timing_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementEvent msg_;
};

class Init_MovementEvent_event_state
{
public:
  Init_MovementEvent_event_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementEvent_timing event_state(::carma_v2x_msgs::msg::MovementEvent::_event_state_type arg)
  {
    msg_.event_state = std::move(arg);
    return Init_MovementEvent_timing(msg_);
  }

private:
  ::carma_v2x_msgs::msg::MovementEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::MovementEvent>()
{
  return carma_v2x_msgs::msg::builder::Init_MovementEvent_event_state();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_
