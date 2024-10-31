// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/TrailerMass.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/trailer_mass__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerMass_unavailable
{
public:
  explicit Init_TrailerMass_unavailable(::carma_v2x_msgs::msg::TrailerMass & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::TrailerMass unavailable(::carma_v2x_msgs::msg::TrailerMass::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrailerMass msg_;
};

class Init_TrailerMass_trailer_mass
{
public:
  Init_TrailerMass_trailer_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrailerMass_unavailable trailer_mass(::carma_v2x_msgs::msg::TrailerMass::_trailer_mass_type arg)
  {
    msg_.trailer_mass = std::move(arg);
    return Init_TrailerMass_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::TrailerMass msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::TrailerMass>()
{
  return carma_v2x_msgs::msg::builder::Init_TrailerMass_trailer_mass();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__BUILDER_HPP_
