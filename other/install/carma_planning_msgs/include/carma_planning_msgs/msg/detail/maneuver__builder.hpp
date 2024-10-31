// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/maneuver__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Maneuver_stop_and_wait_maneuver
{
public:
  explicit Init_Maneuver_stop_and_wait_maneuver(::carma_planning_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::Maneuver stop_and_wait_maneuver(::carma_planning_msgs::msg::Maneuver::_stop_and_wait_maneuver_type arg)
  {
    msg_.stop_and_wait_maneuver = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_intersection_transit_right_turn_maneuver
{
public:
  explicit Init_Maneuver_intersection_transit_right_turn_maneuver(::carma_planning_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_stop_and_wait_maneuver intersection_transit_right_turn_maneuver(::carma_planning_msgs::msg::Maneuver::_intersection_transit_right_turn_maneuver_type arg)
  {
    msg_.intersection_transit_right_turn_maneuver = std::move(arg);
    return Init_Maneuver_stop_and_wait_maneuver(msg_);
  }

private:
  ::carma_planning_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_intersection_transit_left_turn_maneuver
{
public:
  explicit Init_Maneuver_intersection_transit_left_turn_maneuver(::carma_planning_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_intersection_transit_right_turn_maneuver intersection_transit_left_turn_maneuver(::carma_planning_msgs::msg::Maneuver::_intersection_transit_left_turn_maneuver_type arg)
  {
    msg_.intersection_transit_left_turn_maneuver = std::move(arg);
    return Init_Maneuver_intersection_transit_right_turn_maneuver(msg_);
  }

private:
  ::carma_planning_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_intersection_transit_straight_maneuver
{
public:
  explicit Init_Maneuver_intersection_transit_straight_maneuver(::carma_planning_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_intersection_transit_left_turn_maneuver intersection_transit_straight_maneuver(::carma_planning_msgs::msg::Maneuver::_intersection_transit_straight_maneuver_type arg)
  {
    msg_.intersection_transit_straight_maneuver = std::move(arg);
    return Init_Maneuver_intersection_transit_left_turn_maneuver(msg_);
  }

private:
  ::carma_planning_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_lane_change_maneuver
{
public:
  explicit Init_Maneuver_lane_change_maneuver(::carma_planning_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_intersection_transit_straight_maneuver lane_change_maneuver(::carma_planning_msgs::msg::Maneuver::_lane_change_maneuver_type arg)
  {
    msg_.lane_change_maneuver = std::move(arg);
    return Init_Maneuver_intersection_transit_straight_maneuver(msg_);
  }

private:
  ::carma_planning_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_lane_following_maneuver
{
public:
  explicit Init_Maneuver_lane_following_maneuver(::carma_planning_msgs::msg::Maneuver & msg)
  : msg_(msg)
  {}
  Init_Maneuver_lane_change_maneuver lane_following_maneuver(::carma_planning_msgs::msg::Maneuver::_lane_following_maneuver_type arg)
  {
    msg_.lane_following_maneuver = std::move(arg);
    return Init_Maneuver_lane_change_maneuver(msg_);
  }

private:
  ::carma_planning_msgs::msg::Maneuver msg_;
};

class Init_Maneuver_type
{
public:
  Init_Maneuver_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Maneuver_lane_following_maneuver type(::carma_planning_msgs::msg::Maneuver::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Maneuver_lane_following_maneuver(msg_);
  }

private:
  ::carma_planning_msgs::msg::Maneuver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::Maneuver>()
{
  return carma_planning_msgs::msg::builder::Init_Maneuver_type();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER__BUILDER_HPP_
