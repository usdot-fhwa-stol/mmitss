// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_planning_msgs:srv/GetEmergencyRoute.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/get_emergency_route__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_planning_msgs/srv/detail/get_emergency_route__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carma_planning_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::srv::GetEmergencyRoute_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::srv::GetEmergencyRoute_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::srv::GetEmergencyRoute_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_GetEmergencyRoute_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetEmergencyRoute_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::srv::GetEmergencyRoute_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetEmergencyRoute_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::srv::GetEmergencyRoute_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetEmergencyRoute_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::srv::GetEmergencyRoute_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetEmergencyRoute_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetEmergencyRoute_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetEmergencyRoute_Request__callbacks = {
  "carma_planning_msgs::srv",
  "GetEmergencyRoute_Request",
  _GetEmergencyRoute_Request__cdr_serialize,
  _GetEmergencyRoute_Request__cdr_deserialize,
  _GetEmergencyRoute_Request__get_serialized_size,
  _GetEmergencyRoute_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetEmergencyRoute_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetEmergencyRoute_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::srv::GetEmergencyRoute_Request>()
{
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_GetEmergencyRoute_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, GetEmergencyRoute_Request)() {
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_GetEmergencyRoute_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace carma_planning_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::srv::GetEmergencyRoute_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_successful
  cdr << (ros_message.is_successful ? true : false);
  // Member: route_name
  cdr << ros_message.route_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::srv::GetEmergencyRoute_Response & ros_message)
{
  // Member: is_successful
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_successful = tmp ? true : false;
  }

  // Member: route_name
  cdr >> ros_message.route_name;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::srv::GetEmergencyRoute_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_successful
  {
    size_t item_size = sizeof(ros_message.is_successful);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: route_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.route_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_GetEmergencyRoute_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: is_successful
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: route_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetEmergencyRoute_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::srv::GetEmergencyRoute_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetEmergencyRoute_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::srv::GetEmergencyRoute_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetEmergencyRoute_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::srv::GetEmergencyRoute_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetEmergencyRoute_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetEmergencyRoute_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetEmergencyRoute_Response__callbacks = {
  "carma_planning_msgs::srv",
  "GetEmergencyRoute_Response",
  _GetEmergencyRoute_Response__cdr_serialize,
  _GetEmergencyRoute_Response__cdr_deserialize,
  _GetEmergencyRoute_Response__get_serialized_size,
  _GetEmergencyRoute_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetEmergencyRoute_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetEmergencyRoute_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::srv::GetEmergencyRoute_Response>()
{
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_GetEmergencyRoute_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, GetEmergencyRoute_Response)() {
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_GetEmergencyRoute_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace carma_planning_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetEmergencyRoute__callbacks = {
  "carma_planning_msgs::srv",
  "GetEmergencyRoute",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, GetEmergencyRoute_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, GetEmergencyRoute_Response)(),
};

static rosidl_service_type_support_t _GetEmergencyRoute__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetEmergencyRoute__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<carma_planning_msgs::srv::GetEmergencyRoute>()
{
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_GetEmergencyRoute__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, srv, GetEmergencyRoute)() {
  return &carma_planning_msgs::srv::typesupport_fastrtps_cpp::_GetEmergencyRoute__handle;
}

#ifdef __cplusplus
}
#endif
