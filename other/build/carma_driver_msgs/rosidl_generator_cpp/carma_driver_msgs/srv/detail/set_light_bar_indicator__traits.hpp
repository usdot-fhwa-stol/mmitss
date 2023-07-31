// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__TRAITS_HPP_

#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'indicator'
#include "carma_msgs/msg/detail/light_bar_indicator__traits.hpp"
// Member 'cda_type'
#include "carma_msgs/msg/detail/light_bar_cda_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::SetLightBarIndicator_Request>()
{
  return "carma_driver_msgs::srv::SetLightBarIndicator_Request";
}

template<>
inline const char * name<carma_driver_msgs::srv::SetLightBarIndicator_Request>()
{
  return "carma_driver_msgs/srv/SetLightBarIndicator_Request";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SetLightBarIndicator_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SetLightBarIndicator_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_driver_msgs::srv::SetLightBarIndicator_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::SetLightBarIndicator_Response>()
{
  return "carma_driver_msgs::srv::SetLightBarIndicator_Response";
}

template<>
inline const char * name<carma_driver_msgs::srv::SetLightBarIndicator_Response>()
{
  return "carma_driver_msgs/srv/SetLightBarIndicator_Response";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SetLightBarIndicator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SetLightBarIndicator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_driver_msgs::srv::SetLightBarIndicator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::SetLightBarIndicator>()
{
  return "carma_driver_msgs::srv::SetLightBarIndicator";
}

template<>
inline const char * name<carma_driver_msgs::srv::SetLightBarIndicator>()
{
  return "carma_driver_msgs/srv/SetLightBarIndicator";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SetLightBarIndicator>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_driver_msgs::srv::SetLightBarIndicator_Request>::value &&
    has_fixed_size<carma_driver_msgs::srv::SetLightBarIndicator_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SetLightBarIndicator>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_driver_msgs::srv::SetLightBarIndicator_Request>::value &&
    has_bounded_size<carma_driver_msgs::srv::SetLightBarIndicator_Response>::value
  >
{
};

template<>
struct is_service<carma_driver_msgs::srv::SetLightBarIndicator>
  : std::true_type
{
};

template<>
struct is_service_request<carma_driver_msgs::srv::SetLightBarIndicator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_driver_msgs::srv::SetLightBarIndicator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__TRAITS_HPP_
