// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_msgs:msg/CarlaEnabled.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__BUILDER_HPP_
#define CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__BUILDER_HPP_

#include "carma_msgs/msg/detail/carla_enabled__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaEnabled_carla_enabled
{
public:
  Init_CarlaEnabled_carla_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_msgs::msg::CarlaEnabled carla_enabled(::carma_msgs::msg::CarlaEnabled::_carla_enabled_type arg)
  {
    msg_.carla_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::msg::CarlaEnabled msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::msg::CarlaEnabled>()
{
  return carma_msgs::msg::builder::Init_CarlaEnabled_carla_enabled();
}

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__BUILDER_HPP_
