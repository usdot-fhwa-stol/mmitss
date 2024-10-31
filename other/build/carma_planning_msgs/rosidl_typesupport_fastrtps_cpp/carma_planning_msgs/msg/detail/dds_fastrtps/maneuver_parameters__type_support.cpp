// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_planning_msgs:msg/ManeuverParameters.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/maneuver_parameters__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_planning_msgs/msg/detail/maneuver_parameters__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace carma_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_serialize(
  const carma_planning_msgs::msg::ManeuverParameters & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: maneuver_id
  cdr << ros_message.maneuver_id;
  // Member: negotiation_type
  cdr << ros_message.negotiation_type;
  // Member: planning_strategic_plugin
  cdr << ros_message.planning_strategic_plugin;
  // Member: presence_vector
  cdr << ros_message.presence_vector;
  // Member: planning_tactical_plugin
  cdr << ros_message.planning_tactical_plugin;
  // Member: bool_valued_meta_data
  {
    cdr << ros_message.bool_valued_meta_data;
  }
  // Member: int_valued_meta_data
  {
    cdr << ros_message.int_valued_meta_data;
  }
  // Member: float_valued_meta_data
  {
    cdr << ros_message.float_valued_meta_data;
  }
  // Member: string_valued_meta_data
  {
    cdr << ros_message.string_valued_meta_data;
  }
  // Member: time_valued_meta_data
  {
    size_t size = ros_message.time_valued_meta_data.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.time_valued_meta_data[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_planning_msgs::msg::ManeuverParameters & ros_message)
{
  // Member: maneuver_id
  cdr >> ros_message.maneuver_id;

  // Member: negotiation_type
  cdr >> ros_message.negotiation_type;

  // Member: planning_strategic_plugin
  cdr >> ros_message.planning_strategic_plugin;

  // Member: presence_vector
  cdr >> ros_message.presence_vector;

  // Member: planning_tactical_plugin
  cdr >> ros_message.planning_tactical_plugin;

  // Member: bool_valued_meta_data
  {
    cdr >> ros_message.bool_valued_meta_data;
  }

  // Member: int_valued_meta_data
  {
    cdr >> ros_message.int_valued_meta_data;
  }

  // Member: float_valued_meta_data
  {
    cdr >> ros_message.float_valued_meta_data;
  }

  // Member: string_valued_meta_data
  {
    cdr >> ros_message.string_valued_meta_data;
  }

  // Member: time_valued_meta_data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.time_valued_meta_data.resize(size);
    for (size_t i = 0; i < size; i++) {
      builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.time_valued_meta_data[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
get_serialized_size(
  const carma_planning_msgs::msg::ManeuverParameters & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: maneuver_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.maneuver_id.size() + 1);
  // Member: negotiation_type
  {
    size_t item_size = sizeof(ros_message.negotiation_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: planning_strategic_plugin
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.planning_strategic_plugin.size() + 1);
  // Member: presence_vector
  {
    size_t item_size = sizeof(ros_message.presence_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: planning_tactical_plugin
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.planning_tactical_plugin.size() + 1);
  // Member: bool_valued_meta_data
  {
    size_t array_size = ros_message.bool_valued_meta_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.bool_valued_meta_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: int_valued_meta_data
  {
    size_t array_size = ros_message.int_valued_meta_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.int_valued_meta_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float_valued_meta_data
  {
    size_t array_size = ros_message.float_valued_meta_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.float_valued_meta_data[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: string_valued_meta_data
  {
    size_t array_size = ros_message.string_valued_meta_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_valued_meta_data[index].size() + 1);
    }
  }
  // Member: time_valued_meta_data
  {
    size_t array_size = ros_message.time_valued_meta_data.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.time_valued_meta_data[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_planning_msgs
max_serialized_size_ManeuverParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: maneuver_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: negotiation_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: planning_strategic_plugin
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: presence_vector
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: planning_tactical_plugin
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bool_valued_meta_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: int_valued_meta_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: float_valued_meta_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: string_valued_meta_data
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

  // Member: time_valued_meta_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ManeuverParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::ManeuverParameters *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ManeuverParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_planning_msgs::msg::ManeuverParameters *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ManeuverParameters__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_planning_msgs::msg::ManeuverParameters *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ManeuverParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ManeuverParameters(full_bounded, 0);
}

static message_type_support_callbacks_t _ManeuverParameters__callbacks = {
  "carma_planning_msgs::msg",
  "ManeuverParameters",
  _ManeuverParameters__cdr_serialize,
  _ManeuverParameters__cdr_deserialize,
  _ManeuverParameters__get_serialized_size,
  _ManeuverParameters__max_serialized_size
};

static rosidl_message_type_support_t _ManeuverParameters__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ManeuverParameters__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_planning_msgs::msg::ManeuverParameters>()
{
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_ManeuverParameters__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_planning_msgs, msg, ManeuverParameters)() {
  return &carma_planning_msgs::msg::typesupport_fastrtps_cpp::_ManeuverParameters__handle;
}

#ifdef __cplusplus
}
#endif
