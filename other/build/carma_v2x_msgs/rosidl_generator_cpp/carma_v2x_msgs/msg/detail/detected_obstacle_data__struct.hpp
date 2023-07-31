// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/DetectedObstacleData.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'obst_size'
#include "carma_v2x_msgs/msg/detail/obstacle_size__struct.hpp"
// Member 'obst_size_confidence'
#include "j3224_v2x_msgs/msg/detail/obstacle_size_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__DetectedObstacleData __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__DetectedObstacleData __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObstacleData_
{
  using Type = DetectedObstacleData_<ContainerAllocator>;

  explicit DetectedObstacleData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obst_size(_init),
    obst_size_confidence(_init)
  {
    (void)_init;
  }

  explicit DetectedObstacleData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obst_size(_alloc, _init),
    obst_size_confidence(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _obst_size_type =
    carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator>;
  _obst_size_type obst_size;
  using _obst_size_confidence_type =
    j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator>;
  _obst_size_confidence_type obst_size_confidence;

  // setters for named parameter idiom
  Type & set__obst_size(
    const carma_v2x_msgs::msg::ObstacleSize_<ContainerAllocator> & _arg)
  {
    this->obst_size = _arg;
    return *this;
  }
  Type & set__obst_size_confidence(
    const j3224_v2x_msgs::msg::ObstacleSizeConfidence_<ContainerAllocator> & _arg)
  {
    this->obst_size_confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__DetectedObstacleData
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__DetectedObstacleData
    std::shared_ptr<carma_v2x_msgs::msg::DetectedObstacleData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObstacleData_ & other) const
  {
    if (this->obst_size != other.obst_size) {
      return false;
    }
    if (this->obst_size_confidence != other.obst_size_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObstacleData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObstacleData_

// alias to use template instance with default allocator
using DetectedObstacleData =
  carma_v2x_msgs::msg::DetectedObstacleData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__DETECTED_OBSTACLE_DATA__STRUCT_HPP_
