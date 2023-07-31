// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/LocationOffsetECEF.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_OFFSET_ECEF__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_OFFSET_ECEF__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/location_offset_ecef__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LocationOffsetECEF_offset_z
{
public:
  explicit Init_LocationOffsetECEF_offset_z(::carma_v2x_msgs::msg::LocationOffsetECEF & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::LocationOffsetECEF offset_z(::carma_v2x_msgs::msg::LocationOffsetECEF::_offset_z_type arg)
  {
    msg_.offset_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LocationOffsetECEF msg_;
};

class Init_LocationOffsetECEF_offset_y
{
public:
  explicit Init_LocationOffsetECEF_offset_y(::carma_v2x_msgs::msg::LocationOffsetECEF & msg)
  : msg_(msg)
  {}
  Init_LocationOffsetECEF_offset_z offset_y(::carma_v2x_msgs::msg::LocationOffsetECEF::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return Init_LocationOffsetECEF_offset_z(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LocationOffsetECEF msg_;
};

class Init_LocationOffsetECEF_offset_x
{
public:
  Init_LocationOffsetECEF_offset_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocationOffsetECEF_offset_y offset_x(::carma_v2x_msgs::msg::LocationOffsetECEF::_offset_x_type arg)
  {
    msg_.offset_x = std::move(arg);
    return Init_LocationOffsetECEF_offset_y(msg_);
  }

private:
  ::carma_v2x_msgs::msg::LocationOffsetECEF msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::LocationOffsetECEF>()
{
  return carma_v2x_msgs::msg::builder::Init_LocationOffsetECEF_offset_x();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__LOCATION_OFFSET_ECEF__BUILDER_HPP_
