// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_driver_msgs:srv/GetDriversWithCapabilities.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__struct.h"
#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // capabilities
#include "rosidl_runtime_c/string_functions.h"  // capabilities

// forward declare type support functions


using _GetDriversWithCapabilities_Request__ros_msg_type = carma_driver_msgs__srv__GetDriversWithCapabilities_Request;

static bool _GetDriversWithCapabilities_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDriversWithCapabilities_Request__ros_msg_type * ros_message = static_cast<const _GetDriversWithCapabilities_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: capabilities
  {
    size_t size = ros_message->capabilities.size;
    auto array_ptr = ros_message->capabilities.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _GetDriversWithCapabilities_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDriversWithCapabilities_Request__ros_msg_type * ros_message = static_cast<_GetDriversWithCapabilities_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: capabilities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->capabilities.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->capabilities);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->capabilities, size)) {
      return "failed to create array for field 'capabilities'";
    }
    auto array_ptr = ros_message->capabilities.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'capabilities'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__srv__GetDriversWithCapabilities_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDriversWithCapabilities_Request__ros_msg_type * ros_message = static_cast<const _GetDriversWithCapabilities_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name capabilities
  {
    size_t array_size = ros_message->capabilities.size;
    auto array_ptr = ros_message->capabilities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetDriversWithCapabilities_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_driver_msgs__srv__GetDriversWithCapabilities_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__srv__GetDriversWithCapabilities_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: capabilities
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetDriversWithCapabilities_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_driver_msgs__srv__GetDriversWithCapabilities_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetDriversWithCapabilities_Request = {
  "carma_driver_msgs::srv",
  "GetDriversWithCapabilities_Request",
  _GetDriversWithCapabilities_Request__cdr_serialize,
  _GetDriversWithCapabilities_Request__cdr_deserialize,
  _GetDriversWithCapabilities_Request__get_serialized_size,
  _GetDriversWithCapabilities_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetDriversWithCapabilities_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDriversWithCapabilities_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Request)() {
  return &_GetDriversWithCapabilities_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__struct.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // driver_data
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // driver_data

// forward declare type support functions


using _GetDriversWithCapabilities_Response__ros_msg_type = carma_driver_msgs__srv__GetDriversWithCapabilities_Response;

static bool _GetDriversWithCapabilities_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDriversWithCapabilities_Response__ros_msg_type * ros_message = static_cast<const _GetDriversWithCapabilities_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: driver_data
  {
    size_t size = ros_message->driver_data.size;
    auto array_ptr = ros_message->driver_data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _GetDriversWithCapabilities_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDriversWithCapabilities_Response__ros_msg_type * ros_message = static_cast<_GetDriversWithCapabilities_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: driver_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->driver_data.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->driver_data);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->driver_data, size)) {
      return "failed to create array for field 'driver_data'";
    }
    auto array_ptr = ros_message->driver_data.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'driver_data'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__srv__GetDriversWithCapabilities_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDriversWithCapabilities_Response__ros_msg_type * ros_message = static_cast<const _GetDriversWithCapabilities_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name driver_data
  {
    size_t array_size = ros_message->driver_data.size;
    auto array_ptr = ros_message->driver_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetDriversWithCapabilities_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_driver_msgs__srv__GetDriversWithCapabilities_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__srv__GetDriversWithCapabilities_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: driver_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetDriversWithCapabilities_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_driver_msgs__srv__GetDriversWithCapabilities_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetDriversWithCapabilities_Response = {
  "carma_driver_msgs::srv",
  "GetDriversWithCapabilities_Response",
  _GetDriversWithCapabilities_Response__cdr_serialize,
  _GetDriversWithCapabilities_Response__cdr_deserialize,
  _GetDriversWithCapabilities_Response__get_serialized_size,
  _GetDriversWithCapabilities_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetDriversWithCapabilities_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDriversWithCapabilities_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Response)() {
  return &_GetDriversWithCapabilities_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_driver_msgs/srv/get_drivers_with_capabilities.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetDriversWithCapabilities__callbacks = {
  "carma_driver_msgs::srv",
  "GetDriversWithCapabilities",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, GetDriversWithCapabilities_Response)(),
};

static rosidl_service_type_support_t GetDriversWithCapabilities__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetDriversWithCapabilities__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, GetDriversWithCapabilities)() {
  return &GetDriversWithCapabilities__handle;
}

#if defined(__cplusplus)
}
#endif
