// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__TRAITS_HPP_
#define CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__TRAITS_HPP_

#include "carma_msgs/srv/detail/set_traffic_event__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::srv::SetTrafficEvent_Request>()
{
  return "carma_msgs::srv::SetTrafficEvent_Request";
}

template<>
inline const char * name<carma_msgs::srv::SetTrafficEvent_Request>()
{
  return "carma_msgs/srv/SetTrafficEvent_Request";
}

template<>
struct has_fixed_size<carma_msgs::srv::SetTrafficEvent_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_msgs::srv::SetTrafficEvent_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_msgs::srv::SetTrafficEvent_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::srv::SetTrafficEvent_Response>()
{
  return "carma_msgs::srv::SetTrafficEvent_Response";
}

template<>
inline const char * name<carma_msgs::srv::SetTrafficEvent_Response>()
{
  return "carma_msgs/srv/SetTrafficEvent_Response";
}

template<>
struct has_fixed_size<carma_msgs::srv::SetTrafficEvent_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_msgs::srv::SetTrafficEvent_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_msgs::srv::SetTrafficEvent_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::srv::SetTrafficEvent>()
{
  return "carma_msgs::srv::SetTrafficEvent";
}

template<>
inline const char * name<carma_msgs::srv::SetTrafficEvent>()
{
  return "carma_msgs/srv/SetTrafficEvent";
}

template<>
struct has_fixed_size<carma_msgs::srv::SetTrafficEvent>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_msgs::srv::SetTrafficEvent_Request>::value &&
    has_fixed_size<carma_msgs::srv::SetTrafficEvent_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_msgs::srv::SetTrafficEvent>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_msgs::srv::SetTrafficEvent_Request>::value &&
    has_bounded_size<carma_msgs::srv::SetTrafficEvent_Response>::value
  >
{
};

template<>
struct is_service<carma_msgs::srv::SetTrafficEvent>
  : std::true_type
{
};

template<>
struct is_service_request<carma_msgs::srv::SetTrafficEvent_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_msgs::srv::SetTrafficEvent_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__TRAITS_HPP_
