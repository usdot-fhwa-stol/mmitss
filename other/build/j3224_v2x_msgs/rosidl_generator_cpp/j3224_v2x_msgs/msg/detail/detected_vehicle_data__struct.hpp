// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/DetectedVehicleData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'lights'
#include "j2735_v2x_msgs/msg/detail/exterior_lights__struct.hpp"
// Member 'veh_attitude'
#include "j3224_v2x_msgs/msg/detail/attitude__struct.hpp"
// Member 'veh_attitude_confidence'
#include "j3224_v2x_msgs/msg/detail/attitude_confidence__struct.hpp"
// Member 'veh_ang_vel'
#include "j3224_v2x_msgs/msg/detail/angular_velocity__struct.hpp"
// Member 'veh_ang_vel_confidence'
#include "j3224_v2x_msgs/msg/detail/angular_velocity_confidence__struct.hpp"
// Member 'size'
#include "j2735_v2x_msgs/msg/detail/vehicle_size__struct.hpp"
// Member 'height'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__struct.hpp"
// Member 'vehicle_size_confidence'
#include "j3224_v2x_msgs/msg/detail/vehicle_size_confidence__struct.hpp"
// Member 'vehicle_class'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__struct.hpp"
// Member 'class_conf'
#include "j3224_v2x_msgs/msg/detail/classification_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__DetectedVehicleData __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__DetectedVehicleData __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedVehicleData_
{
  using Type = DetectedVehicleData_<ContainerAllocator>;

  explicit DetectedVehicleData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lights(_init),
    veh_attitude(_init),
    veh_attitude_confidence(_init),
    veh_ang_vel(_init),
    veh_ang_vel_confidence(_init),
    size(_init),
    height(_init),
    vehicle_size_confidence(_init),
    vehicle_class(_init),
    class_conf(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit DetectedVehicleData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lights(_alloc, _init),
    veh_attitude(_alloc, _init),
    veh_attitude_confidence(_alloc, _init),
    veh_ang_vel(_alloc, _init),
    veh_ang_vel_confidence(_alloc, _init),
    size(_alloc, _init),
    height(_alloc, _init),
    vehicle_size_confidence(_alloc, _init),
    vehicle_class(_alloc, _init),
    class_conf(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _lights_type =
    j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator>;
  _lights_type lights;
  using _veh_attitude_type =
    j3224_v2x_msgs::msg::Attitude_<ContainerAllocator>;
  _veh_attitude_type veh_attitude;
  using _veh_attitude_confidence_type =
    j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator>;
  _veh_attitude_confidence_type veh_attitude_confidence;
  using _veh_ang_vel_type =
    j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator>;
  _veh_ang_vel_type veh_ang_vel;
  using _veh_ang_vel_confidence_type =
    j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator>;
  _veh_ang_vel_confidence_type veh_ang_vel_confidence;
  using _size_type =
    j2735_v2x_msgs::msg::VehicleSize_<ContainerAllocator>;
  _size_type size;
  using _height_type =
    j2735_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>;
  _height_type height;
  using _vehicle_size_confidence_type =
    j3224_v2x_msgs::msg::VehicleSizeConfidence_<ContainerAllocator>;
  _vehicle_size_confidence_type vehicle_size_confidence;
  using _vehicle_class_type =
    j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator>;
  _vehicle_class_type vehicle_class;
  using _class_conf_type =
    j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator>;
  _class_conf_type class_conf;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__lights(
    const j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator> & _arg)
  {
    this->lights = _arg;
    return *this;
  }
  Type & set__veh_attitude(
    const j3224_v2x_msgs::msg::Attitude_<ContainerAllocator> & _arg)
  {
    this->veh_attitude = _arg;
    return *this;
  }
  Type & set__veh_attitude_confidence(
    const j3224_v2x_msgs::msg::AttitudeConfidence_<ContainerAllocator> & _arg)
  {
    this->veh_attitude_confidence = _arg;
    return *this;
  }
  Type & set__veh_ang_vel(
    const j3224_v2x_msgs::msg::AngularVelocity_<ContainerAllocator> & _arg)
  {
    this->veh_ang_vel = _arg;
    return *this;
  }
  Type & set__veh_ang_vel_confidence(
    const j3224_v2x_msgs::msg::AngularVelocityConfidence_<ContainerAllocator> & _arg)
  {
    this->veh_ang_vel_confidence = _arg;
    return *this;
  }
  Type & set__size(
    const j2735_v2x_msgs::msg::VehicleSize_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__height(
    const j2735_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__vehicle_size_confidence(
    const j3224_v2x_msgs::msg::VehicleSizeConfidence_<ContainerAllocator> & _arg)
  {
    this->vehicle_size_confidence = _arg;
    return *this;
  }
  Type & set__vehicle_class(
    const j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator> & _arg)
  {
    this->vehicle_class = _arg;
    return *this;
  }
  Type & set__class_conf(
    const j3224_v2x_msgs::msg::ClassificationConfidence_<ContainerAllocator> & _arg)
  {
    this->class_conf = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_LIGHTS =
    1u;
  static constexpr uint16_t HAS_VEH_ATTITUDE =
    2u;
  static constexpr uint16_t HAS_VEH_ATTITUDE_CONFIDENCE =
    4u;
  static constexpr uint16_t HAS_ANG_VEL =
    8u;
  static constexpr uint16_t HAS_ANG_VEL_CONFIDENCE =
    16u;
  static constexpr uint16_t HAS_SIZE =
    32u;
  static constexpr uint16_t HAS_HEIGHT =
    64u;
  static constexpr uint16_t HAS_VEHICLE_SIZE_CONFIDENCE =
    128u;
  static constexpr uint16_t HAS_VEHICLE_CLASS =
    256u;
  static constexpr uint16_t HAS_CLASS_CONF =
    512u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__DetectedVehicleData
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__DetectedVehicleData
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedVehicleData_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->lights != other.lights) {
      return false;
    }
    if (this->veh_attitude != other.veh_attitude) {
      return false;
    }
    if (this->veh_attitude_confidence != other.veh_attitude_confidence) {
      return false;
    }
    if (this->veh_ang_vel != other.veh_ang_vel) {
      return false;
    }
    if (this->veh_ang_vel_confidence != other.veh_ang_vel_confidence) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->vehicle_size_confidence != other.vehicle_size_confidence) {
      return false;
    }
    if (this->vehicle_class != other.vehicle_class) {
      return false;
    }
    if (this->class_conf != other.class_conf) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedVehicleData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedVehicleData_

// alias to use template instance with default allocator
using DetectedVehicleData =
  j3224_v2x_msgs::msg::DetectedVehicleData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_LIGHTS;
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_VEH_ATTITUDE;
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_VEH_ATTITUDE_CONFIDENCE;
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_ANG_VEL;
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_ANG_VEL_CONFIDENCE;
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_SIZE;
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_HEIGHT;
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_VEHICLE_SIZE_CONFIDENCE;
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_VEHICLE_CLASS;
template<typename ContainerAllocator>
constexpr uint16_t DetectedVehicleData_<ContainerAllocator>::HAS_CLASS_CONF;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_VEHICLE_DATA__STRUCT_HPP_
