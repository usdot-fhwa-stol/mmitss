// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/computed_lane__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ComputedLane_scale_y_axis_exists
{
public:
  explicit Init_ComputedLane_scale_y_axis_exists(::carma_v2x_msgs::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::ComputedLane scale_y_axis_exists(::carma_v2x_msgs::msg::ComputedLane::_scale_y_axis_exists_type arg)
  {
    msg_.scale_y_axis_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ComputedLane msg_;
};

class Init_ComputedLane_scale_y_axis
{
public:
  explicit Init_ComputedLane_scale_y_axis(::carma_v2x_msgs::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_scale_y_axis_exists scale_y_axis(::carma_v2x_msgs::msg::ComputedLane::_scale_y_axis_type arg)
  {
    msg_.scale_y_axis = std::move(arg);
    return Init_ComputedLane_scale_y_axis_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ComputedLane msg_;
};

class Init_ComputedLane_scale_x_axis_exists
{
public:
  explicit Init_ComputedLane_scale_x_axis_exists(::carma_v2x_msgs::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_scale_y_axis scale_x_axis_exists(::carma_v2x_msgs::msg::ComputedLane::_scale_x_axis_exists_type arg)
  {
    msg_.scale_x_axis_exists = std::move(arg);
    return Init_ComputedLane_scale_y_axis(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ComputedLane msg_;
};

class Init_ComputedLane_scale_x_axis
{
public:
  explicit Init_ComputedLane_scale_x_axis(::carma_v2x_msgs::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_scale_x_axis_exists scale_x_axis(::carma_v2x_msgs::msg::ComputedLane::_scale_x_axis_type arg)
  {
    msg_.scale_x_axis = std::move(arg);
    return Init_ComputedLane_scale_x_axis_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ComputedLane msg_;
};

class Init_ComputedLane_rotatexy_exists
{
public:
  explicit Init_ComputedLane_rotatexy_exists(::carma_v2x_msgs::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_scale_x_axis rotatexy_exists(::carma_v2x_msgs::msg::ComputedLane::_rotatexy_exists_type arg)
  {
    msg_.rotatexy_exists = std::move(arg);
    return Init_ComputedLane_scale_x_axis(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ComputedLane msg_;
};

class Init_ComputedLane_rotate_xy
{
public:
  explicit Init_ComputedLane_rotate_xy(::carma_v2x_msgs::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_rotatexy_exists rotate_xy(::carma_v2x_msgs::msg::ComputedLane::_rotate_xy_type arg)
  {
    msg_.rotate_xy = std::move(arg);
    return Init_ComputedLane_rotatexy_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ComputedLane msg_;
};

class Init_ComputedLane_offset_y_axis
{
public:
  explicit Init_ComputedLane_offset_y_axis(::carma_v2x_msgs::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_rotate_xy offset_y_axis(::carma_v2x_msgs::msg::ComputedLane::_offset_y_axis_type arg)
  {
    msg_.offset_y_axis = std::move(arg);
    return Init_ComputedLane_rotate_xy(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ComputedLane msg_;
};

class Init_ComputedLane_offset_x_axis
{
public:
  explicit Init_ComputedLane_offset_x_axis(::carma_v2x_msgs::msg::ComputedLane & msg)
  : msg_(msg)
  {}
  Init_ComputedLane_offset_y_axis offset_x_axis(::carma_v2x_msgs::msg::ComputedLane::_offset_x_axis_type arg)
  {
    msg_.offset_x_axis = std::move(arg);
    return Init_ComputedLane_offset_y_axis(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ComputedLane msg_;
};

class Init_ComputedLane_reference_lane_id
{
public:
  Init_ComputedLane_reference_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputedLane_offset_x_axis reference_lane_id(::carma_v2x_msgs::msg::ComputedLane::_reference_lane_id_type arg)
  {
    msg_.reference_lane_id = std::move(arg);
    return Init_ComputedLane_offset_x_axis(msg_);
  }

private:
  ::carma_v2x_msgs::msg::ComputedLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::ComputedLane>()
{
  return carma_v2x_msgs::msg::builder::Init_ComputedLane_reference_lane_id();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__COMPUTED_LANE__BUILDER_HPP_
