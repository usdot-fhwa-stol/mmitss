// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:srv/PluginActivation.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__TRAITS_HPP_

#include "carma_planning_msgs/srv/detail/plugin_activation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::PluginActivation_Request>()
{
  return "carma_planning_msgs::srv::PluginActivation_Request";
}

template<>
inline const char * name<carma_planning_msgs::srv::PluginActivation_Request>()
{
  return "carma_planning_msgs/srv/PluginActivation_Request";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::PluginActivation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_planning_msgs::srv::PluginActivation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_planning_msgs::srv::PluginActivation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::PluginActivation_Response>()
{
  return "carma_planning_msgs::srv::PluginActivation_Response";
}

template<>
inline const char * name<carma_planning_msgs::srv::PluginActivation_Response>()
{
  return "carma_planning_msgs/srv/PluginActivation_Response";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::PluginActivation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_planning_msgs::srv::PluginActivation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_planning_msgs::srv::PluginActivation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::PluginActivation>()
{
  return "carma_planning_msgs::srv::PluginActivation";
}

template<>
inline const char * name<carma_planning_msgs::srv::PluginActivation>()
{
  return "carma_planning_msgs/srv/PluginActivation";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::PluginActivation>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_planning_msgs::srv::PluginActivation_Request>::value &&
    has_fixed_size<carma_planning_msgs::srv::PluginActivation_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_planning_msgs::srv::PluginActivation>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_planning_msgs::srv::PluginActivation_Request>::value &&
    has_bounded_size<carma_planning_msgs::srv::PluginActivation_Response>::value
  >
{
};

template<>
struct is_service<carma_planning_msgs::srv::PluginActivation>
  : std::true_type
{
};

template<>
struct is_service_request<carma_planning_msgs::srv::PluginActivation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_planning_msgs::srv::PluginActivation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLUGIN_ACTIVATION__TRAITS_HPP_
