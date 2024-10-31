// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/map_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_v2x_msgs/msg/detail/map_data__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace j2735_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j2735_v2x_msgs::msg::LayerType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::LayerType &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::LayerType &,
  size_t current_alignment);
size_t
max_serialized_size_LayerType(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs

namespace carma_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_v2x_msgs::msg::IntersectionGeometry &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::IntersectionGeometry &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::IntersectionGeometry &,
  size_t current_alignment);
size_t
max_serialized_size_IntersectionGeometry(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs

namespace carma_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_v2x_msgs::msg::RoadSegment &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_v2x_msgs::msg::RoadSegment &);
size_t get_serialized_size(
  const carma_v2x_msgs::msg::RoadSegment &,
  size_t current_alignment);
size_t
max_serialized_size_RoadSegment(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_v2x_msgs

namespace j2735_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j2735_v2x_msgs::msg::DataParameters &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::DataParameters &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::DataParameters &,
  size_t current_alignment);
size_t
max_serialized_size_DataParameters(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs

namespace j2735_v2x_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const j2735_v2x_msgs::msg::RestrictionClassAssignment &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs::msg::RestrictionClassAssignment &);
size_t get_serialized_size(
  const j2735_v2x_msgs::msg::RestrictionClassAssignment &,
  size_t current_alignment);
size_t
max_serialized_size_RestrictionClassAssignment(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace j2735_v2x_msgs


namespace carma_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_serialize(
  const carma_v2x_msgs::msg::MapData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: time_stamp
  cdr << ros_message.time_stamp;
  // Member: time_stamp_exists
  cdr << (ros_message.time_stamp_exists ? true : false);
  // Member: msg_issue_revision
  cdr << ros_message.msg_issue_revision;
  // Member: layer_type
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.layer_type,
    cdr);
  // Member: layer_id
  cdr << ros_message.layer_id;
  // Member: layer_id_exists
  cdr << (ros_message.layer_id_exists ? true : false);
  // Member: intersections
  {
    size_t size = ros_message.intersections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.intersections[i],
        cdr);
    }
  }
  // Member: intersections_exists
  cdr << (ros_message.intersections_exists ? true : false);
  // Member: road_segment_list
  {
    size_t size = ros_message.road_segment_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.road_segment_list[i],
        cdr);
    }
  }
  // Member: road_segments_exists
  cdr << (ros_message.road_segments_exists ? true : false);
  // Member: data_parameters
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.data_parameters,
    cdr);
  // Member: data_parameters_exists
  cdr << (ros_message.data_parameters_exists ? true : false);
  // Member: restriction_class_list
  {
    size_t size = ros_message.restriction_class_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.restriction_class_list[i],
        cdr);
    }
  }
  // Member: restriction_list_exists
  cdr << (ros_message.restriction_list_exists ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_v2x_msgs::msg::MapData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: time_stamp
  cdr >> ros_message.time_stamp;

  // Member: time_stamp_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.time_stamp_exists = tmp ? true : false;
  }

  // Member: msg_issue_revision
  cdr >> ros_message.msg_issue_revision;

  // Member: layer_type
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.layer_type);

  // Member: layer_id
  cdr >> ros_message.layer_id;

  // Member: layer_id_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.layer_id_exists = tmp ? true : false;
  }

  // Member: intersections
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.intersections.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.intersections[i]);
    }
  }

  // Member: intersections_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.intersections_exists = tmp ? true : false;
  }

  // Member: road_segment_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.road_segment_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      carma_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.road_segment_list[i]);
    }
  }

  // Member: road_segments_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.road_segments_exists = tmp ? true : false;
  }

  // Member: data_parameters
  j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.data_parameters);

  // Member: data_parameters_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.data_parameters_exists = tmp ? true : false;
  }

  // Member: restriction_class_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.restriction_class_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.restriction_class_list[i]);
    }
  }

  // Member: restriction_list_exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.restriction_list_exists = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
get_serialized_size(
  const carma_v2x_msgs::msg::MapData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: time_stamp
  {
    size_t item_size = sizeof(ros_message.time_stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_stamp_exists
  {
    size_t item_size = sizeof(ros_message.time_stamp_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_issue_revision
  {
    size_t item_size = sizeof(ros_message.msg_issue_revision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: layer_type

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.layer_type, current_alignment);
  // Member: layer_id
  {
    size_t item_size = sizeof(ros_message.layer_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: layer_id_exists
  {
    size_t item_size = sizeof(ros_message.layer_id_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: intersections
  {
    size_t array_size = ros_message.intersections.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.intersections[index], current_alignment);
    }
  }
  // Member: intersections_exists
  {
    size_t item_size = sizeof(ros_message.intersections_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_segment_list
  {
    size_t array_size = ros_message.road_segment_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.road_segment_list[index], current_alignment);
    }
  }
  // Member: road_segments_exists
  {
    size_t item_size = sizeof(ros_message.road_segments_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data_parameters

  current_alignment +=
    j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.data_parameters, current_alignment);
  // Member: data_parameters_exists
  {
    size_t item_size = sizeof(ros_message.data_parameters_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: restriction_class_list
  {
    size_t array_size = ros_message.restriction_class_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.restriction_class_list[index], current_alignment);
    }
  }
  // Member: restriction_list_exists
  {
    size_t item_size = sizeof(ros_message.restriction_list_exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_v2x_msgs
max_serialized_size_MapData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: time_stamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_stamp_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_issue_revision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: layer_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LayerType(
        full_bounded, current_alignment);
    }
  }

  // Member: layer_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: layer_id_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: intersections
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IntersectionGeometry(
        full_bounded, current_alignment);
    }
  }

  // Member: intersections_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: road_segment_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RoadSegment(
        full_bounded, current_alignment);
    }
  }

  // Member: road_segments_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data_parameters
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DataParameters(
        full_bounded, current_alignment);
    }
  }

  // Member: data_parameters_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: restriction_class_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        j2735_v2x_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RestrictionClassAssignment(
        full_bounded, current_alignment);
    }
  }

  // Member: restriction_list_exists
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MapData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::MapData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MapData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_v2x_msgs::msg::MapData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MapData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_v2x_msgs::msg::MapData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MapData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MapData(full_bounded, 0);
}

static message_type_support_callbacks_t _MapData__callbacks = {
  "carma_v2x_msgs::msg",
  "MapData",
  _MapData__cdr_serialize,
  _MapData__cdr_deserialize,
  _MapData__get_serialized_size,
  _MapData__max_serialized_size
};

static rosidl_message_type_support_t _MapData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MapData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_v2x_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_v2x_msgs::msg::MapData>()
{
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_MapData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_v2x_msgs, msg, MapData)() {
  return &carma_v2x_msgs::msg::typesupport_fastrtps_cpp::_MapData__handle;
}

#ifdef __cplusplus
}
#endif
