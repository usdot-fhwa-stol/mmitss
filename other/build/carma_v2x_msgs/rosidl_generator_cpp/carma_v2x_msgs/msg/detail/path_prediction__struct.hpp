// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/PathPrediction.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__PathPrediction __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__PathPrediction __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPrediction_
{
  using Type = PathPrediction_<ContainerAllocator>;

  explicit PathPrediction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius_of_curvature = 0.0f;
      this->confidence = 0.0f;
    }
  }

  explicit PathPrediction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius_of_curvature = 0.0f;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _radius_of_curvature_type =
    float;
  _radius_of_curvature_type radius_of_curvature;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__radius_of_curvature(
    const float & _arg)
  {
    this->radius_of_curvature = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr float MIN_RADIUS =
    -327.67;
  static constexpr float MAX_RADIUS =
    327.67;
  static constexpr float MIN_CONFIDENCE =
    0.0;
  static constexpr float MAX_CONFIDENCE =
    1.0;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__PathPrediction
    std::shared_ptr<carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__PathPrediction
    std::shared_ptr<carma_v2x_msgs::msg::PathPrediction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPrediction_ & other) const
  {
    if (this->radius_of_curvature != other.radius_of_curvature) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPrediction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPrediction_

// alias to use template instance with default allocator
using PathPrediction =
  carma_v2x_msgs::msg::PathPrediction_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr float PathPrediction_<ContainerAllocator>::MIN_RADIUS;
template<typename ContainerAllocator>
constexpr float PathPrediction_<ContainerAllocator>::MAX_RADIUS;
template<typename ContainerAllocator>
constexpr float PathPrediction_<ContainerAllocator>::MIN_CONFIDENCE;
template<typename ContainerAllocator>
constexpr float PathPrediction_<ContainerAllocator>::MAX_CONFIDENCE;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__PATH_PREDICTION__STRUCT_HPP_
