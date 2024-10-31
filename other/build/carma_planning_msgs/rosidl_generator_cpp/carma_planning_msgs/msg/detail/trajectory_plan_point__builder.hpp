// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/TrajectoryPlanPoint.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN_POINT__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN_POINT__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/trajectory_plan_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPlanPoint_planner_plugin_name
{
public:
  explicit Init_TrajectoryPlanPoint_planner_plugin_name(::carma_planning_msgs::msg::TrajectoryPlanPoint & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::TrajectoryPlanPoint planner_plugin_name(::carma_planning_msgs::msg::TrajectoryPlanPoint::_planner_plugin_name_type arg)
  {
    msg_.planner_plugin_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlanPoint msg_;
};

class Init_TrajectoryPlanPoint_controller_plugin_name
{
public:
  explicit Init_TrajectoryPlanPoint_controller_plugin_name(::carma_planning_msgs::msg::TrajectoryPlanPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanPoint_planner_plugin_name controller_plugin_name(::carma_planning_msgs::msg::TrajectoryPlanPoint::_controller_plugin_name_type arg)
  {
    msg_.controller_plugin_name = std::move(arg);
    return Init_TrajectoryPlanPoint_planner_plugin_name(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlanPoint msg_;
};

class Init_TrajectoryPlanPoint_lane_id
{
public:
  explicit Init_TrajectoryPlanPoint_lane_id(::carma_planning_msgs::msg::TrajectoryPlanPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanPoint_controller_plugin_name lane_id(::carma_planning_msgs::msg::TrajectoryPlanPoint::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_TrajectoryPlanPoint_controller_plugin_name(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlanPoint msg_;
};

class Init_TrajectoryPlanPoint_target_time
{
public:
  explicit Init_TrajectoryPlanPoint_target_time(::carma_planning_msgs::msg::TrajectoryPlanPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanPoint_lane_id target_time(::carma_planning_msgs::msg::TrajectoryPlanPoint::_target_time_type arg)
  {
    msg_.target_time = std::move(arg);
    return Init_TrajectoryPlanPoint_lane_id(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlanPoint msg_;
};

class Init_TrajectoryPlanPoint_yaw
{
public:
  explicit Init_TrajectoryPlanPoint_yaw(::carma_planning_msgs::msg::TrajectoryPlanPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanPoint_target_time yaw(::carma_planning_msgs::msg::TrajectoryPlanPoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_TrajectoryPlanPoint_target_time(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlanPoint msg_;
};

class Init_TrajectoryPlanPoint_y
{
public:
  explicit Init_TrajectoryPlanPoint_y(::carma_planning_msgs::msg::TrajectoryPlanPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPlanPoint_yaw y(::carma_planning_msgs::msg::TrajectoryPlanPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TrajectoryPlanPoint_yaw(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlanPoint msg_;
};

class Init_TrajectoryPlanPoint_x
{
public:
  Init_TrajectoryPlanPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPlanPoint_y x(::carma_planning_msgs::msg::TrajectoryPlanPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TrajectoryPlanPoint_y(msg_);
  }

private:
  ::carma_planning_msgs::msg::TrajectoryPlanPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::TrajectoryPlanPoint>()
{
  return carma_planning_msgs::msg::builder::Init_TrajectoryPlanPoint_x();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN_POINT__BUILDER_HPP_
