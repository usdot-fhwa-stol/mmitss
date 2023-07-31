// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/PathNode.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_NODE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_NODE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/path_node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PathNode_width_exists
{
public:
  explicit Init_PathNode_width_exists(::carma_v2x_msgs::msg::PathNode & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::PathNode width_exists(::carma_v2x_msgs::msg::PathNode::_width_exists_type arg)
  {
    msg_.width_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathNode msg_;
};

class Init_PathNode_width
{
public:
  explicit Init_PathNode_width(::carma_v2x_msgs::msg::PathNode & msg)
  : msg_(msg)
  {}
  Init_PathNode_width_exists width(::carma_v2x_msgs::msg::PathNode::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_PathNode_width_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathNode msg_;
};

class Init_PathNode_z_exists
{
public:
  explicit Init_PathNode_z_exists(::carma_v2x_msgs::msg::PathNode & msg)
  : msg_(msg)
  {}
  Init_PathNode_width z_exists(::carma_v2x_msgs::msg::PathNode::_z_exists_type arg)
  {
    msg_.z_exists = std::move(arg);
    return Init_PathNode_width(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathNode msg_;
};

class Init_PathNode_z
{
public:
  explicit Init_PathNode_z(::carma_v2x_msgs::msg::PathNode & msg)
  : msg_(msg)
  {}
  Init_PathNode_z_exists z(::carma_v2x_msgs::msg::PathNode::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PathNode_z_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathNode msg_;
};

class Init_PathNode_y
{
public:
  explicit Init_PathNode_y(::carma_v2x_msgs::msg::PathNode & msg)
  : msg_(msg)
  {}
  Init_PathNode_z y(::carma_v2x_msgs::msg::PathNode::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PathNode_z(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathNode msg_;
};

class Init_PathNode_x
{
public:
  Init_PathNode_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathNode_y x(::carma_v2x_msgs::msg::PathNode::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PathNode_y(msg_);
  }

private:
  ::carma_v2x_msgs::msg::PathNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::PathNode>()
{
  return carma_v2x_msgs::msg::builder::Init_PathNode_x();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_NODE__BUILDER_HPP_
