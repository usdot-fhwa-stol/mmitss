// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from carma_perception_msgs:msg/RoadwayObstacle.idl
// generated code does not contain a copyright notice
#include "carma_perception_msgs/msg/detail/roadway_obstacle__rosidl_typesupport_fastrtps_cpp.hpp"
#include "carma_perception_msgs/msg/detail/roadway_obstacle__struct.hpp"

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
namespace carma_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_perception_msgs::msg::ExternalObject &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_perception_msgs::msg::ExternalObject &);
size_t get_serialized_size(
  const carma_perception_msgs::msg::ExternalObject &,
  size_t current_alignment);
size_t
max_serialized_size_ExternalObject(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_perception_msgs

namespace carma_perception_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const carma_perception_msgs::msg::ConnectedVehicleType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  carma_perception_msgs::msg::ConnectedVehicleType &);
size_t get_serialized_size(
  const carma_perception_msgs::msg::ConnectedVehicleType &,
  size_t current_alignment);
size_t
max_serialized_size_ConnectedVehicleType(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace carma_perception_msgs


namespace carma_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
cdr_serialize(
  const carma_perception_msgs::msg::RoadwayObstacle & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: object
  carma_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.object,
    cdr);
  // Member: connected_vehicle_type
  carma_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.connected_vehicle_type,
    cdr);
  // Member: lanelet_id
  cdr << ros_message.lanelet_id;
  // Member: cross_track
  cdr << ros_message.cross_track;
  // Member: down_track
  cdr << ros_message.down_track;
  // Member: predicted_lanelet_ids
  {
    cdr << ros_message.predicted_lanelet_ids;
  }
  // Member: predicted_lanelet_id_confidences
  {
    cdr << ros_message.predicted_lanelet_id_confidences;
  }
  // Member: predicted_cross_tracks
  {
    cdr << ros_message.predicted_cross_tracks;
  }
  // Member: predicted_cross_track_confidences
  {
    cdr << ros_message.predicted_cross_track_confidences;
  }
  // Member: predicted_down_tracks
  {
    cdr << ros_message.predicted_down_tracks;
  }
  // Member: predicted_down_track_confidences
  {
    cdr << ros_message.predicted_down_track_confidences;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  carma_perception_msgs::msg::RoadwayObstacle & ros_message)
{
  // Member: object
  carma_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.object);

  // Member: connected_vehicle_type
  carma_perception_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.connected_vehicle_type);

  // Member: lanelet_id
  cdr >> ros_message.lanelet_id;

  // Member: cross_track
  cdr >> ros_message.cross_track;

  // Member: down_track
  cdr >> ros_message.down_track;

  // Member: predicted_lanelet_ids
  {
    cdr >> ros_message.predicted_lanelet_ids;
  }

  // Member: predicted_lanelet_id_confidences
  {
    cdr >> ros_message.predicted_lanelet_id_confidences;
  }

  // Member: predicted_cross_tracks
  {
    cdr >> ros_message.predicted_cross_tracks;
  }

  // Member: predicted_cross_track_confidences
  {
    cdr >> ros_message.predicted_cross_track_confidences;
  }

  // Member: predicted_down_tracks
  {
    cdr >> ros_message.predicted_down_tracks;
  }

  // Member: predicted_down_track_confidences
  {
    cdr >> ros_message.predicted_down_track_confidences;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
get_serialized_size(
  const carma_perception_msgs::msg::RoadwayObstacle & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: object

  current_alignment +=
    carma_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.object, current_alignment);
  // Member: connected_vehicle_type

  current_alignment +=
    carma_perception_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.connected_vehicle_type, current_alignment);
  // Member: lanelet_id
  {
    size_t item_size = sizeof(ros_message.lanelet_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cross_track
  {
    size_t item_size = sizeof(ros_message.cross_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: down_track
  {
    size_t item_size = sizeof(ros_message.down_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: predicted_lanelet_ids
  {
    size_t array_size = ros_message.predicted_lanelet_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_lanelet_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: predicted_lanelet_id_confidences
  {
    size_t array_size = ros_message.predicted_lanelet_id_confidences.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_lanelet_id_confidences[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: predicted_cross_tracks
  {
    size_t array_size = ros_message.predicted_cross_tracks.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_cross_tracks[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: predicted_cross_track_confidences
  {
    size_t array_size = ros_message.predicted_cross_track_confidences.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_cross_track_confidences[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: predicted_down_tracks
  {
    size_t array_size = ros_message.predicted_down_tracks.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_down_tracks[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: predicted_down_track_confidences
  {
    size_t array_size = ros_message.predicted_down_track_confidences.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.predicted_down_track_confidences[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_carma_perception_msgs
max_serialized_size_RoadwayObstacle(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: object
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ExternalObject(
        full_bounded, current_alignment);
    }
  }

  // Member: connected_vehicle_type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        carma_perception_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ConnectedVehicleType(
        full_bounded, current_alignment);
    }
  }

  // Member: lanelet_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cross_track
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: down_track
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: predicted_lanelet_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: predicted_lanelet_id_confidences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: predicted_cross_tracks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: predicted_cross_track_confidences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: predicted_down_tracks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: predicted_down_track_confidences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RoadwayObstacle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const carma_perception_msgs::msg::RoadwayObstacle *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RoadwayObstacle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<carma_perception_msgs::msg::RoadwayObstacle *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RoadwayObstacle__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const carma_perception_msgs::msg::RoadwayObstacle *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RoadwayObstacle__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RoadwayObstacle(full_bounded, 0);
}

static message_type_support_callbacks_t _RoadwayObstacle__callbacks = {
  "carma_perception_msgs::msg",
  "RoadwayObstacle",
  _RoadwayObstacle__cdr_serialize,
  _RoadwayObstacle__cdr_deserialize,
  _RoadwayObstacle__get_serialized_size,
  _RoadwayObstacle__max_serialized_size
};

static rosidl_message_type_support_t _RoadwayObstacle__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RoadwayObstacle__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace carma_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_perception_msgs::msg::RoadwayObstacle>()
{
  return &carma_perception_msgs::msg::typesupport_fastrtps_cpp::_RoadwayObstacle__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, carma_perception_msgs, msg, RoadwayObstacle)() {
  return &carma_perception_msgs::msg::typesupport_fastrtps_cpp::_RoadwayObstacle__handle;
}

#ifdef __cplusplus
}
#endif
