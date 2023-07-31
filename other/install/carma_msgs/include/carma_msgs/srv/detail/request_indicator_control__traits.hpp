// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__TRAITS_HPP_
#define CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__TRAITS_HPP_

#include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::srv::RequestIndicatorControl_Request>()
{
  return "carma_msgs::srv::RequestIndicatorControl_Request";
}

template<>
inline const char * name<carma_msgs::srv::RequestIndicatorControl_Request>()
{
  return "carma_msgs/srv/RequestIndicatorControl_Request";
}

template<>
struct has_fixed_size<carma_msgs::srv::RequestIndicatorControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_msgs::srv::RequestIndicatorControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::srv::RequestIndicatorControl_Response>()
{
  return "carma_msgs::srv::RequestIndicatorControl_Response";
}

template<>
inline const char * name<carma_msgs::srv::RequestIndicatorControl_Response>()
{
  return "carma_msgs/srv/RequestIndicatorControl_Response";
}

template<>
struct has_fixed_size<carma_msgs::srv::RequestIndicatorControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_msgs::srv::RequestIndicatorControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::srv::RequestIndicatorControl>()
{
  return "carma_msgs::srv::RequestIndicatorControl";
}

template<>
inline const char * name<carma_msgs::srv::RequestIndicatorControl>()
{
  return "carma_msgs/srv/RequestIndicatorControl";
}

template<>
struct has_fixed_size<carma_msgs::srv::RequestIndicatorControl>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_msgs::srv::RequestIndicatorControl_Request>::value &&
    has_fixed_size<carma_msgs::srv::RequestIndicatorControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_msgs::srv::RequestIndicatorControl>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Request>::value &&
    has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Response>::value
  >
{
};

template<>
struct is_service<carma_msgs::srv::RequestIndicatorControl>
  : std::true_type
{
};

template<>
struct is_service_request<carma_msgs::srv::RequestIndicatorControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_msgs::srv::RequestIndicatorControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__TRAITS_HPP_
