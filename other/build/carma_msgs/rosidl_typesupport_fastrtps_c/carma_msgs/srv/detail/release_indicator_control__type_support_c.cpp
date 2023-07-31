// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_msgs:srv/ReleaseIndicatorControl.idl
// generated code does not contain a copyright notice
#include "carma_msgs/srv/detail/release_indicator_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_msgs/srv/detail/release_indicator_control__struct.h"
#include "carma_msgs/srv/detail/release_indicator_control__functions.h"
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

#include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"  // cda_list
#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"  // ind_list
#include "rosidl_runtime_c/string.h"  // requester_name
#include "rosidl_runtime_c/string_functions.h"  // requester_name

// forward declare type support functions
size_t get_serialized_size_carma_msgs__msg__LightBarCDAType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_msgs__msg__LightBarCDAType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarCDAType)();
size_t get_serialized_size_carma_msgs__msg__LightBarIndicator(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_carma_msgs__msg__LightBarIndicator(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarIndicator)();


using _ReleaseIndicatorControl_Request__ros_msg_type = carma_msgs__srv__ReleaseIndicatorControl_Request;

static bool _ReleaseIndicatorControl_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReleaseIndicatorControl_Request__ros_msg_type * ros_message = static_cast<const _ReleaseIndicatorControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ind_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarIndicator
      )()->data);
    size_t size = ros_message->ind_list.size;
    auto array_ptr = ros_message->ind_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: cda_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarCDAType
      )()->data);
    size_t size = ros_message->cda_list.size;
    auto array_ptr = ros_message->cda_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
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

  return true;
}

static bool _ReleaseIndicatorControl_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReleaseIndicatorControl_Request__ros_msg_type * ros_message = static_cast<_ReleaseIndicatorControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ind_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarIndicator
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ind_list.data) {
      carma_msgs__msg__LightBarIndicator__Sequence__fini(&ros_message->ind_list);
    }
    if (!carma_msgs__msg__LightBarIndicator__Sequence__init(&ros_message->ind_list, size)) {
      return "failed to create array for field 'ind_list'";
    }
    auto array_ptr = ros_message->ind_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: cda_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, carma_msgs, msg, LightBarCDAType
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cda_list.data) {
      carma_msgs__msg__LightBarCDAType__Sequence__fini(&ros_message->cda_list);
    }
    if (!carma_msgs__msg__LightBarCDAType__Sequence__init(&ros_message->cda_list, size)) {
      return "failed to create array for field 'cda_list'";
    }
    auto array_ptr = ros_message->cda_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t get_serialized_size_carma_msgs__srv__ReleaseIndicatorControl_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReleaseIndicatorControl_Request__ros_msg_type * ros_message = static_cast<const _ReleaseIndicatorControl_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ind_list
  {
    size_t array_size = ros_message->ind_list.size;
    auto array_ptr = ros_message->ind_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_msgs__msg__LightBarIndicator(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name cda_list
  {
    size_t array_size = ros_message->cda_list.size;
    auto array_ptr = ros_message->cda_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_carma_msgs__msg__LightBarCDAType(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name requester_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requester_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ReleaseIndicatorControl_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_msgs__srv__ReleaseIndicatorControl_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t max_serialized_size_carma_msgs__srv__ReleaseIndicatorControl_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ind_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_msgs__msg__LightBarIndicator(
        full_bounded, current_alignment);
    }
  }
  // member: cda_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_carma_msgs__msg__LightBarCDAType(
        full_bounded, current_alignment);
    }
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

  return current_alignment - initial_alignment;
}

static size_t _ReleaseIndicatorControl_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_msgs__srv__ReleaseIndicatorControl_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ReleaseIndicatorControl_Request = {
  "carma_msgs::srv",
  "ReleaseIndicatorControl_Request",
  _ReleaseIndicatorControl_Request__cdr_serialize,
  _ReleaseIndicatorControl_Request__cdr_deserialize,
  _ReleaseIndicatorControl_Request__get_serialized_size,
  _ReleaseIndicatorControl_Request__max_serialized_size
};

static rosidl_message_type_support_t _ReleaseIndicatorControl_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReleaseIndicatorControl_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, ReleaseIndicatorControl_Request)() {
  return &_ReleaseIndicatorControl_Request__type_support;
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
// #include "carma_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "carma_msgs/srv/detail/release_indicator_control__struct.h"
// already included above
// #include "carma_msgs/srv/detail/release_indicator_control__functions.h"
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


using _ReleaseIndicatorControl_Response__ros_msg_type = carma_msgs__srv__ReleaseIndicatorControl_Response;

static bool _ReleaseIndicatorControl_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReleaseIndicatorControl_Response__ros_msg_type * ros_message = static_cast<const _ReleaseIndicatorControl_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ReleaseIndicatorControl_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReleaseIndicatorControl_Response__ros_msg_type * ros_message = static_cast<_ReleaseIndicatorControl_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t get_serialized_size_carma_msgs__srv__ReleaseIndicatorControl_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReleaseIndicatorControl_Response__ros_msg_type * ros_message = static_cast<const _ReleaseIndicatorControl_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ReleaseIndicatorControl_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_msgs__srv__ReleaseIndicatorControl_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_msgs
size_t max_serialized_size_carma_msgs__srv__ReleaseIndicatorControl_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ReleaseIndicatorControl_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_msgs__srv__ReleaseIndicatorControl_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ReleaseIndicatorControl_Response = {
  "carma_msgs::srv",
  "ReleaseIndicatorControl_Response",
  _ReleaseIndicatorControl_Response__cdr_serialize,
  _ReleaseIndicatorControl_Response__cdr_deserialize,
  _ReleaseIndicatorControl_Response__get_serialized_size,
  _ReleaseIndicatorControl_Response__max_serialized_size
};

static rosidl_message_type_support_t _ReleaseIndicatorControl_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReleaseIndicatorControl_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, ReleaseIndicatorControl_Response)() {
  return &_ReleaseIndicatorControl_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "carma_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_msgs/srv/release_indicator_control.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ReleaseIndicatorControl__callbacks = {
  "carma_msgs::srv",
  "ReleaseIndicatorControl",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, ReleaseIndicatorControl_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, ReleaseIndicatorControl_Response)(),
};

static rosidl_service_type_support_t ReleaseIndicatorControl__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ReleaseIndicatorControl__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_msgs, srv, ReleaseIndicatorControl)() {
  return &ReleaseIndicatorControl__handle;
}

#if defined(__cplusplus)
}
#endif
