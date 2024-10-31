// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SPAT__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__SPAT__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/spat__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SPAT_intersection_state_list
{
public:
  explicit Init_SPAT_intersection_state_list(::carma_v2x_msgs::msg::SPAT & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::SPAT intersection_state_list(::carma_v2x_msgs::msg::SPAT::_intersection_state_list_type arg)
  {
    msg_.intersection_state_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::SPAT msg_;
};

class Init_SPAT_name_exists
{
public:
  explicit Init_SPAT_name_exists(::carma_v2x_msgs::msg::SPAT & msg)
  : msg_(msg)
  {}
  Init_SPAT_intersection_state_list name_exists(::carma_v2x_msgs::msg::SPAT::_name_exists_type arg)
  {
    msg_.name_exists = std::move(arg);
    return Init_SPAT_intersection_state_list(msg_);
  }

private:
  ::carma_v2x_msgs::msg::SPAT msg_;
};

class Init_SPAT_name
{
public:
  explicit Init_SPAT_name(::carma_v2x_msgs::msg::SPAT & msg)
  : msg_(msg)
  {}
  Init_SPAT_name_exists name(::carma_v2x_msgs::msg::SPAT::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SPAT_name_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::SPAT msg_;
};

class Init_SPAT_time_stamp_exists
{
public:
  explicit Init_SPAT_time_stamp_exists(::carma_v2x_msgs::msg::SPAT & msg)
  : msg_(msg)
  {}
  Init_SPAT_name time_stamp_exists(::carma_v2x_msgs::msg::SPAT::_time_stamp_exists_type arg)
  {
    msg_.time_stamp_exists = std::move(arg);
    return Init_SPAT_name(msg_);
  }

private:
  ::carma_v2x_msgs::msg::SPAT msg_;
};

class Init_SPAT_time_stamp
{
public:
  Init_SPAT_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SPAT_time_stamp_exists time_stamp(::carma_v2x_msgs::msg::SPAT::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SPAT_time_stamp_exists(msg_);
  }

private:
  ::carma_v2x_msgs::msg::SPAT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::SPAT>()
{
  return carma_v2x_msgs::msg::builder::Init_SPAT_time_stamp();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SPAT__BUILDER_HPP_
