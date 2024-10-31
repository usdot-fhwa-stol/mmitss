// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipYesNo.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_YES_NO__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_YES_NO__BUILDER_HPP_

#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NTCIPEssPrecipYesNo_precip_yes_no
{
public:
  Init_NTCIPEssPrecipYesNo_precip_yes_no()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo precip_yes_no(::j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo::_precip_yes_no_type arg)
  {
    msg_.precip_yes_no = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo>()
{
  return j2735_v2x_msgs::msg::builder::Init_NTCIPEssPrecipYesNo_precip_yes_no();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_YES_NO__BUILDER_HPP_
