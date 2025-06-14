// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:srv/PluginActivation.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/srv/detail/plugin_activation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/detail/plugin_activation__struct.h"
#include "carma_planning_msgs/srv/detail/plugin_activation__functions.h"
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

#include "rosidl_runtime_c/string.h"  // plugin_name, plugin_version
#include "rosidl_runtime_c/string_functions.h"  // plugin_name, plugin_version
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PluginActivation_Request__ros_msg_type = carma_planning_msgs__srv__PluginActivation_Request;

static bool _PluginActivation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PluginActivation_Request__ros_msg_type * ros_message = static_cast<const _PluginActivation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: plugin_name
  {
    const rosidl_runtime_c__String * str = &ros_message->plugin_name;
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

  // Field name: plugin_version
  {
    const rosidl_runtime_c__String * str = &ros_message->plugin_version;
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

  // Field name: activated
  {
    cdr << (ros_message->activated ? true : false);
  }

  return true;
}

static bool _PluginActivation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PluginActivation_Request__ros_msg_type * ros_message = static_cast<_PluginActivation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: plugin_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->plugin_name.data) {
      rosidl_runtime_c__String__init(&ros_message->plugin_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->plugin_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'plugin_name'\n");
      return false;
    }
  }

  // Field name: plugin_version
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->plugin_version.data) {
      rosidl_runtime_c__String__init(&ros_message->plugin_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->plugin_version,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'plugin_version'\n");
      return false;
    }
  }

  // Field name: activated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->activated = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__PluginActivation_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PluginActivation_Request__ros_msg_type * ros_message = static_cast<const _PluginActivation_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name plugin_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->plugin_name.size + 1);
  // field.name plugin_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->plugin_version.size + 1);
  // field.name activated
  {
    size_t item_size = sizeof(ros_message->activated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PluginActivation_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__PluginActivation_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__PluginActivation_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: plugin_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: plugin_version
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: activated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PluginActivation_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__PluginActivation_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PluginActivation_Request = {
  "carma_planning_msgs::srv",
  "PluginActivation_Request",
  _PluginActivation_Request__cdr_serialize,
  _PluginActivation_Request__cdr_deserialize,
  _PluginActivation_Request__get_serialized_size,
  _PluginActivation_Request__max_serialized_size
};

static rosidl_message_type_support_t _PluginActivation_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PluginActivation_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PluginActivation_Request)() {
  return &_PluginActivation_Request__type_support;
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
// #include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_activation__struct.h"
// already included above
// #include "carma_planning_msgs/srv/detail/plugin_activation__functions.h"
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


// forward declare type support functions


using _PluginActivation_Response__ros_msg_type = carma_planning_msgs__srv__PluginActivation_Response;

static bool _PluginActivation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PluginActivation_Response__ros_msg_type * ros_message = static_cast<const _PluginActivation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: newstate
  {
    cdr << (ros_message->newstate ? true : false);
  }

  return true;
}

static bool _PluginActivation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PluginActivation_Response__ros_msg_type * ros_message = static_cast<_PluginActivation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: newstate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->newstate = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__srv__PluginActivation_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PluginActivation_Response__ros_msg_type * ros_message = static_cast<const _PluginActivation_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name newstate
  {
    size_t item_size = sizeof(ros_message->newstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PluginActivation_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__srv__PluginActivation_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__srv__PluginActivation_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: newstate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PluginActivation_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__srv__PluginActivation_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PluginActivation_Response = {
  "carma_planning_msgs::srv",
  "PluginActivation_Response",
  _PluginActivation_Response__cdr_serialize,
  _PluginActivation_Response__cdr_deserialize,
  _PluginActivation_Response__get_serialized_size,
  _PluginActivation_Response__max_serialized_size
};

static rosidl_message_type_support_t _PluginActivation_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PluginActivation_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PluginActivation_Response)() {
  return &_PluginActivation_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/srv/plugin_activation.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PluginActivation__callbacks = {
  "carma_planning_msgs::srv",
  "PluginActivation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PluginActivation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PluginActivation_Response)(),
};

static rosidl_service_type_support_t PluginActivation__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PluginActivation__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, srv, PluginActivation)() {
  return &PluginActivation__handle;
}

#if defined(__cplusplus)
}
#endif
