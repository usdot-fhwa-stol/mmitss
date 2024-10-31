// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__rosidl_typesupport_fastrtps_cpp.hpp"
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__struct.hpp"

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

namespace j2735_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_serialize(
  const j2735_v2x_msgs::msg::TrafficControlDetail & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: choice
  cdr << ros_message.choice;
  // Member: signal
  {
    cdr << ros_message.signal;
  }
  // Member: closed
  cdr << ros_message.closed;
  // Member: chains
  cdr << ros_message.chains;
  // Member: direction
  cdr << ros_message.direction;
  // Member: lataffinity
  cdr << ros_message.lataffinity;
  // Member: latperm
  {
    cdr << ros_message.latperm;
  }
  // Member: parking
  cdr << ros_message.parking;
  // Member: minspeed
  cdr << ros_message.minspeed;
  // Member: maxspeed
  cdr << ros_message.maxspeed;
  // Member: minhdwy
  cdr << ros_message.minhdwy;
  // Member: maxvehmass
  cdr << ros_message.maxvehmass;
  // Member: maxvehheight
  cdr << ros_message.maxvehheight;
  // Member: maxvehwidth
  cdr << ros_message.maxvehwidth;
  // Member: maxvehlength
  cdr << ros_message.maxvehlength;
  // Member: maxvehaxles
  cdr << ros_message.maxvehaxles;
  // Member: minvehocc
  cdr << ros_message.minvehocc;
  // Member: maxplatoonsize
  cdr << ros_message.maxplatoonsize;
  // Member: minplatoonhdwy
  cdr << ros_message.minplatoonhdwy;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::TrafficControlDetail & ros_message)
{
  // Member: choice
  cdr >> ros_message.choice;

  // Member: signal
  {
    cdr >> ros_message.signal;
  }

  // Member: closed
  cdr >> ros_message.closed;

  // Member: chains
  cdr >> ros_message.chains;

  // Member: direction
  cdr >> ros_message.direction;

  // Member: lataffinity
  cdr >> ros_message.lataffinity;

  // Member: latperm
  {
    cdr >> ros_message.latperm;
  }

  // Member: parking
  cdr >> ros_message.parking;

  // Member: minspeed
  cdr >> ros_message.minspeed;

  // Member: maxspeed
  cdr >> ros_message.maxspeed;

  // Member: minhdwy
  cdr >> ros_message.minhdwy;

  // Member: maxvehmass
  cdr >> ros_message.maxvehmass;

  // Member: maxvehheight
  cdr >> ros_message.maxvehheight;

  // Member: maxvehwidth
  cdr >> ros_message.maxvehwidth;

  // Member: maxvehlength
  cdr >> ros_message.maxvehlength;

  // Member: maxvehaxles
  cdr >> ros_message.maxvehaxles;

  // Member: minvehocc
  cdr >> ros_message.minvehocc;

  // Member: maxplatoonsize
  cdr >> ros_message.maxplatoonsize;

  // Member: minplatoonhdwy
  cdr >> ros_message.minplatoonhdwy;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::TrafficControlDetail & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: choice
  {
    size_t item_size = sizeof(ros_message.choice);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal
  {
    size_t array_size = ros_message.signal.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.signal[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: closed
  {
    size_t item_size = sizeof(ros_message.closed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chains
  {
    size_t item_size = sizeof(ros_message.chains);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction
  {
    size_t item_size = sizeof(ros_message.direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lataffinity
  {
    size_t item_size = sizeof(ros_message.lataffinity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latperm
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.latperm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parking
  {
    size_t item_size = sizeof(ros_message.parking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: minspeed
  {
    size_t item_size = sizeof(ros_message.minspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maxspeed
  {
    size_t item_size = sizeof(ros_message.maxspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: minhdwy
  {
    size_t item_size = sizeof(ros_message.minhdwy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maxvehmass
  {
    size_t item_size = sizeof(ros_message.maxvehmass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maxvehheight
  {
    size_t item_size = sizeof(ros_message.maxvehheight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maxvehwidth
  {
    size_t item_size = sizeof(ros_message.maxvehwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maxvehlength
  {
    size_t item_size = sizeof(ros_message.maxvehlength);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maxvehaxles
  {
    size_t item_size = sizeof(ros_message.maxvehaxles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: minvehocc
  {
    size_t item_size = sizeof(ros_message.minvehocc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maxplatoonsize
  {
    size_t item_size = sizeof(ros_message.maxplatoonsize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: minplatoonhdwy
  {
    size_t item_size = sizeof(ros_message.minplatoonhdwy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_TrafficControlDetail(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: choice
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: signal
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: closed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: chains
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lataffinity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: latperm
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: parking
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: minspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: maxspeed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: minhdwy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: maxvehmass
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: maxvehheight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: maxvehwidth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: maxvehlength
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: maxvehaxles
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: minvehocc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: maxplatoonsize
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: minplatoonhdwy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TrafficControlDetail__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::TrafficControlDetail *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrafficControlDetail__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<j2735_v2x_msgs::msg::TrafficControlDetail *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrafficControlDetail__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const j2735_v2x_msgs::msg::TrafficControlDetail *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrafficControlDetail__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrafficControlDetail(full_bounded, 0);
}

static message_type_support_callbacks_t _TrafficControlDetail__callbacks = {
  "j2735_v2x_msgs::msg",
  "TrafficControlDetail",
  _TrafficControlDetail__cdr_serialize,
  _TrafficControlDetail__cdr_deserialize,
  _TrafficControlDetail__get_serialized_size,
  _TrafficControlDetail__max_serialized_size
};

static rosidl_message_type_support_t _TrafficControlDetail__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrafficControlDetail__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::TrafficControlDetail>()
{
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_TrafficControlDetail__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, TrafficControlDetail)() {
  return &j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::_TrafficControlDetail__handle;
}

#ifdef __cplusplus
}
#endif
