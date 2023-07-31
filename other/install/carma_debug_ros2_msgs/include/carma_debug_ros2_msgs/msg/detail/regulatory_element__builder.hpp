// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_debug_ros2_msgs:msg/RegulatoryElement.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__BUILDER_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__BUILDER_HPP_

#include "carma_debug_ros2_msgs/msg/detail/regulatory_element__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_RegulatoryElement_reason
{
public:
  explicit Init_RegulatoryElement_reason(::carma_debug_ros2_msgs::msg::RegulatoryElement & msg)
  : msg_(msg)
  {}
  ::carma_debug_ros2_msgs::msg::RegulatoryElement reason(::carma_debug_ros2_msgs::msg::RegulatoryElement::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::RegulatoryElement msg_;
};

class Init_RegulatoryElement_right_participants
{
public:
  explicit Init_RegulatoryElement_right_participants(::carma_debug_ros2_msgs::msg::RegulatoryElement & msg)
  : msg_(msg)
  {}
  Init_RegulatoryElement_reason right_participants(::carma_debug_ros2_msgs::msg::RegulatoryElement::_right_participants_type arg)
  {
    msg_.right_participants = std::move(arg);
    return Init_RegulatoryElement_reason(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::RegulatoryElement msg_;
};

class Init_RegulatoryElement_left_participants
{
public:
  explicit Init_RegulatoryElement_left_participants(::carma_debug_ros2_msgs::msg::RegulatoryElement & msg)
  : msg_(msg)
  {}
  Init_RegulatoryElement_right_participants left_participants(::carma_debug_ros2_msgs::msg::RegulatoryElement::_left_participants_type arg)
  {
    msg_.left_participants = std::move(arg);
    return Init_RegulatoryElement_right_participants(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::RegulatoryElement msg_;
};

class Init_RegulatoryElement_direction
{
public:
  explicit Init_RegulatoryElement_direction(::carma_debug_ros2_msgs::msg::RegulatoryElement & msg)
  : msg_(msg)
  {}
  Init_RegulatoryElement_left_participants direction(::carma_debug_ros2_msgs::msg::RegulatoryElement::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_RegulatoryElement_left_participants(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::RegulatoryElement msg_;
};

class Init_RegulatoryElement_speed_limit
{
public:
  explicit Init_RegulatoryElement_speed_limit(::carma_debug_ros2_msgs::msg::RegulatoryElement & msg)
  : msg_(msg)
  {}
  Init_RegulatoryElement_direction speed_limit(::carma_debug_ros2_msgs::msg::RegulatoryElement::_speed_limit_type arg)
  {
    msg_.speed_limit = std::move(arg);
    return Init_RegulatoryElement_direction(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::RegulatoryElement msg_;
};

class Init_RegulatoryElement_min_gap
{
public:
  explicit Init_RegulatoryElement_min_gap(::carma_debug_ros2_msgs::msg::RegulatoryElement & msg)
  : msg_(msg)
  {}
  Init_RegulatoryElement_speed_limit min_gap(::carma_debug_ros2_msgs::msg::RegulatoryElement::_min_gap_type arg)
  {
    msg_.min_gap = std::move(arg);
    return Init_RegulatoryElement_speed_limit(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::RegulatoryElement msg_;
};

class Init_RegulatoryElement_unsupported_type
{
public:
  explicit Init_RegulatoryElement_unsupported_type(::carma_debug_ros2_msgs::msg::RegulatoryElement & msg)
  : msg_(msg)
  {}
  Init_RegulatoryElement_min_gap unsupported_type(::carma_debug_ros2_msgs::msg::RegulatoryElement::_unsupported_type_type arg)
  {
    msg_.unsupported_type = std::move(arg);
    return Init_RegulatoryElement_min_gap(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::RegulatoryElement msg_;
};

class Init_RegulatoryElement_participants
{
public:
  explicit Init_RegulatoryElement_participants(::carma_debug_ros2_msgs::msg::RegulatoryElement & msg)
  : msg_(msg)
  {}
  Init_RegulatoryElement_unsupported_type participants(::carma_debug_ros2_msgs::msg::RegulatoryElement::_participants_type arg)
  {
    msg_.participants = std::move(arg);
    return Init_RegulatoryElement_unsupported_type(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::RegulatoryElement msg_;
};

class Init_RegulatoryElement_rule_name
{
public:
  Init_RegulatoryElement_rule_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegulatoryElement_participants rule_name(::carma_debug_ros2_msgs::msg::RegulatoryElement::_rule_name_type arg)
  {
    msg_.rule_name = std::move(arg);
    return Init_RegulatoryElement_participants(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::RegulatoryElement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_debug_ros2_msgs::msg::RegulatoryElement>()
{
  return carma_debug_ros2_msgs::msg::builder::Init_RegulatoryElement_rule_name();
}

}  // namespace carma_debug_ros2_msgs

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__REGULATORY_ELEMENT__BUILDER_HPP_
