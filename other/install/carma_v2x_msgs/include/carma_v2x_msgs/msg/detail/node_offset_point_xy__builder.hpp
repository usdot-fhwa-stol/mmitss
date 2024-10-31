// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/node_offset_point_xy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeOffsetPointXY_latitude
{
public:
  explicit Init_NodeOffsetPointXY_latitude(::carma_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::NodeOffsetPointXY latitude(::carma_v2x_msgs::msg::NodeOffsetPointXY::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_longitude
{
public:
  explicit Init_NodeOffsetPointXY_longitude(::carma_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_latitude longitude(::carma_v2x_msgs::msg::NodeOffsetPointXY::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_NodeOffsetPointXY_latitude(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_y
{
public:
  explicit Init_NodeOffsetPointXY_y(::carma_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_longitude y(::carma_v2x_msgs::msg::NodeOffsetPointXY::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_NodeOffsetPointXY_longitude(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_x
{
public:
  explicit Init_NodeOffsetPointXY_x(::carma_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_y x(::carma_v2x_msgs::msg::NodeOffsetPointXY::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NodeOffsetPointXY_y(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_choice
{
public:
  Init_NodeOffsetPointXY_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeOffsetPointXY_x choice(::carma_v2x_msgs::msg::NodeOffsetPointXY::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_NodeOffsetPointXY_x(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::NodeOffsetPointXY>()
{
  return carma_v2x_msgs::msg::builder::Init_NodeOffsetPointXY_choice();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__BUILDER_HPP_
