// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/PivotPointDescription.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/pivot_point_description__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PivotPointDescription_pivots
{
public:
  explicit Init_PivotPointDescription_pivots(::carma_v2x_msgs::msg::PivotPointDescription & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::PivotPointDescription pivots(::carma_v2x_msgs::msg::PivotPointDescription::_pivots_type arg)
  {
    msg_.pivots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PivotPointDescription msg_;
};

class Init_PivotPointDescription_pivot_angle
{
public:
  explicit Init_PivotPointDescription_pivot_angle(::carma_v2x_msgs::msg::PivotPointDescription & msg)
  : msg_(msg)
  {}
  Init_PivotPointDescription_pivots pivot_angle(::carma_v2x_msgs::msg::PivotPointDescription::_pivot_angle_type arg)
  {
    msg_.pivot_angle = std::move(arg);
    return Init_PivotPointDescription_pivots(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PivotPointDescription msg_;
};

class Init_PivotPointDescription_pivot_offset
{
public:
  Init_PivotPointDescription_pivot_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PivotPointDescription_pivot_angle pivot_offset(::carma_v2x_msgs::msg::PivotPointDescription::_pivot_offset_type arg)
  {
    msg_.pivot_offset = std::move(arg);
    return Init_PivotPointDescription_pivot_angle(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PivotPointDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::PivotPointDescription>()
{
  return carma_v2x_msgs::msg::builder::Init_PivotPointDescription_pivot_offset();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PIVOT_POINT_DESCRIPTION__BUILDER_HPP_
