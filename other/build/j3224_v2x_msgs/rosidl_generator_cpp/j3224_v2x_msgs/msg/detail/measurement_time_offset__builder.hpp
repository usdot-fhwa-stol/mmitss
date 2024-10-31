// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j3224_v2x_msgs:msg/MeasurementTimeOffset.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__BUILDER_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__BUILDER_HPP_

#include "j3224_v2x_msgs/msg/detail/measurement_time_offset__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j3224_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MeasurementTimeOffset_measurement_time_offset
{
public:
  Init_MeasurementTimeOffset_measurement_time_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j3224_v2x_msgs::msg::MeasurementTimeOffset measurement_time_offset(::j3224_v2x_msgs::msg::MeasurementTimeOffset::_measurement_time_offset_type arg)
  {
    msg_.measurement_time_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j3224_v2x_msgs::msg::MeasurementTimeOffset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j3224_v2x_msgs::msg::MeasurementTimeOffset>()
{
  return j3224_v2x_msgs::msg::builder::Init_MeasurementTimeOffset_measurement_time_offset();
}

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__MEASUREMENT_TIME_OFFSET__BUILDER_HPP_
