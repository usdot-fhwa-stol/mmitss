// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/SensorDataSharingMessage.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'msg_cnt'
#include "j2735_v2x_msgs/msg/detail/msg_count__struct.hpp"
// Member 'source_id'
#include "j2735_v2x_msgs/msg/detail/temporary_id__struct.hpp"
// Member 'equipment_type'
#include "j3224_v2x_msgs/msg/detail/equipment_type__struct.hpp"
// Member 'sdsm_time_stamp'
#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.hpp"
// Member 'ref_pos'
#include "carma_v2x_msgs/msg/detail/position3_d__struct.hpp"
// Member 'ref_pos_xy_conf'
#include "carma_v2x_msgs/msg/detail/positional_accuracy__struct.hpp"
// Member 'objects'
#include "carma_v2x_msgs/msg/detail/detected_object_list__struct.hpp"
// Member 'ref_pos_el_conf'
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__SensorDataSharingMessage __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__SensorDataSharingMessage __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorDataSharingMessage_
{
  using Type = SensorDataSharingMessage_<ContainerAllocator>;

  explicit SensorDataSharingMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg_cnt(_init),
    source_id(_init),
    equipment_type(_init),
    sdsm_time_stamp(_init),
    ref_pos(_init),
    ref_pos_xy_conf(_init),
    objects(_init),
    ref_pos_el_conf(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit SensorDataSharingMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg_cnt(_alloc, _init),
    source_id(_alloc, _init),
    equipment_type(_alloc, _init),
    sdsm_time_stamp(_alloc, _init),
    ref_pos(_alloc, _init),
    ref_pos_xy_conf(_alloc, _init),
    objects(_alloc, _init),
    ref_pos_el_conf(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _msg_cnt_type =
    j2735_v2x_msgs::msg::MsgCount_<ContainerAllocator>;
  _msg_cnt_type msg_cnt;
  using _source_id_type =
    j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator>;
  _source_id_type source_id;
  using _equipment_type_type =
    j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator>;
  _equipment_type_type equipment_type;
  using _sdsm_time_stamp_type =
    j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator>;
  _sdsm_time_stamp_type sdsm_time_stamp;
  using _ref_pos_type =
    carma_v2x_msgs::msg::Position3D_<ContainerAllocator>;
  _ref_pos_type ref_pos;
  using _ref_pos_xy_conf_type =
    carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>;
  _ref_pos_xy_conf_type ref_pos_xy_conf;
  using _objects_type =
    carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator>;
  _objects_type objects;
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _ref_pos_el_conf_type =
    j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator>;
  _ref_pos_el_conf_type ref_pos_el_conf;

  // setters for named parameter idiom
  Type & set__msg_cnt(
    const j2735_v2x_msgs::msg::MsgCount_<ContainerAllocator> & _arg)
  {
    this->msg_cnt = _arg;
    return *this;
  }
  Type & set__source_id(
    const j2735_v2x_msgs::msg::TemporaryID_<ContainerAllocator> & _arg)
  {
    this->source_id = _arg;
    return *this;
  }
  Type & set__equipment_type(
    const j3224_v2x_msgs::msg::EquipmentType_<ContainerAllocator> & _arg)
  {
    this->equipment_type = _arg;
    return *this;
  }
  Type & set__sdsm_time_stamp(
    const j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator> & _arg)
  {
    this->sdsm_time_stamp = _arg;
    return *this;
  }
  Type & set__ref_pos(
    const carma_v2x_msgs::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->ref_pos = _arg;
    return *this;
  }
  Type & set__ref_pos_xy_conf(
    const carma_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->ref_pos_xy_conf = _arg;
    return *this;
  }
  Type & set__objects(
    const carma_v2x_msgs::msg::DetectedObjectList_<ContainerAllocator> & _arg)
  {
    this->objects = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__ref_pos_el_conf(
    const j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator> & _arg)
  {
    this->ref_pos_el_conf = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_REF_POS_XY_CONF =
    1u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__SensorDataSharingMessage
    std::shared_ptr<carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__SensorDataSharingMessage
    std::shared_ptr<carma_v2x_msgs::msg::SensorDataSharingMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorDataSharingMessage_ & other) const
  {
    if (this->msg_cnt != other.msg_cnt) {
      return false;
    }
    if (this->source_id != other.source_id) {
      return false;
    }
    if (this->equipment_type != other.equipment_type) {
      return false;
    }
    if (this->sdsm_time_stamp != other.sdsm_time_stamp) {
      return false;
    }
    if (this->ref_pos != other.ref_pos) {
      return false;
    }
    if (this->ref_pos_xy_conf != other.ref_pos_xy_conf) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->ref_pos_el_conf != other.ref_pos_el_conf) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorDataSharingMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorDataSharingMessage_

// alias to use template instance with default allocator
using SensorDataSharingMessage =
  carma_v2x_msgs::msg::SensorDataSharingMessage_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SensorDataSharingMessage_<ContainerAllocator>::HAS_REF_POS_XY_CONF;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__SENSOR_DATA_SHARING_MESSAGE__STRUCT_HPP_
