// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:srv/GetPluginApi.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__GET_PLUGIN_API__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__GET_PLUGIN_API__TRAITS_HPP_

#include "carma_planning_msgs/srv/detail/get_plugin_api__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::GetPluginApi_Request>()
{
  return "carma_planning_msgs::srv::GetPluginApi_Request";
}

template<>
inline const char * name<carma_planning_msgs::srv::GetPluginApi_Request>()
{
  return "carma_planning_msgs/srv/GetPluginApi_Request";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::GetPluginApi_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_planning_msgs::srv::GetPluginApi_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_planning_msgs::srv::GetPluginApi_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::GetPluginApi_Response>()
{
  return "carma_planning_msgs::srv::GetPluginApi_Response";
}

template<>
inline const char * name<carma_planning_msgs::srv::GetPluginApi_Response>()
{
  return "carma_planning_msgs/srv/GetPluginApi_Response";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::GetPluginApi_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_planning_msgs::srv::GetPluginApi_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_planning_msgs::srv::GetPluginApi_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::GetPluginApi>()
{
  return "carma_planning_msgs::srv::GetPluginApi";
}

template<>
inline const char * name<carma_planning_msgs::srv::GetPluginApi>()
{
  return "carma_planning_msgs/srv/GetPluginApi";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::GetPluginApi>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_planning_msgs::srv::GetPluginApi_Request>::value &&
    has_fixed_size<carma_planning_msgs::srv::GetPluginApi_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_planning_msgs::srv::GetPluginApi>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_planning_msgs::srv::GetPluginApi_Request>::value &&
    has_bounded_size<carma_planning_msgs::srv::GetPluginApi_Response>::value
  >
{
};

template<>
struct is_service<carma_planning_msgs::srv::GetPluginApi>
  : std::true_type
{
};

template<>
struct is_service_request<carma_planning_msgs::srv::GetPluginApi_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_planning_msgs::srv::GetPluginApi_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__GET_PLUGIN_API__TRAITS_HPP_
