// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice
#include "carma_msgs/srv/detail/request_indicator_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"

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
namespace carma_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_msgs::msg::LightBarIndicator &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_msgs::msg::LightBarIndicator &);
size_t get_serialized_size(
  const carma_msgs::msg::LightBarIndicator &,
  size_t current_alignment);
size_t
max_serialized_size_LightBarIndicator(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_msgs

namespace carma_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_msgs::msg::LightBarCDAType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_msgs::msg::LightBarCDAType &);
size_t get_serialized_size(
  const carma_msgs::msg::LightBarCDAType &,
  size_t current_alignment);
size_t
max_serialized_size_LightBarCDAType(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_msgs


namespace carma_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
cdr_serialize(
  const carma_msgs::srv::RequestIndicatorControl_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ind_list
  {
    size_t size = ros_message.ind_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ind_list[i],
        cdr);
    }
  }
  // Member: cda_list
  {
    size_t size = ros_message.cda_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cda_list[i],
        cdr);
    }
  }
  // Member: requester_name
  cdr << ros_message.requester_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_msgs::srv::RequestIndicatorControl_Request & ros_message)
{
  // Member: ind_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.ind_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ind_list[i]);
    }
  }

  // Member: cda_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.cda_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cda_list[i]);
    }
  }

  // Member: requester_name
  cdr >> ros_message.requester_name;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
get_serialized_size(
  const carma_msgs::srv::RequestIndicatorControl_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ind_list
  {
    size_t array_size = ros_message.ind_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ind_list[index], current_alignment);
    }
  }
  // Member: cda_list
  {
    size_t array_size = ros_message.cda_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cda_list[index], current_alignment);
    }
  }
  // Member: requester_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.requester_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
max_serialized_size_RequestIndicatorControl_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ind_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LightBarIndicator(
        full_bounded, current_alignment);
    }
  }

  // Member: cda_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LightBarCDAType(
        full_bounded, current_alignment);
    }
  }

  // Member: requester_name
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

static bool _RequestIndicatorControl_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_msgs::srv::RequestIndicatorControl_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RequestIndicatorControl_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_msgs::srv::RequestIndicatorControl_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RequestIndicatorControl_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_msgs::srv::RequestIndicatorControl_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RequestIndicatorControl_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RequestIndicatorControl_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _RequestIndicatorControl_Request__callbacks = {
  "carma_msgs::srv",
  "RequestIndicatorControl_Request",
  _RequestIndicatorControl_Request__cdr_serialize,
  _RequestIndicatorControl_Request__cdr_deserialize,
  _RequestIndicatorControl_Request__get_serialized_size,
  _RequestIndicatorControl_Request__max_serialized_size
};

static rosidl_message_type_support_t _RequestIndicatorControl_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RequestIndicatorControl_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carma_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::srv::RequestIndicatorControl_Request>()
{
  return &carma_msgs::srv::typesupport_fastrtps_cpp::_RequestIndicatorControl_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, srv, RequestIndicatorControl_Request)() {
  return &carma_msgs::srv::typesupport_fastrtps_cpp::_RequestIndicatorControl_Request__handle;
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
namespace carma_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_msgs::msg::LightBarIndicator &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_msgs::msg::LightBarIndicator &);
size_t get_serialized_size(
  const carma_msgs::msg::LightBarIndicator &,
  size_t current_alignment);
size_t
max_serialized_size_LightBarIndicator(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_msgs

namespace carma_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_msgs::msg::LightBarCDAType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_msgs::msg::LightBarCDAType &);
size_t get_serialized_size(
  const carma_msgs::msg::LightBarCDAType &,
  size_t current_alignment);
size_t
max_serialized_size_LightBarCDAType(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_msgs


namespace carma_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
cdr_serialize(
  const carma_msgs::srv::RequestIndicatorControl_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ind_list
  {
    size_t size = ros_message.ind_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ind_list[i],
        cdr);
    }
  }
  // Member: cda_list
  {
    size_t size = ros_message.cda_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cda_list[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_msgs::srv::RequestIndicatorControl_Response & ros_message)
{
  // Member: ind_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.ind_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ind_list[i]);
    }
  }

  // Member: cda_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.cda_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cda_list[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
get_serialized_size(
  const carma_msgs::srv::RequestIndicatorControl_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ind_list
  {
    size_t array_size = ros_message.ind_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ind_list[index], current_alignment);
    }
  }
  // Member: cda_list
  {
    size_t array_size = ros_message.cda_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cda_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_msgs
max_serialized_size_RequestIndicatorControl_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ind_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LightBarIndicator(
        full_bounded, current_alignment);
    }
  }

  // Member: cda_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LightBarCDAType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RequestIndicatorControl_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_msgs::srv::RequestIndicatorControl_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RequestIndicatorControl_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_msgs::srv::RequestIndicatorControl_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RequestIndicatorControl_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_msgs::srv::RequestIndicatorControl_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RequestIndicatorControl_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RequestIndicatorControl_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _RequestIndicatorControl_Response__callbacks = {
  "carma_msgs::srv",
  "RequestIndicatorControl_Response",
  _RequestIndicatorControl_Response__cdr_serialize,
  _RequestIndicatorControl_Response__cdr_deserialize,
  _RequestIndicatorControl_Response__get_serialized_size,
  _RequestIndicatorControl_Response__max_serialized_size
};

static rosidl_message_type_support_t _RequestIndicatorControl_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RequestIndicatorControl_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carma_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_msgs::srv::RequestIndicatorControl_Response>()
{
  return &carma_msgs::srv::typesupport_fastrtps_cpp::_RequestIndicatorControl_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, srv, RequestIndicatorControl_Response)() {
  return &carma_msgs::srv::typesupport_fastrtps_cpp::_RequestIndicatorControl_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace carma_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RequestIndicatorControl__callbacks = {
  "carma_msgs::srv",
  "RequestIndicatorControl",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, srv, RequestIndicatorControl_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, srv, RequestIndicatorControl_Response)(),
};

static rosidl_service_type_support_t _RequestIndicatorControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RequestIndicatorControl__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace carma_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<carma_msgs::srv::RequestIndicatorControl>()
{
  return &carma_msgs::srv::typesupport_fastrtps_cpp::_RequestIndicatorControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_msgs, srv, RequestIndicatorControl)() {
  return &carma_msgs::srv::typesupport_fastrtps_cpp::_RequestIndicatorControl__handle;
}

#ifdef __cplusplus
}
#endif
