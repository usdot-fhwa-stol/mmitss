// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__struct.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // signal
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // signal

// forward declare type support functions


using _TrafficControlDetail__ros_msg_type = j2735_v2x_msgs__msg__TrafficControlDetail;

static bool _TrafficControlDetail__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficControlDetail__ros_msg_type * ros_message = static_cast<const _TrafficControlDetail__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr << ros_message->choice;
  }

  // Field name: signal
  {
    size_t size = ros_message->signal.size;
    auto array_ptr = ros_message->signal.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: closed
  {
    cdr << ros_message->closed;
  }

  // Field name: chains
  {
    cdr << ros_message->chains;
  }

  // Field name: direction
  {
    cdr << ros_message->direction;
  }

  // Field name: lataffinity
  {
    cdr << ros_message->lataffinity;
  }

  // Field name: latperm
  {
    size_t size = 2;
    auto array_ptr = ros_message->latperm;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: parking
  {
    cdr << ros_message->parking;
  }

  // Field name: minspeed
  {
    cdr << ros_message->minspeed;
  }

  // Field name: maxspeed
  {
    cdr << ros_message->maxspeed;
  }

  // Field name: minhdwy
  {
    cdr << ros_message->minhdwy;
  }

  // Field name: maxvehmass
  {
    cdr << ros_message->maxvehmass;
  }

  // Field name: maxvehheight
  {
    cdr << ros_message->maxvehheight;
  }

  // Field name: maxvehwidth
  {
    cdr << ros_message->maxvehwidth;
  }

  // Field name: maxvehlength
  {
    cdr << ros_message->maxvehlength;
  }

  // Field name: maxvehaxles
  {
    cdr << ros_message->maxvehaxles;
  }

  // Field name: minvehocc
  {
    cdr << ros_message->minvehocc;
  }

  // Field name: maxplatoonsize
  {
    cdr << ros_message->maxplatoonsize;
  }

  // Field name: minplatoonhdwy
  {
    cdr << ros_message->minplatoonhdwy;
  }

  return true;
}

static bool _TrafficControlDetail__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficControlDetail__ros_msg_type * ros_message = static_cast<_TrafficControlDetail__ros_msg_type *>(untyped_ros_message);
  // Field name: choice
  {
    cdr >> ros_message->choice;
  }

  // Field name: signal
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->signal.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->signal);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->signal, size)) {
      return "failed to create array for field 'signal'";
    }
    auto array_ptr = ros_message->signal.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: closed
  {
    cdr >> ros_message->closed;
  }

  // Field name: chains
  {
    cdr >> ros_message->chains;
  }

  // Field name: direction
  {
    cdr >> ros_message->direction;
  }

  // Field name: lataffinity
  {
    cdr >> ros_message->lataffinity;
  }

  // Field name: latperm
  {
    size_t size = 2;
    auto array_ptr = ros_message->latperm;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: parking
  {
    cdr >> ros_message->parking;
  }

  // Field name: minspeed
  {
    cdr >> ros_message->minspeed;
  }

  // Field name: maxspeed
  {
    cdr >> ros_message->maxspeed;
  }

  // Field name: minhdwy
  {
    cdr >> ros_message->minhdwy;
  }

  // Field name: maxvehmass
  {
    cdr >> ros_message->maxvehmass;
  }

  // Field name: maxvehheight
  {
    cdr >> ros_message->maxvehheight;
  }

  // Field name: maxvehwidth
  {
    cdr >> ros_message->maxvehwidth;
  }

  // Field name: maxvehlength
  {
    cdr >> ros_message->maxvehlength;
  }

  // Field name: maxvehaxles
  {
    cdr >> ros_message->maxvehaxles;
  }

  // Field name: minvehocc
  {
    cdr >> ros_message->minvehocc;
  }

  // Field name: maxplatoonsize
  {
    cdr >> ros_message->maxplatoonsize;
  }

  // Field name: minplatoonhdwy
  {
    cdr >> ros_message->minplatoonhdwy;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__TrafficControlDetail(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficControlDetail__ros_msg_type * ros_message = static_cast<const _TrafficControlDetail__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name choice
  {
    size_t item_size = sizeof(ros_message->choice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal
  {
    size_t array_size = ros_message->signal.size;
    auto array_ptr = ros_message->signal.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name closed
  {
    size_t item_size = sizeof(ros_message->closed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chains
  {
    size_t item_size = sizeof(ros_message->chains);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction
  {
    size_t item_size = sizeof(ros_message->direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lataffinity
  {
    size_t item_size = sizeof(ros_message->lataffinity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latperm
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->latperm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parking
  {
    size_t item_size = sizeof(ros_message->parking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name minspeed
  {
    size_t item_size = sizeof(ros_message->minspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maxspeed
  {
    size_t item_size = sizeof(ros_message->maxspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name minhdwy
  {
    size_t item_size = sizeof(ros_message->minhdwy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maxvehmass
  {
    size_t item_size = sizeof(ros_message->maxvehmass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maxvehheight
  {
    size_t item_size = sizeof(ros_message->maxvehheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maxvehwidth
  {
    size_t item_size = sizeof(ros_message->maxvehwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maxvehlength
  {
    size_t item_size = sizeof(ros_message->maxvehlength);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maxvehaxles
  {
    size_t item_size = sizeof(ros_message->maxvehaxles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name minvehocc
  {
    size_t item_size = sizeof(ros_message->minvehocc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maxplatoonsize
  {
    size_t item_size = sizeof(ros_message->maxplatoonsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name minplatoonhdwy
  {
    size_t item_size = sizeof(ros_message->minplatoonhdwy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficControlDetail__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_j2735_v2x_msgs__msg__TrafficControlDetail(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__TrafficControlDetail(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: choice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: closed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: chains
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lataffinity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: latperm
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parking
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: minspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: maxspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: minhdwy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: maxvehmass
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: maxvehheight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: maxvehwidth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: maxvehlength
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: maxvehaxles
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: minvehocc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: maxplatoonsize
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: minplatoonhdwy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficControlDetail__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_j2735_v2x_msgs__msg__TrafficControlDetail(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrafficControlDetail = {
  "j2735_v2x_msgs::msg",
  "TrafficControlDetail",
  _TrafficControlDetail__cdr_serialize,
  _TrafficControlDetail__cdr_deserialize,
  _TrafficControlDetail__get_serialized_size,
  _TrafficControlDetail__max_serialized_size
};

static rosidl_message_type_support_t _TrafficControlDetail__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficControlDetail,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, TrafficControlDetail)() {
  return &_TrafficControlDetail__type_support;
}

#if defined(__cplusplus)
}
#endif
