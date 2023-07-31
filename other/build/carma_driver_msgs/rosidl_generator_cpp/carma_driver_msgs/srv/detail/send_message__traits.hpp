// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:srv/SendMessage.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__TRAITS_HPP_

#include "carma_driver_msgs/srv/detail/send_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'message_to_send'
#include "carma_driver_msgs/msg/detail/byte_array__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::SendMessage_Request>()
{
  return "carma_driver_msgs::srv::SendMessage_Request";
}

template<>
inline const char * name<carma_driver_msgs::srv::SendMessage_Request>()
{
  return "carma_driver_msgs/srv/SendMessage_Request";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SendMessage_Request>
  : std::integral_constant<bool, has_fixed_size<carma_driver_msgs::msg::ByteArray>::value> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SendMessage_Request>
  : std::integral_constant<bool, has_bounded_size<carma_driver_msgs::msg::ByteArray>::value> {};

template<>
struct is_message<carma_driver_msgs::srv::SendMessage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::SendMessage_Response>()
{
  return "carma_driver_msgs::srv::SendMessage_Response";
}

template<>
inline const char * name<carma_driver_msgs::srv::SendMessage_Response>()
{
  return "carma_driver_msgs/srv/SendMessage_Response";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SendMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SendMessage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_driver_msgs::srv::SendMessage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::SendMessage>()
{
  return "carma_driver_msgs::srv::SendMessage";
}

template<>
inline const char * name<carma_driver_msgs::srv::SendMessage>()
{
  return "carma_driver_msgs/srv/SendMessage";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SendMessage>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_driver_msgs::srv::SendMessage_Request>::value &&
    has_fixed_size<carma_driver_msgs::srv::SendMessage_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SendMessage>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_driver_msgs::srv::SendMessage_Request>::value &&
    has_bounded_size<carma_driver_msgs::srv::SendMessage_Response>::value
  >
{
};

template<>
struct is_service<carma_driver_msgs::srv::SendMessage>
  : std::true_type
{
};

template<>
struct is_service_request<carma_driver_msgs::srv::SendMessage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_driver_msgs::srv::SendMessage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__TRAITS_HPP_
