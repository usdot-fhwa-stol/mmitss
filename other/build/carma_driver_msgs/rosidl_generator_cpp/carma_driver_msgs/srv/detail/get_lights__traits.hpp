// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:srv/GetLights.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_LIGHTS__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_LIGHTS__TRAITS_HPP_

#include "carma_driver_msgs/srv/detail/get_lights__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::GetLights_Request>()
{
  return "carma_driver_msgs::srv::GetLights_Request";
}

template<>
inline const char * name<carma_driver_msgs::srv::GetLights_Request>()
{
  return "carma_driver_msgs/srv/GetLights_Request";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::GetLights_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::GetLights_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_driver_msgs::srv::GetLights_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "carma_driver_msgs/msg/detail/light_bar_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::GetLights_Response>()
{
  return "carma_driver_msgs::srv::GetLights_Response";
}

template<>
inline const char * name<carma_driver_msgs::srv::GetLights_Response>()
{
  return "carma_driver_msgs/srv/GetLights_Response";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::GetLights_Response>
  : std::integral_constant<bool, has_fixed_size<carma_driver_msgs::msg::LightBarStatus>::value> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::GetLights_Response>
  : std::integral_constant<bool, has_bounded_size<carma_driver_msgs::msg::LightBarStatus>::value> {};

template<>
struct is_message<carma_driver_msgs::srv::GetLights_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::GetLights>()
{
  return "carma_driver_msgs::srv::GetLights";
}

template<>
inline const char * name<carma_driver_msgs::srv::GetLights>()
{
  return "carma_driver_msgs/srv/GetLights";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::GetLights>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_driver_msgs::srv::GetLights_Request>::value &&
    has_fixed_size<carma_driver_msgs::srv::GetLights_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_driver_msgs::srv::GetLights>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_driver_msgs::srv::GetLights_Request>::value &&
    has_bounded_size<carma_driver_msgs::srv::GetLights_Response>::value
  >
{
};

template<>
struct is_service<carma_driver_msgs::srv::GetLights>
  : std::true_type
{
};

template<>
struct is_service_request<carma_driver_msgs::srv::GetLights_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_driver_msgs::srv::GetLights_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_LIGHTS__TRAITS_HPP_
