// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__struct.h"
#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__functions.h"
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

#include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"  // cda_type
#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"  // indicator
#include "rosidl_runtime_c/string.h"  // requester_name
#include "rosidl_runtime_c/string_functions.h"  // requester_name

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_driver_msgs
size_t get_serialized_size_carma_msgs__msg__LightBarCDAType(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_driver_msgs
size_t max_serialized_size_carma_msgs__msg__LightBarCDAType(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_driver_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarCDAType)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_driver_msgs
size_t get_serialized_size_carma_msgs__msg__LightBarIndicator(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_driver_msgs
size_t max_serialized_size_carma_msgs__msg__LightBarIndicator(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_carma_driver_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarIndicator)();


using _SetLightBarIndicator_Request__ros_msg_type = carma_driver_msgs__srv__SetLightBarIndicator_Request;

static bool _SetLightBarIndicator_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLightBarIndicator_Request__ros_msg_type * ros_message = static_cast<const _SetLightBarIndicator_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: requester_name
  {
    const rosidl_runtime_c__String * str = &ros_message->requester_name;
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

  // Field name: indicator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarIndicator
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->indicator, cdr))
    {
      return false;
    }
  }

  // Field name: cda_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarCDAType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cda_type, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SetLightBarIndicator_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLightBarIndicator_Request__ros_msg_type * ros_message = static_cast<_SetLightBarIndicator_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: requester_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->requester_name.data) {
      rosidl_runtime_c__String__init(&ros_message->requester_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->requester_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'requester_name'\n");
      return false;
    }
  }

  // Field name: indicator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarIndicator
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->indicator))
    {
      return false;
    }
  }

  // Field name: cda_type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarCDAType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cda_type))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__srv__SetLightBarIndicator_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLightBarIndicator_Request__ros_msg_type * ros_message = static_cast<const _SetLightBarIndicator_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name requester_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requester_name.size + 1);
  // field.name indicator

  current_alignment += get_serialized_size_carma_msgs__msg__LightBarIndicator(
    &(ros_message->indicator), current_alignment);
  // field.name cda_type

  current_alignment += get_serialized_size_carma_msgs__msg__LightBarCDAType(
    &(ros_message->cda_type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SetLightBarIndicator_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_driver_msgs__srv__SetLightBarIndicator_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__srv__SetLightBarIndicator_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: requester_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: indicator
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_msgs__msg__LightBarIndicator(
        full_bounded, current_alignment);
    }
  }
  // member: cda_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_msgs__msg__LightBarCDAType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLightBarIndicator_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_driver_msgs__srv__SetLightBarIndicator_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetLightBarIndicator_Request = {
  "carma_driver_msgs::srv",
  "SetLightBarIndicator_Request",
  _SetLightBarIndicator_Request__cdr_serialize,
  _SetLightBarIndicator_Request__cdr_deserialize,
  _SetLightBarIndicator_Request__get_serialized_size,
  _SetLightBarIndicator_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetLightBarIndicator_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLightBarIndicator_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SetLightBarIndicator_Request)() {
  return &_SetLightBarIndicator_Request__type_support;
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
// #include "carma_driver_msgs/srv/detail/set_light_bar_indicator__struct.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_light_bar_indicator__functions.h"
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


using _SetLightBarIndicator_Response__ros_msg_type = carma_driver_msgs__srv__SetLightBarIndicator_Response;

static bool _SetLightBarIndicator_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetLightBarIndicator_Response__ros_msg_type * ros_message = static_cast<const _SetLightBarIndicator_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status_code
  {
    cdr << ros_message->status_code;
  }

  return true;
}

static bool _SetLightBarIndicator_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetLightBarIndicator_Response__ros_msg_type * ros_message = static_cast<_SetLightBarIndicator_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status_code
  {
    cdr >> ros_message->status_code;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__srv__SetLightBarIndicator_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetLightBarIndicator_Response__ros_msg_type * ros_message = static_cast<const _SetLightBarIndicator_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status_code
  {
    size_t item_size = sizeof(ros_message->status_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLightBarIndicator_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_driver_msgs__srv__SetLightBarIndicator_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__srv__SetLightBarIndicator_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLightBarIndicator_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_driver_msgs__srv__SetLightBarIndicator_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetLightBarIndicator_Response = {
  "carma_driver_msgs::srv",
  "SetLightBarIndicator_Response",
  _SetLightBarIndicator_Response__cdr_serialize,
  _SetLightBarIndicator_Response__cdr_deserialize,
  _SetLightBarIndicator_Response__get_serialized_size,
  _SetLightBarIndicator_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetLightBarIndicator_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetLightBarIndicator_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SetLightBarIndicator_Response)() {
  return &_SetLightBarIndicator_Response__type_support;
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
#include "carma_driver_msgs/srv/set_light_bar_indicator.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetLightBarIndicator__callbacks = {
  "carma_driver_msgs::srv",
  "SetLightBarIndicator",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SetLightBarIndicator_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SetLightBarIndicator_Response)(),
};

static rosidl_service_type_support_t SetLightBarIndicator__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetLightBarIndicator__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, srv, SetLightBarIndicator)() {
  return &SetLightBarIndicator__handle;
}

#if defined(__cplusplus)
}
#endif
