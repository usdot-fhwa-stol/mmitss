// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_planning_msgs:msg/ManeuverParameters.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PARAMETERS__BUILDER_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PARAMETERS__BUILDER_HPP_

#include "carma_planning_msgs/msg/detail/maneuver_parameters__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_ManeuverParameters_time_valued_meta_data
{
public:
  explicit Init_ManeuverParameters_time_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters & msg)
  : msg_(msg)
  {}
  ::carma_planning_msgs::msg::ManeuverParameters time_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters::_time_valued_meta_data_type arg)
  {
    msg_.time_valued_meta_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

class Init_ManeuverParameters_string_valued_meta_data
{
public:
  explicit Init_ManeuverParameters_string_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters & msg)
  : msg_(msg)
  {}
  Init_ManeuverParameters_time_valued_meta_data string_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters::_string_valued_meta_data_type arg)
  {
    msg_.string_valued_meta_data = std::move(arg);
    return Init_ManeuverParameters_time_valued_meta_data(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

class Init_ManeuverParameters_float_valued_meta_data
{
public:
  explicit Init_ManeuverParameters_float_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters & msg)
  : msg_(msg)
  {}
  Init_ManeuverParameters_string_valued_meta_data float_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters::_float_valued_meta_data_type arg)
  {
    msg_.float_valued_meta_data = std::move(arg);
    return Init_ManeuverParameters_string_valued_meta_data(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

class Init_ManeuverParameters_int_valued_meta_data
{
public:
  explicit Init_ManeuverParameters_int_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters & msg)
  : msg_(msg)
  {}
  Init_ManeuverParameters_float_valued_meta_data int_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters::_int_valued_meta_data_type arg)
  {
    msg_.int_valued_meta_data = std::move(arg);
    return Init_ManeuverParameters_float_valued_meta_data(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

class Init_ManeuverParameters_bool_valued_meta_data
{
public:
  explicit Init_ManeuverParameters_bool_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters & msg)
  : msg_(msg)
  {}
  Init_ManeuverParameters_int_valued_meta_data bool_valued_meta_data(::carma_planning_msgs::msg::ManeuverParameters::_bool_valued_meta_data_type arg)
  {
    msg_.bool_valued_meta_data = std::move(arg);
    return Init_ManeuverParameters_int_valued_meta_data(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

class Init_ManeuverParameters_planning_tactical_plugin
{
public:
  explicit Init_ManeuverParameters_planning_tactical_plugin(::carma_planning_msgs::msg::ManeuverParameters & msg)
  : msg_(msg)
  {}
  Init_ManeuverParameters_bool_valued_meta_data planning_tactical_plugin(::carma_planning_msgs::msg::ManeuverParameters::_planning_tactical_plugin_type arg)
  {
    msg_.planning_tactical_plugin = std::move(arg);
    return Init_ManeuverParameters_bool_valued_meta_data(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

class Init_ManeuverParameters_presence_vector
{
public:
  explicit Init_ManeuverParameters_presence_vector(::carma_planning_msgs::msg::ManeuverParameters & msg)
  : msg_(msg)
  {}
  Init_ManeuverParameters_planning_tactical_plugin presence_vector(::carma_planning_msgs::msg::ManeuverParameters::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_ManeuverParameters_planning_tactical_plugin(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

class Init_ManeuverParameters_planning_strategic_plugin
{
public:
  explicit Init_ManeuverParameters_planning_strategic_plugin(::carma_planning_msgs::msg::ManeuverParameters & msg)
  : msg_(msg)
  {}
  Init_ManeuverParameters_presence_vector planning_strategic_plugin(::carma_planning_msgs::msg::ManeuverParameters::_planning_strategic_plugin_type arg)
  {
    msg_.planning_strategic_plugin = std::move(arg);
    return Init_ManeuverParameters_presence_vector(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

class Init_ManeuverParameters_negotiation_type
{
public:
  explicit Init_ManeuverParameters_negotiation_type(::carma_planning_msgs::msg::ManeuverParameters & msg)
  : msg_(msg)
  {}
  Init_ManeuverParameters_planning_strategic_plugin negotiation_type(::carma_planning_msgs::msg::ManeuverParameters::_negotiation_type_type arg)
  {
    msg_.negotiation_type = std::move(arg);
    return Init_ManeuverParameters_planning_strategic_plugin(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

class Init_ManeuverParameters_maneuver_id
{
public:
  Init_ManeuverParameters_maneuver_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManeuverParameters_negotiation_type maneuver_id(::carma_planning_msgs::msg::ManeuverParameters::_maneuver_id_type arg)
  {
    msg_.maneuver_id = std::move(arg);
    return Init_ManeuverParameters_negotiation_type(msg_);
  }

private:
  ::carma_planning_msgs::msg::ManeuverParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_planning_msgs::msg::ManeuverParameters>()
{
  return carma_planning_msgs::msg::builder::Init_ManeuverParameters_maneuver_id();
}

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__MANEUVER_PARAMETERS__BUILDER_HPP_
