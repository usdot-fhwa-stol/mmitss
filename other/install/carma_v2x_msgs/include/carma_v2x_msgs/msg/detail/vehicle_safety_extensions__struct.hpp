// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'events'
#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__struct.hpp"
// Member 'path_history'
#include "carma_v2x_msgs/msg/detail/path_history__struct.hpp"
// Member 'path_prediction'
#include "carma_v2x_msgs/msg/detail/path_prediction__struct.hpp"
// Member 'lights'
#include "j2735_v2x_msgs/msg/detail/exterior_lights__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__VehicleSafetyExtensions __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__VehicleSafetyExtensions __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSafetyExtensions_
{
  using Type = VehicleSafetyExtensions_<ContainerAllocator>;

  explicit VehicleSafetyExtensions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : events(_init),
    path_history(_init),
    path_prediction(_init),
    lights(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit VehicleSafetyExtensions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : events(_alloc, _init),
    path_history(_alloc, _init),
    path_prediction(_alloc, _init),
    lights(_alloc, _init)
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
  using _events_type =
    j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator>;
  _events_type events;
  using _path_history_type =
    carma_v2x_msgs::msg::PathHistory_<ContainerAllocator>;
  _path_history_type path_history;
  using _path_prediction_type =
    carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator>;
  _path_prediction_type path_prediction;
  using _lights_type =
    j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator>;
  _lights_type lights;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__events(
    const j2735_v2x_msgs::msg::VehicleEventFlags_<ContainerAllocator> & _arg)
  {
    this->events = _arg;
    return *this;
  }
  Type & set__path_history(
    const carma_v2x_msgs::msg::PathHistory_<ContainerAllocator> & _arg)
  {
    this->path_history = _arg;
    return *this;
  }
  Type & set__path_prediction(
    const carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator> & _arg)
  {
    this->path_prediction = _arg;
    return *this;
  }
  Type & set__lights(
    const j2735_v2x_msgs::msg::ExteriorLights_<ContainerAllocator> & _arg)
  {
    this->lights = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_EVENTS =
    1u;
  static constexpr uint16_t HAS_PATH_HISTORY =
    2u;
  static constexpr uint16_t HAS_PATH_PREDICTION =
    4u;
  static constexpr uint16_t HAS_LIGHTS =
    8u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__VehicleSafetyExtensions
    std::shared_ptr<carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__VehicleSafetyExtensions
    std::shared_ptr<carma_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSafetyExtensions_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->events != other.events) {
      return false;
    }
    if (this->path_history != other.path_history) {
      return false;
    }
    if (this->path_prediction != other.path_prediction) {
      return false;
    }
    if (this->lights != other.lights) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSafetyExtensions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSafetyExtensions_

// alias to use template instance with default allocator
using VehicleSafetyExtensions =
  carma_v2x_msgs::msg::VehicleSafetyExtensions_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t VehicleSafetyExtensions_<ContainerAllocator>::HAS_EVENTS;
template<typename ContainerAllocator>
constexpr uint16_t VehicleSafetyExtensions_<ContainerAllocator>::HAS_PATH_HISTORY;
template<typename ContainerAllocator>
constexpr uint16_t VehicleSafetyExtensions_<ContainerAllocator>::HAS_PATH_PREDICTION;
template<typename ContainerAllocator>
constexpr uint16_t VehicleSafetyExtensions_<ContainerAllocator>::HAS_LIGHTS;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_HPP_
