// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_perception_msgs:msg/ExternalObject.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT__STRUCT_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'velocity'
// Member 'velocity_inst'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'predictions'
#include "carma_perception_msgs/msg/detail/predicted_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_perception_msgs__msg__ExternalObject __attribute__((deprecated))
#else
# define DEPRECATED__carma_perception_msgs__msg__ExternalObject __declspec(deprecated)
#endif

namespace carma_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExternalObject_
{
  using Type = ExternalObject_<ContainerAllocator>;

  explicit ExternalObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    velocity(_init),
    velocity_inst(_init),
    size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->id = 0ul;
      this->confidence = 0.0;
      this->object_type = 0;
      this->dynamic_obj = false;
    }
  }

  explicit ExternalObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    velocity(_alloc, _init),
    velocity_inst(_alloc, _init),
    size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->id = 0ul;
      this->confidence = 0.0;
      this->object_type = 0;
      this->dynamic_obj = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _id_type =
    uint32_t;
  _id_type id;
  using _bsm_id_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _bsm_id_type bsm_id;
  using _pose_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;
  using _velocity_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _velocity_type velocity;
  using _velocity_inst_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _velocity_inst_type velocity_inst;
  using _size_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _size_type size;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _object_type_type =
    uint8_t;
  _object_type_type object_type;
  using _dynamic_obj_type =
    bool;
  _dynamic_obj_type dynamic_obj;
  using _predictions_type =
    std::vector<carma_perception_msgs::msg::PredictedState_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_perception_msgs::msg::PredictedState_<ContainerAllocator>>::other>;
  _predictions_type predictions;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__bsm_id(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->bsm_id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__velocity_inst(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->velocity_inst = _arg;
    return *this;
  }
  Type & set__size(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__object_type(
    const uint8_t & _arg)
  {
    this->object_type = _arg;
    return *this;
  }
  Type & set__dynamic_obj(
    const bool & _arg)
  {
    this->dynamic_obj = _arg;
    return *this;
  }
  Type & set__predictions(
    const std::vector<carma_perception_msgs::msg::PredictedState_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_perception_msgs::msg::PredictedState_<ContainerAllocator>>::other> & _arg)
  {
    this->predictions = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ID_PRESENCE_VECTOR =
    1u;
  static constexpr uint16_t POSE_PRESENCE_VECTOR =
    2u;
  static constexpr uint16_t VELOCITY_PRESENCE_VECTOR =
    4u;
  static constexpr uint16_t VELOCITY_INST_PRESENCE_VECTOR =
    8u;
  static constexpr uint16_t SIZE_PRESENCE_VECTOR =
    16u;
  static constexpr uint16_t CONFIDENCE_PRESENCE_VECTOR =
    32u;
  static constexpr uint16_t OBJECT_TYPE_PRESENCE_VECTOR =
    64u;
  static constexpr uint16_t BSM_ID_PRESENCE_VECTOR =
    128u;
  static constexpr uint16_t DYNAMIC_OBJ_PRESENCE =
    256u;
  static constexpr uint16_t PREDICTION_PRESENCE_VECTOR =
    512u;
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t SMALL_VEHICLE =
    1u;
  static constexpr uint8_t LARGE_VEHICLE =
    2u;
  static constexpr uint8_t MOTORCYCLE =
    3u;
  static constexpr uint8_t PEDESTRIAN =
    4u;

  // pointer types
  using RawPtr =
    carma_perception_msgs::msg::ExternalObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_perception_msgs::msg::ExternalObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_perception_msgs__msg__ExternalObject
    std::shared_ptr<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_perception_msgs__msg__ExternalObject
    std::shared_ptr<carma_perception_msgs::msg::ExternalObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->bsm_id != other.bsm_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->velocity_inst != other.velocity_inst) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->object_type != other.object_type) {
      return false;
    }
    if (this->dynamic_obj != other.dynamic_obj) {
      return false;
    }
    if (this->predictions != other.predictions) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalObject_

// alias to use template instance with default allocator
using ExternalObject =
  carma_perception_msgs::msg::ExternalObject_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::ID_PRESENCE_VECTOR;
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::POSE_PRESENCE_VECTOR;
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::VELOCITY_PRESENCE_VECTOR;
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::VELOCITY_INST_PRESENCE_VECTOR;
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::SIZE_PRESENCE_VECTOR;
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::CONFIDENCE_PRESENCE_VECTOR;
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::OBJECT_TYPE_PRESENCE_VECTOR;
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::BSM_ID_PRESENCE_VECTOR;
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::DYNAMIC_OBJ_PRESENCE;
template<typename ContainerAllocator>
constexpr uint16_t ExternalObject_<ContainerAllocator>::PREDICTION_PRESENCE_VECTOR;
template<typename ContainerAllocator>
constexpr uint8_t ExternalObject_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t ExternalObject_<ContainerAllocator>::SMALL_VEHICLE;
template<typename ContainerAllocator>
constexpr uint8_t ExternalObject_<ContainerAllocator>::LARGE_VEHICLE;
template<typename ContainerAllocator>
constexpr uint8_t ExternalObject_<ContainerAllocator>::MOTORCYCLE;
template<typename ContainerAllocator>
constexpr uint8_t ExternalObject_<ContainerAllocator>::PEDESTRIAN;

}  // namespace msg

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__EXTERNAL_OBJECT__STRUCT_HPP_
