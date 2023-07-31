// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'location'
#include "carma_v2x_msgs/msg/detail/location_ecef__struct.hpp"
// Member 'offsets'
#include "carma_v2x_msgs/msg/detail/location_offset_ecef__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__Trajectory __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__Trajectory __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trajectory_
{
  using Type = Trajectory_<ContainerAllocator>;

  explicit Trajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_init)
  {
    (void)_init;
  }

  explicit Trajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _location_type =
    carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator>;
  _location_type location;
  using _offsets_type =
    std::vector<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>>::other>;
  _offsets_type offsets;

  // setters for named parameter idiom
  Type & set__location(
    const carma_v2x_msgs::msg::LocationECEF_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__offsets(
    const std::vector<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::LocationOffsetECEF_<ContainerAllocator>>::other> & _arg)
  {
    this->offsets = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t MAX_POINTS_IN_MESSAGE =
    60u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::Trajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::Trajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::Trajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::Trajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::Trajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::Trajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::Trajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::Trajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__Trajectory
    std::shared_ptr<carma_v2x_msgs::msg::Trajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__Trajectory
    std::shared_ptr<carma_v2x_msgs::msg::Trajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectory_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    if (this->offsets != other.offsets) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectory_

// alias to use template instance with default allocator
using Trajectory =
  carma_v2x_msgs::msg::Trajectory_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t Trajectory_<ContainerAllocator>::MAX_POINTS_IN_MESSAGE;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
