// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/BSMRegionalExtension.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/bsm_regional_extension__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BSMRegionalExtension_route_destination_points
{
public:
  explicit Init_BSMRegionalExtension_route_destination_points(::carma_v2x_msgs::msg::BSMRegionalExtension & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::BSMRegionalExtension route_destination_points(::carma_v2x_msgs::msg::BSMRegionalExtension::_route_destination_points_type arg)
  {
    msg_.route_destination_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMRegionalExtension msg_;
};

class Init_BSMRegionalExtension_regional_extension_id
{
public:
  Init_BSMRegionalExtension_regional_extension_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSMRegionalExtension_route_destination_points regional_extension_id(::carma_v2x_msgs::msg::BSMRegionalExtension::_regional_extension_id_type arg)
  {
    msg_.regional_extension_id = std::move(arg);
    return Init_BSMRegionalExtension_route_destination_points(msg_);
  }

private:
  ::carma_v2x_msgs::msg::BSMRegionalExtension msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::BSMRegionalExtension>()
{
  return carma_v2x_msgs::msg::builder::Init_BSMRegionalExtension_regional_extension_id();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__BUILDER_HPP_
