// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:srv/SetActiveRoute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__TRAITS_HPP_

#include "carma_planning_msgs/srv/detail/set_active_route__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::SetActiveRoute_Request>()
{
  return "carma_planning_msgs::srv::SetActiveRoute_Request";
}

template<>
inline const char * name<carma_planning_msgs::srv::SetActiveRoute_Request>()
{
  return "carma_planning_msgs/srv/SetActiveRoute_Request";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::SetActiveRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_planning_msgs::srv::SetActiveRoute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_planning_msgs::srv::SetActiveRoute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::SetActiveRoute_Response>()
{
  return "carma_planning_msgs::srv::SetActiveRoute_Response";
}

template<>
inline const char * name<carma_planning_msgs::srv::SetActiveRoute_Response>()
{
  return "carma_planning_msgs/srv/SetActiveRoute_Response";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::SetActiveRoute_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_planning_msgs::srv::SetActiveRoute_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_planning_msgs::srv::SetActiveRoute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::SetActiveRoute>()
{
  return "carma_planning_msgs::srv::SetActiveRoute";
}

template<>
inline const char * name<carma_planning_msgs::srv::SetActiveRoute>()
{
  return "carma_planning_msgs/srv/SetActiveRoute";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::SetActiveRoute>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_planning_msgs::srv::SetActiveRoute_Request>::value &&
    has_fixed_size<carma_planning_msgs::srv::SetActiveRoute_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_planning_msgs::srv::SetActiveRoute>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_planning_msgs::srv::SetActiveRoute_Request>::value &&
    has_bounded_size<carma_planning_msgs::srv::SetActiveRoute_Response>::value
  >
{
};

template<>
struct is_service<carma_planning_msgs::srv::SetActiveRoute>
  : std::true_type
{
};

template<>
struct is_service_request<carma_planning_msgs::srv::SetActiveRoute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_planning_msgs::srv::SetActiveRoute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__TRAITS_HPP_
