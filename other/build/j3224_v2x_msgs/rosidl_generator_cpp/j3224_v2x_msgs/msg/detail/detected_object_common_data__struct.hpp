// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/DetectedObjectCommonData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'obj_type'
#include "j3224_v2x_msgs/msg/detail/object_type__struct.hpp"
// Member 'obj_type_cfd'
#include "j3224_v2x_msgs/msg/detail/classification_confidence__struct.hpp"
// Member 'detected_id'
#include "j3224_v2x_msgs/msg/detail/object_id__struct.hpp"
// Member 'measurement_time'
#include "j3224_v2x_msgs/msg/detail/measurement_time_offset__struct.hpp"
// Member 'time_confidence'
#include "j2735_v2x_msgs/msg/detail/time_confidence__struct.hpp"
// Member 'pos'
#include "j3224_v2x_msgs/msg/detail/position_offset_xyz__struct.hpp"
// Member 'pos_confidence'
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__struct.hpp"
// Member 'speed'
// Member 'speed_z'
#include "j2735_v2x_msgs/msg/detail/speed__struct.hpp"
// Member 'speed_confidence'
// Member 'speed_confidence_z'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__struct.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading__struct.hpp"
// Member 'heading_conf'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__struct.hpp"
// Member 'accel_4_way'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__struct.hpp"
// Member 'acc_cfd_x'
// Member 'acc_cfd_y'
// Member 'acc_cfd_z'
#include "j2735_v2x_msgs/msg/detail/acceleration_confidence__struct.hpp"
// Member 'acc_cfd_yaw'
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__DetectedObjectCommonData __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__DetectedObjectCommonData __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObjectCommonData_
{
  using Type = DetectedObjectCommonData_<ContainerAllocator>;

  explicit DetectedObjectCommonData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_type(_init),
    obj_type_cfd(_init),
    detected_id(_init),
    measurement_time(_init),
    time_confidence(_init),
    pos(_init),
    pos_confidence(_init),
    speed(_init),
    speed_confidence(_init),
    heading(_init),
    heading_conf(_init),
    speed_z(_init),
    speed_confidence_z(_init),
    accel_4_way(_init),
    acc_cfd_x(_init),
    acc_cfd_y(_init),
    acc_cfd_z(_init),
    acc_cfd_yaw(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit DetectedObjectCommonData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_type(_alloc, _init),
    obj_type_cfd(_alloc, _init),
    detected_id(_alloc, _init),
    measurement_time(_alloc, _init),
    time_confidence(_alloc, _init),
    pos(_alloc, _init),
    pos_confidence(_alloc, _init),
    speed(_alloc, _init),
    speed_confidence(_alloc, _init),
    heading(_alloc, _init),
    heading_conf(_alloc, _init),
    speed_z(_alloc, _init),
    speed_confidence_z(_alloc, _init),
    accel_4_way(_alloc, _init),
    acc_cfd_x(_alloc, _init),
    acc_cfd_y(_alloc, _init),
    acc_cfd_z(_alloc, _init),
    acc_cfd_yaw(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _obj_type_type =
    j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator>;
  _obj_type_type obj_type;
  using _obj_type_cfd_type =
    j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator>;
  _obj_type_cfd_type obj_type_cfd;
  using _detected_id_type =
    j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator>;
  _detected_id_type detected_id;
  using _measurement_time_type =
    j3224_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator>;
  _measurement_time_type measurement_time;
  using _time_confidence_type =
    j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator>;
  _time_confidence_type time_confidence;
  using _pos_type =
    j3224_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator>;
  _pos_type pos;
  using _pos_confidence_type =
    j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator>;
  _pos_confidence_type pos_confidence;
  using _speed_type =
    j2735_v2x_msgs::msg::Speed_<ContainerAllocator>;
  _speed_type speed;
  using _speed_confidence_type =
    j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>;
  _speed_confidence_type speed_confidence;
  using _heading_type =
    j2735_v2x_msgs::msg::Heading_<ContainerAllocator>;
  _heading_type heading;
  using _heading_conf_type =
    j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>;
  _heading_conf_type heading_conf;
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _speed_z_type =
    j2735_v2x_msgs::msg::Speed_<ContainerAllocator>;
  _speed_z_type speed_z;
  using _speed_confidence_z_type =
    j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>;
  _speed_confidence_z_type speed_confidence_z;
  using _accel_4_way_type =
    j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator>;
  _accel_4_way_type accel_4_way;
  using _acc_cfd_x_type =
    j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator>;
  _acc_cfd_x_type acc_cfd_x;
  using _acc_cfd_y_type =
    j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator>;
  _acc_cfd_y_type acc_cfd_y;
  using _acc_cfd_z_type =
    j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator>;
  _acc_cfd_z_type acc_cfd_z;
  using _acc_cfd_yaw_type =
    j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator>;
  _acc_cfd_yaw_type acc_cfd_yaw;

  // setters for named parameter idiom
  Type & set__obj_type(
    const j3224_v2x_msgs::msg::ObjectType_<ContainerAllocator> & _arg)
  {
    this->obj_type = _arg;
    return *this;
  }
  Type & set__obj_type_cfd(
    const j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator> & _arg)
  {
    this->obj_type_cfd = _arg;
    return *this;
  }
  Type & set__detected_id(
    const j3224_v2x_msgs::msg::ObjectID_<ContainerAllocator> & _arg)
  {
    this->detected_id = _arg;
    return *this;
  }
  Type & set__measurement_time(
    const j3224_v2x_msgs::msg::MeasurementTimeOffset_<ContainerAllocator> & _arg)
  {
    this->measurement_time = _arg;
    return *this;
  }
  Type & set__time_confidence(
    const j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator> & _arg)
  {
    this->time_confidence = _arg;
    return *this;
  }
  Type & set__pos(
    const j3224_v2x_msgs::msg::PositionOffsetXYZ_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__pos_confidence(
    const j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator> & _arg)
  {
    this->pos_confidence = _arg;
    return *this;
  }
  Type & set__speed(
    const j2735_v2x_msgs::msg::Speed_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__speed_confidence(
    const j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> & _arg)
  {
    this->speed_confidence = _arg;
    return *this;
  }
  Type & set__heading(
    const j2735_v2x_msgs::msg::Heading_<ContainerAllocator> & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_conf(
    const j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> & _arg)
  {
    this->heading_conf = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__speed_z(
    const j2735_v2x_msgs::msg::Speed_<ContainerAllocator> & _arg)
  {
    this->speed_z = _arg;
    return *this;
  }
  Type & set__speed_confidence_z(
    const j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> & _arg)
  {
    this->speed_confidence_z = _arg;
    return *this;
  }
  Type & set__accel_4_way(
    const j2735_v2x_msgs::msg::AccelerationSet4Way_<ContainerAllocator> & _arg)
  {
    this->accel_4_way = _arg;
    return *this;
  }
  Type & set__acc_cfd_x(
    const j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator> & _arg)
  {
    this->acc_cfd_x = _arg;
    return *this;
  }
  Type & set__acc_cfd_y(
    const j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator> & _arg)
  {
    this->acc_cfd_y = _arg;
    return *this;
  }
  Type & set__acc_cfd_z(
    const j2735_v2x_msgs::msg::AccelerationConfidence_<ContainerAllocator> & _arg)
  {
    this->acc_cfd_z = _arg;
    return *this;
  }
  Type & set__acc_cfd_yaw(
    const j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator> & _arg)
  {
    this->acc_cfd_yaw = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_SPEED_Z =
    1u;
  static constexpr uint8_t HAS_SPEED_CONFIDENCE_Z =
    2u;
  static constexpr uint8_t HAS_ACCEL_4_WAY =
    4u;
  static constexpr uint8_t HAS_ACC_CFD_X =
    8u;
  static constexpr uint8_t HAS_ACC_CFD_Y =
    16u;
  static constexpr uint8_t HAS_ACC_CFD_Z =
    32u;
  static constexpr uint8_t HAS_ACC_CFD_YAW =
    64u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__DetectedObjectCommonData
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__DetectedObjectCommonData
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedObjectCommonData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObjectCommonData_ & other) const
  {
    if (this->obj_type != other.obj_type) {
      return false;
    }
    if (this->obj_type_cfd != other.obj_type_cfd) {
      return false;
    }
    if (this->detected_id != other.detected_id) {
      return false;
    }
    if (this->measurement_time != other.measurement_time) {
      return false;
    }
    if (this->time_confidence != other.time_confidence) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->pos_confidence != other.pos_confidence) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->speed_confidence != other.speed_confidence) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_conf != other.heading_conf) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->speed_z != other.speed_z) {
      return false;
    }
    if (this->speed_confidence_z != other.speed_confidence_z) {
      return false;
    }
    if (this->accel_4_way != other.accel_4_way) {
      return false;
    }
    if (this->acc_cfd_x != other.acc_cfd_x) {
      return false;
    }
    if (this->acc_cfd_y != other.acc_cfd_y) {
      return false;
    }
    if (this->acc_cfd_z != other.acc_cfd_z) {
      return false;
    }
    if (this->acc_cfd_yaw != other.acc_cfd_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObjectCommonData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObjectCommonData_

// alias to use template instance with default allocator
using DetectedObjectCommonData =
  j3224_v2x_msgs::msg::DetectedObjectCommonData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectCommonData_<ContainerAllocator>::HAS_SPEED_Z;
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectCommonData_<ContainerAllocator>::HAS_SPEED_CONFIDENCE_Z;
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectCommonData_<ContainerAllocator>::HAS_ACCEL_4_WAY;
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectCommonData_<ContainerAllocator>::HAS_ACC_CFD_X;
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectCommonData_<ContainerAllocator>::HAS_ACC_CFD_Y;
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectCommonData_<ContainerAllocator>::HAS_ACC_CFD_Z;
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectCommonData_<ContainerAllocator>::HAS_ACC_CFD_YAW;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_COMMON_DATA__STRUCT_HPP_
