// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ITISGenericLocations.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_GENERIC_LOCATIONS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_GENERIC_LOCATIONS__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ITISGenericLocations_generic_locations
{
public:
  Init_ITISGenericLocations_generic_locations()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::ITISGenericLocations generic_locations(::j2735_v2x_msgs::msg::ITISGenericLocations::_generic_locations_type arg)
  {
    msg_.generic_locations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ITISGenericLocations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ITISGenericLocations>()
{
  return j2735_v2x_msgs::msg::builder::Init_ITISGenericLocations_generic_locations();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_GENERIC_LOCATIONS__BUILDER_HPP_
