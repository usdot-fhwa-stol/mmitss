// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/PositionOffsetXYZ.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/position_offset_xyz__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionOffsetXYZ_offset_z
{
public:
  explicit Init_PositionOffsetXYZ_offset_z(::j3224_v2x_msgs::msg::PositionOffsetXYZ & msg)
  : msg_(msg)
  {}
  ::j3224_v2x_msgs::msg::PositionOffsetXYZ offset_z(::j3224_v2x_msgs::msg::PositionOffsetXYZ::_offset_z_type arg)
  {
    msg_.offset_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::PositionOffsetXYZ msg_;
};

class Init_PositionOffsetXYZ_presence_vector
{
public:
  explicit Init_PositionOffsetXYZ_presence_vector(::j3224_v2x_msgs::msg::PositionOffsetXYZ & msg)
  : msg_(msg)
  {}
  Init_PositionOffsetXYZ_offset_z presence_vector(::j3224_v2x_msgs::msg::PositionOffsetXYZ::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_PositionOffsetXYZ_offset_z(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::PositionOffsetXYZ msg_;
};

class Init_PositionOffsetXYZ_offset_y
{
public:
  explicit Init_PositionOffsetXYZ_offset_y(::j3224_v2x_msgs::msg::PositionOffsetXYZ & msg)
  : msg_(msg)
  {}
  Init_PositionOffsetXYZ_presence_vector offset_y(::j3224_v2x_msgs::msg::PositionOffsetXYZ::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return Init_PositionOffsetXYZ_presence_vector(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::PositionOffsetXYZ msg_;
};

class Init_PositionOffsetXYZ_offset_x
{
public:
  Init_PositionOffsetXYZ_offset_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionOffsetXYZ_offset_y offset_x(::j3224_v2x_msgs::msg::PositionOffsetXYZ::_offset_x_type arg)
  {
    msg_.offset_x = std::move(arg);
    return Init_PositionOffsetXYZ_offset_y(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::PositionOffsetXYZ msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::PositionOffsetXYZ>()
{
  return j3224_v2x_msgs::msg::builder::Init_PositionOffsetXYZ_offset_x();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__POSITION_OFFSET_XYZ__BUILDER_HPP_
