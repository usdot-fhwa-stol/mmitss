// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/CoefficientOfFriction.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/coefficient_of_friction__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_CoefficientOfFriction_unavailable
{
public:
  explicit Init_CoefficientOfFriction_unavailable(::carma_v2x_msgs::msg::CoefficientOfFriction & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::CoefficientOfFriction unavailable(::carma_v2x_msgs::msg::CoefficientOfFriction::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::CoefficientOfFriction msg_;
};

class Init_CoefficientOfFriction_coefficient
{
public:
  Init_CoefficientOfFriction_coefficient()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoefficientOfFriction_unavailable coefficient(::carma_v2x_msgs::msg::CoefficientOfFriction::_coefficient_type arg)
  {
    msg_.coefficient = std::move(arg);
    return Init_CoefficientOfFriction_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::CoefficientOfFriction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::CoefficientOfFriction>()
{
  return carma_v2x_msgs::msg::builder::Init_CoefficientOfFriction_coefficient();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__BUILDER_HPP_
