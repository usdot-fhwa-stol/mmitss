// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/NTCIPEssPrecipRate.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/ntcip_ess_precip_rate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NTCIPEssPrecipRate_unavailable
{
public:
  explicit Init_NTCIPEssPrecipRate_unavailable(::carma_v2x_msgs::msg::NTCIPEssPrecipRate & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::NTCIPEssPrecipRate unavailable(::carma_v2x_msgs::msg::NTCIPEssPrecipRate::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NTCIPEssPrecipRate msg_;
};

class Init_NTCIPEssPrecipRate_precip_rate
{
public:
  Init_NTCIPEssPrecipRate_precip_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NTCIPEssPrecipRate_unavailable precip_rate(::carma_v2x_msgs::msg::NTCIPEssPrecipRate::_precip_rate_type arg)
  {
    msg_.precip_rate = std::move(arg);
    return Init_NTCIPEssPrecipRate_unavailable(msg_);
  }

private:
  ::carma_v2x_msgs::msg::NTCIPEssPrecipRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::NTCIPEssPrecipRate>()
{
  return carma_v2x_msgs::msg::builder::Init_NTCIPEssPrecipRate_precip_rate();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__BUILDER_HPP_
