// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__BUILDER_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__BUILDER_HPP_

#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_debug_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneletIdRegulatoryElementPair_element
{
public:
  explicit Init_LaneletIdRegulatoryElementPair_element(::carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair & msg)
  : msg_(msg)
  {}
  ::carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair element(::carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair::_element_type arg)
  {
    msg_.element = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair msg_;
};

class Init_LaneletIdRegulatoryElementPair_lanelet_id
{
public:
  Init_LaneletIdRegulatoryElementPair_lanelet_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneletIdRegulatoryElementPair_element lanelet_id(::carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair::_lanelet_id_type arg)
  {
    msg_.lanelet_id = std::move(arg);
    return Init_LaneletIdRegulatoryElementPair_element(msg_);
  }

private:
  ::carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_debug_ros2_msgs::msg::LaneletIdRegulatoryElementPair>()
{
  return carma_debug_ros2_msgs::msg::builder::Init_LaneletIdRegulatoryElementPair_lanelet_id();
}

}  // namespace carma_debug_ros2_msgs

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__LANELET_ID_REGULATORY_ELEMENT_PAIR__BUILDER_HPP_
