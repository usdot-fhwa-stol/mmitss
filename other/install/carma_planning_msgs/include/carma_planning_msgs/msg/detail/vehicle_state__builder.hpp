// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/vehicle_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleState_prev_steering_cmd
{
public:
  explicit Init_VehicleState_prev_steering_cmd(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::VehicleState prev_steering_cmd(::carma_planning_msgs::msg::VehicleState::_prev_steering_cmd_type arg)
  {
    msg_.prev_steering_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_prev_vel_cmd
{
public:
  explicit Init_VehicleState_prev_vel_cmd(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_prev_steering_cmd prev_vel_cmd(::carma_planning_msgs::msg::VehicleState::_prev_vel_cmd_type arg)
  {
    msg_.prev_vel_cmd = std::move(arg);
    return Init_VehicleState_prev_steering_cmd(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_trailer_angle
{
public:
  explicit Init_VehicleState_trailer_angle(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_prev_vel_cmd trailer_angle(::carma_planning_msgs::msg::VehicleState::_trailer_angle_type arg)
  {
    msg_.trailer_angle = std::move(arg);
    return Init_VehicleState_prev_vel_cmd(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_steering_angle
{
public:
  explicit Init_VehicleState_steering_angle(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_trailer_angle steering_angle(::carma_planning_msgs::msg::VehicleState::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_VehicleState_trailer_angle(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_rear_wheel_rotation_rate
{
public:
  explicit Init_VehicleState_rear_wheel_rotation_rate(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_steering_angle rear_wheel_rotation_rate(::carma_planning_msgs::msg::VehicleState::_rear_wheel_rotation_rate_type arg)
  {
    msg_.rear_wheel_rotation_rate = std::move(arg);
    return Init_VehicleState_steering_angle(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_front_wheel_rotation_rate
{
public:
  explicit Init_VehicleState_front_wheel_rotation_rate(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_rear_wheel_rotation_rate front_wheel_rotation_rate(::carma_planning_msgs::msg::VehicleState::_front_wheel_rotation_rate_type arg)
  {
    msg_.front_wheel_rotation_rate = std::move(arg);
    return Init_VehicleState_rear_wheel_rotation_rate(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_yaw_rate
{
public:
  explicit Init_VehicleState_yaw_rate(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_front_wheel_rotation_rate yaw_rate(::carma_planning_msgs::msg::VehicleState::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_VehicleState_front_wheel_rotation_rate(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_lateral_vel
{
public:
  explicit Init_VehicleState_lateral_vel(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_yaw_rate lateral_vel(::carma_planning_msgs::msg::VehicleState::_lateral_vel_type arg)
  {
    msg_.lateral_vel = std::move(arg);
    return Init_VehicleState_yaw_rate(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_longitudinal_vel
{
public:
  explicit Init_VehicleState_longitudinal_vel(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_lateral_vel longitudinal_vel(::carma_planning_msgs::msg::VehicleState::_longitudinal_vel_type arg)
  {
    msg_.longitudinal_vel = std::move(arg);
    return Init_VehicleState_lateral_vel(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_orientation
{
public:
  explicit Init_VehicleState_orientation(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_longitudinal_vel orientation(::carma_planning_msgs::msg::VehicleState::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_VehicleState_longitudinal_vel(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_y_pos_global
{
public:
  explicit Init_VehicleState_y_pos_global(::carma_planning_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_orientation y_pos_global(::carma_planning_msgs::msg::VehicleState::_y_pos_global_type arg)
  {
    msg_.y_pos_global = std::move(arg);
    return Init_VehicleState_orientation(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_x_pos_global
{
public:
  Init_VehicleState_x_pos_global()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_y_pos_global x_pos_global(::carma_planning_msgs::msg::VehicleState::_x_pos_global_type arg)
  {
    msg_.x_pos_global = std::move(arg);
    return Init_VehicleState_y_pos_global(msg_);
  }

private:
  ::carma_planning_msgs::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::VehicleState>()
{
  return carma_planning_msgs::msg::builder::Init_VehicleState_x_pos_global();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
