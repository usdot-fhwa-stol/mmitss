// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/lane_data_attribute__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneDataAttribute_speed_limits
{
public:
  explicit Init_LaneDataAttribute_speed_limits(::carma_v2x_msgs::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::LaneDataAttribute speed_limits(::carma_v2x_msgs::msg::LaneDataAttribute::_speed_limits_type arg)
  {
    msg_.speed_limits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_lane_angle
{
public:
  explicit Init_LaneDataAttribute_lane_angle(::carma_v2x_msgs::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  Init_LaneDataAttribute_speed_limits lane_angle(::carma_v2x_msgs::msg::LaneDataAttribute::_lane_angle_type arg)
  {
    msg_.lane_angle = std::move(arg);
    return Init_LaneDataAttribute_speed_limits(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_lane_crown_point_left
{
public:
  explicit Init_LaneDataAttribute_lane_crown_point_left(::carma_v2x_msgs::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  Init_LaneDataAttribute_lane_angle lane_crown_point_left(::carma_v2x_msgs::msg::LaneDataAttribute::_lane_crown_point_left_type arg)
  {
    msg_.lane_crown_point_left = std::move(arg);
    return Init_LaneDataAttribute_lane_angle(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_lane_crown_point_right
{
public:
  explicit Init_LaneDataAttribute_lane_crown_point_right(::carma_v2x_msgs::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  Init_LaneDataAttribute_lane_crown_point_left lane_crown_point_right(::carma_v2x_msgs::msg::LaneDataAttribute::_lane_crown_point_right_type arg)
  {
    msg_.lane_crown_point_right = std::move(arg);
    return Init_LaneDataAttribute_lane_crown_point_left(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_lane_crown_point_center
{
public:
  explicit Init_LaneDataAttribute_lane_crown_point_center(::carma_v2x_msgs::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  Init_LaneDataAttribute_lane_crown_point_right lane_crown_point_center(::carma_v2x_msgs::msg::LaneDataAttribute::_lane_crown_point_center_type arg)
  {
    msg_.lane_crown_point_center = std::move(arg);
    return Init_LaneDataAttribute_lane_crown_point_right(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_path_end_point_angle
{
public:
  explicit Init_LaneDataAttribute_path_end_point_angle(::carma_v2x_msgs::msg::LaneDataAttribute & msg)
  : msg_(msg)
  {}
  Init_LaneDataAttribute_lane_crown_point_center path_end_point_angle(::carma_v2x_msgs::msg::LaneDataAttribute::_path_end_point_angle_type arg)
  {
    msg_.path_end_point_angle = std::move(arg);
    return Init_LaneDataAttribute_lane_crown_point_center(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LaneDataAttribute msg_;
};

class Init_LaneDataAttribute_choice
{
public:
  Init_LaneDataAttribute_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneDataAttribute_path_end_point_angle choice(::carma_v2x_msgs::msg::LaneDataAttribute::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_LaneDataAttribute_path_end_point_angle(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LaneDataAttribute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::LaneDataAttribute>()
{
  return carma_v2x_msgs::msg::builder::Init_LaneDataAttribute_choice();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__BUILDER_HPP_
