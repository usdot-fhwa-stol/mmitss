// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j3224_v2x_msgs:msg/DetectedObjectOptionalData.idl
// generated code does not contain a copyright notice

#ifndef J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__STRUCT_HPP_
#define J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'det_veh'
#include "j3224_v2x_msgs/msg/detail/detected_vehicle_data__struct.hpp"
// Member 'det_vru'
#include "j3224_v2x_msgs/msg/detail/detected_vru_data__struct.hpp"
// Member 'det_obst'
#include "j3224_v2x_msgs/msg/detail/detected_obstacle_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j3224_v2x_msgs__msg__DetectedObjectOptionalData __attribute__((deprecated))
#else
# define DEPRECATED__j3224_v2x_msgs__msg__DetectedObjectOptionalData __declspec(deprecated)
#endif

namespace j3224_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObjectOptionalData_
{
  using Type = DetectedObjectOptionalData_<ContainerAllocator>;

  explicit DetectedObjectOptionalData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : det_veh(_init),
    det_vru(_init),
    det_obst(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  explicit DetectedObjectOptionalData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : det_veh(_alloc, _init),
    det_vru(_alloc, _init),
    det_obst(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _det_veh_type =
    j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator>;
  _det_veh_type det_veh;
  using _det_vru_type =
    j3224_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator>;
  _det_vru_type det_vru;
  using _det_obst_type =
    j3224_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator>;
  _det_obst_type det_obst;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__det_veh(
    const j3224_v2x_msgs::msg::DetectedVehicleData_<ContainerAllocator> & _arg)
  {
    this->det_veh = _arg;
    return *this;
  }
  Type & set__det_vru(
    const j3224_v2x_msgs::msg::DetectedVRUData_<ContainerAllocator> & _arg)
  {
    this->det_vru = _arg;
    return *this;
  }
  Type & set__det_obst(
    const j3224_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator> & _arg)
  {
    this->det_obst = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DET_VEH =
    0u;
  static constexpr uint8_t DET_VRU =
    1u;
  static constexpr uint8_t DET_OBST =
    2u;

  // pointer types
  using RawPtr =
    j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator> *;
  using ConstRawPtr =
    const j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j3224_v2x_msgs__msg__DetectedObjectOptionalData
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j3224_v2x_msgs__msg__DetectedObjectOptionalData
    std::shared_ptr<j3224_v2x_msgs::msg::DetectedObjectOptionalData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObjectOptionalData_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->det_veh != other.det_veh) {
      return false;
    }
    if (this->det_vru != other.det_vru) {
      return false;
    }
    if (this->det_obst != other.det_obst) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObjectOptionalData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObjectOptionalData_

// alias to use template instance with default allocator
using DetectedObjectOptionalData =
  j3224_v2x_msgs::msg::DetectedObjectOptionalData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectOptionalData_<ContainerAllocator>::DET_VEH;
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectOptionalData_<ContainerAllocator>::DET_VRU;
template<typename ContainerAllocator>
constexpr uint8_t DetectedObjectOptionalData_<ContainerAllocator>::DET_OBST;

}  // namespace msg

}  // namespace j3224_v2x_msgs

#endif  // J3224_V2X_MSGS__MSG__DETAIL__DETECTED_OBJECT_OPTIONAL_DATA__STRUCT_HPP_
