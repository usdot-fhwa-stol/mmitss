// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/PlatooningInfo.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__PLATOONING_INFO__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__PLATOONING_INFO__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/platooning_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PlatooningInfo_create_gap_adjuster
{
public:
  explicit Init_PlatooningInfo_create_gap_adjuster(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::PlatooningInfo create_gap_adjuster(::carma_planning_msgs::msg::PlatooningInfo::_create_gap_adjuster_type arg)
  {
    msg_.create_gap_adjuster = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_is_create_gap
{
public:
  explicit Init_PlatooningInfo_is_create_gap(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_create_gap_adjuster is_create_gap(::carma_planning_msgs::msg::PlatooningInfo::_is_create_gap_type arg)
  {
    msg_.is_create_gap = std::move(arg);
    return Init_PlatooningInfo_create_gap_adjuster(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_predecessor_position
{
public:
  explicit Init_PlatooningInfo_predecessor_position(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_is_create_gap predecessor_position(::carma_planning_msgs::msg::PlatooningInfo::_predecessor_position_type arg)
  {
    msg_.predecessor_position = std::move(arg);
    return Init_PlatooningInfo_is_create_gap(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_predecessor_speed
{
public:
  explicit Init_PlatooningInfo_predecessor_speed(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_predecessor_position predecessor_speed(::carma_planning_msgs::msg::PlatooningInfo::_predecessor_speed_type arg)
  {
    msg_.predecessor_speed = std::move(arg);
    return Init_PlatooningInfo_predecessor_position(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_current_predecessor_time_headway_sum
{
public:
  explicit Init_PlatooningInfo_current_predecessor_time_headway_sum(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_predecessor_speed current_predecessor_time_headway_sum(::carma_planning_msgs::msg::PlatooningInfo::_current_predecessor_time_headway_sum_type arg)
  {
    msg_.current_predecessor_time_headway_sum = std::move(arg);
    return Init_PlatooningInfo_predecessor_speed(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_actual_gap
{
public:
  explicit Init_PlatooningInfo_actual_gap(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_current_predecessor_time_headway_sum actual_gap(::carma_planning_msgs::msg::PlatooningInfo::_actual_gap_type arg)
  {
    msg_.actual_gap = std::move(arg);
    return Init_PlatooningInfo_current_predecessor_time_headway_sum(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_desired_gap
{
public:
  explicit Init_PlatooningInfo_desired_gap(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_actual_gap desired_gap(::carma_planning_msgs::msg::PlatooningInfo::_desired_gap_type arg)
  {
    msg_.desired_gap = std::move(arg);
    return Init_PlatooningInfo_actual_gap(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_host_cmd_speed
{
public:
  explicit Init_PlatooningInfo_host_cmd_speed(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_desired_gap host_cmd_speed(::carma_planning_msgs::msg::PlatooningInfo::_host_cmd_speed_type arg)
  {
    msg_.host_cmd_speed = std::move(arg);
    return Init_PlatooningInfo_desired_gap(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_host_platoon_position
{
public:
  explicit Init_PlatooningInfo_host_platoon_position(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_host_cmd_speed host_platoon_position(::carma_planning_msgs::msg::PlatooningInfo::_host_platoon_position_type arg)
  {
    msg_.host_platoon_position = std::move(arg);
    return Init_PlatooningInfo_host_cmd_speed(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_leader_cmd_speed
{
public:
  explicit Init_PlatooningInfo_leader_cmd_speed(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_host_platoon_position leader_cmd_speed(::carma_planning_msgs::msg::PlatooningInfo::_leader_cmd_speed_type arg)
  {
    msg_.leader_cmd_speed = std::move(arg);
    return Init_PlatooningInfo_host_platoon_position(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_leader_downtrack_distance
{
public:
  explicit Init_PlatooningInfo_leader_downtrack_distance(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_leader_cmd_speed leader_downtrack_distance(::carma_planning_msgs::msg::PlatooningInfo::_leader_downtrack_distance_type arg)
  {
    msg_.leader_downtrack_distance = std::move(arg);
    return Init_PlatooningInfo_leader_cmd_speed(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_leader_id
{
public:
  explicit Init_PlatooningInfo_leader_id(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_leader_downtrack_distance leader_id(::carma_planning_msgs::msg::PlatooningInfo::_leader_id_type arg)
  {
    msg_.leader_id = std::move(arg);
    return Init_PlatooningInfo_leader_downtrack_distance(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_size_limit
{
public:
  explicit Init_PlatooningInfo_size_limit(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_leader_id size_limit(::carma_planning_msgs::msg::PlatooningInfo::_size_limit_type arg)
  {
    msg_.size_limit = std::move(arg);
    return Init_PlatooningInfo_leader_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_size
{
public:
  explicit Init_PlatooningInfo_size(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_size_limit size(::carma_planning_msgs::msg::PlatooningInfo::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_PlatooningInfo_size_limit(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_platoon_id
{
public:
  explicit Init_PlatooningInfo_platoon_id(::carma_planning_msgs::msg::PlatooningInfo & msg)
  : msg_(msg)
  {}
  Init_PlatooningInfo_size platoon_id(::carma_planning_msgs::msg::PlatooningInfo::_platoon_id_type arg)
  {
    msg_.platoon_id = std::move(arg);
    return Init_PlatooningInfo_size(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

class Init_PlatooningInfo_state
{
public:
  Init_PlatooningInfo_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlatooningInfo_platoon_id state(::carma_planning_msgs::msg::PlatooningInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_PlatooningInfo_platoon_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::PlatooningInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::PlatooningInfo>()
{
  return carma_planning_msgs::msg::builder::Init_PlatooningInfo_state();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__PLATOONING_INFO__BUILDER_HPP_
