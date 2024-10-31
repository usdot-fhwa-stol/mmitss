// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/VehicleHeight.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/vehicle_height__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleHeight_unavailable
{
public:
  explicit Init_VehicleHeight_unavailable(::carma_v2x_msgs::msg::VehicleHeight & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::VehicleHeight unavailable(::carma_v2x_msgs::msg::VehicleHeight::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleHeight msg_;
};

class Init_VehicleHeight_vehicle_height
{
public:
  Init_VehicleHeight_vehicle_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleHeight_unavailable vehicle_height(::carma_v2x_msgs::msg::VehicleHeight::_vehicle_height_type arg)
  {
    msg_.vehicle_height = std::move(arg);
    return Init_VehicleHeight_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::VehicleHeight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::VehicleHeight>()
{
  return carma_v2x_msgs::msg::builder::Init_VehicleHeight_vehicle_height();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__BUILDER_HPP_
