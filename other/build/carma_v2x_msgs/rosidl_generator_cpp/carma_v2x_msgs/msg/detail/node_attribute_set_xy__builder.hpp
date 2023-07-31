// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/node_attribute_set_xy__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeAttributeSetXY_d_elevation_exists
{
public:
  explicit Init_NodeAttributeSetXY_d_elevation_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::NodeAttributeSetXY d_elevation_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY::_d_elevation_exists_type arg)
  {
    msg_.d_elevation_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_d_elevation
{
public:
  explicit Init_NodeAttributeSetXY_d_elevation(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_d_elevation_exists d_elevation(::carma_v2x_msgs::msg::NodeAttributeSetXY::_d_elevation_type arg)
  {
    msg_.d_elevation = std::move(arg);
    return Init_NodeAttributeSetXY_d_elevation_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_d_width_exists
{
public:
  explicit Init_NodeAttributeSetXY_d_width_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_d_elevation d_width_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY::_d_width_exists_type arg)
  {
    msg_.d_width_exists = std::move(arg);
    return Init_NodeAttributeSetXY_d_elevation(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_d_width
{
public:
  explicit Init_NodeAttributeSetXY_d_width(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_d_width_exists d_width(::carma_v2x_msgs::msg::NodeAttributeSetXY::_d_width_type arg)
  {
    msg_.d_width = std::move(arg);
    return Init_NodeAttributeSetXY_d_width_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_data_exists
{
public:
  explicit Init_NodeAttributeSetXY_data_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_d_width data_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY::_data_exists_type arg)
  {
    msg_.data_exists = std::move(arg);
    return Init_NodeAttributeSetXY_d_width(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_lane_attribute_list
{
public:
  explicit Init_NodeAttributeSetXY_lane_attribute_list(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_data_exists lane_attribute_list(::carma_v2x_msgs::msg::NodeAttributeSetXY::_lane_attribute_list_type arg)
  {
    msg_.lane_attribute_list = std::move(arg);
    return Init_NodeAttributeSetXY_data_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_enabled_exists
{
public:
  explicit Init_NodeAttributeSetXY_enabled_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_lane_attribute_list enabled_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY::_enabled_exists_type arg)
  {
    msg_.enabled_exists = std::move(arg);
    return Init_NodeAttributeSetXY_lane_attribute_list(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_enabled
{
public:
  explicit Init_NodeAttributeSetXY_enabled(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_enabled_exists enabled(::carma_v2x_msgs::msg::NodeAttributeSetXY::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_NodeAttributeSetXY_enabled_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_disabled_exists
{
public:
  explicit Init_NodeAttributeSetXY_disabled_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_enabled disabled_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY::_disabled_exists_type arg)
  {
    msg_.disabled_exists = std::move(arg);
    return Init_NodeAttributeSetXY_enabled(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_disabled
{
public:
  explicit Init_NodeAttributeSetXY_disabled(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_disabled_exists disabled(::carma_v2x_msgs::msg::NodeAttributeSetXY::_disabled_type arg)
  {
    msg_.disabled = std::move(arg);
    return Init_NodeAttributeSetXY_disabled_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_local_node_exists
{
public:
  explicit Init_NodeAttributeSetXY_local_node_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_disabled local_node_exists(::carma_v2x_msgs::msg::NodeAttributeSetXY::_local_node_exists_type arg)
  {
    msg_.local_node_exists = std::move(arg);
    return Init_NodeAttributeSetXY_disabled(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_local_node
{
public:
  Init_NodeAttributeSetXY_local_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeAttributeSetXY_local_node_exists local_node(::carma_v2x_msgs::msg::NodeAttributeSetXY::_local_node_type arg)
  {
    msg_.local_node = std::move(arg);
    return Init_NodeAttributeSetXY_local_node_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::NodeAttributeSetXY>()
{
  return carma_v2x_msgs::msg::builder::Init_NodeAttributeSetXY_local_node();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__BUILDER_HPP_
