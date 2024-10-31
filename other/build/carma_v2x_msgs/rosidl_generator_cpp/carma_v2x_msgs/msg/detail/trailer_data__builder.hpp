// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/trailer_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerData_units
{
public:
  explicit Init_TrailerData_units(::carma_v2x_msgs::msg::TrailerData & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TrailerData units(::carma_v2x_msgs::msg::TrailerData::_units_type arg)
  {
    msg_.units = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrailerData msg_;
};

class Init_TrailerData_connection
{
public:
  explicit Init_TrailerData_connection(::carma_v2x_msgs::msg::TrailerData & msg)
  : msg_(msg)
  {}
  Init_TrailerData_units connection(::carma_v2x_msgs::msg::TrailerData::_connection_type arg)
  {
    msg_.connection = std::move(arg);
    return Init_TrailerData_units(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrailerData msg_;
};

class Init_TrailerData_ssp_index
{
public:
  Init_TrailerData_ssp_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrailerData_connection ssp_index(::carma_v2x_msgs::msg::TrailerData::_ssp_index_type arg)
  {
    msg_.ssp_index = std::move(arg);
    return Init_TrailerData_connection(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrailerData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrailerData>()
{
  return carma_v2x_msgs::msg::builder::Init_TrailerData_ssp_index();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__BUILDER_HPP_
