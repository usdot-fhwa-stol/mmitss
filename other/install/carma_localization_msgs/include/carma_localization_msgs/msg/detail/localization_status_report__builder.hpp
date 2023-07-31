// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_localization_msgs:msg/LocalizationStatusReport.idl
// generated code does not contain a copyright notice

#ifndef CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__BUILDER_HPP_
#define CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__BUILDER_HPP_

#include "carma_localization_msgs/msg/detail/localization_status_report__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalizationStatusReport_status
{
public:
  explicit Init_LocalizationStatusReport_status(::carma_localization_msgs::msg::LocalizationStatusReport & msg)
  : msg_(msg)
  {}
  ::carma_localization_msgs::msg::LocalizationStatusReport status(::carma_localization_msgs::msg::LocalizationStatusReport::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_localization_msgs::msg::LocalizationStatusReport msg_;
};

class Init_LocalizationStatusReport_header
{
public:
  Init_LocalizationStatusReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalizationStatusReport_status header(::carma_localization_msgs::msg::LocalizationStatusReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocalizationStatusReport_status(msg_);
  }

private:
  ::carma_localization_msgs::msg::LocalizationStatusReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_localization_msgs::msg::LocalizationStatusReport>()
{
  return carma_localization_msgs::msg::builder::Init_LocalizationStatusReport_header();
}

}  // namespace carma_localization_msgs

#endif  // CARMA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_STATUS_REPORT__BUILDER_HPP_
