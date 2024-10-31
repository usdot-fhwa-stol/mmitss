// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_perception_msgs:msg/ConnectedVehicleType.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__BUILDER_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__BUILDER_HPP_

#include "carma_perception_msgs/msg/detail/connected_vehicle_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ConnectedVehicleType_type
{
public:
  Init_ConnectedVehicleType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_perception_msgs::msg::ConnectedVehicleType type(::carma_perception_msgs::msg::ConnectedVehicleType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_perception_msgs::msg::ConnectedVehicleType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_perception_msgs::msg::ConnectedVehicleType>()
{
  return carma_perception_msgs::msg::builder::Init_ConnectedVehicleType_type();
}

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__CONNECTED_VEHICLE_TYPE__BUILDER_HPP_
