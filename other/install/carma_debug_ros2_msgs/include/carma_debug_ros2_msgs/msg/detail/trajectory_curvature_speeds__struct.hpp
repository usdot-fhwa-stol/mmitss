// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_debug_ros2_msgs:msg/TrajectoryCurvatureSpeeds.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__STRUCT_HPP_
#define CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'trajectory_plan'
#include "carma_planning_msgs/msg/detail/trajectory_plan__struct.hpp"
// Member 'starting_state'
#include "carma_planning_msgs/msg/detail/vehicle_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds __attribute__((deprecated))
#else
# define DEPRECATED__carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds __declspec(deprecated)
#endif

namespace carma_debug_ros2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryCurvatureSpeeds_
{
  using Type = TrajectoryCurvatureSpeeds_<ContainerAllocator>;

  explicit TrajectoryCurvatureSpeeds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_plan(_init),
    starting_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat_accel_limit = 0.0;
      this->lon_accel_limit = 0.0;
    }
  }

  explicit TrajectoryCurvatureSpeeds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_plan(_alloc, _init),
    starting_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat_accel_limit = 0.0;
      this->lon_accel_limit = 0.0;
    }
  }

  // field types and members
  using _trajectory_plan_type =
    carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator>;
  _trajectory_plan_type trajectory_plan;
  using _curvatures_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _curvatures_type curvatures;
  using _speed_limits_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _speed_limits_type speed_limits;
  using _velocity_profile_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _velocity_profile_type velocity_profile;
  using _tangent_headings_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _tangent_headings_type tangent_headings;
  using _relative_downtrack_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _relative_downtrack_type relative_downtrack;
  using _lat_accel_limit_type =
    double;
  _lat_accel_limit_type lat_accel_limit;
  using _lon_accel_limit_type =
    double;
  _lon_accel_limit_type lon_accel_limit;
  using _starting_state_type =
    carma_planning_msgs::msg::VehicleState_<ContainerAllocator>;
  _starting_state_type starting_state;

  // setters for named parameter idiom
  Type & set__trajectory_plan(
    const carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator> & _arg)
  {
    this->trajectory_plan = _arg;
    return *this;
  }
  Type & set__curvatures(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->curvatures = _arg;
    return *this;
  }
  Type & set__speed_limits(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->speed_limits = _arg;
    return *this;
  }
  Type & set__velocity_profile(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->velocity_profile = _arg;
    return *this;
  }
  Type & set__tangent_headings(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->tangent_headings = _arg;
    return *this;
  }
  Type & set__relative_downtrack(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->relative_downtrack = _arg;
    return *this;
  }
  Type & set__lat_accel_limit(
    const double & _arg)
  {
    this->lat_accel_limit = _arg;
    return *this;
  }
  Type & set__lon_accel_limit(
    const double & _arg)
  {
    this->lon_accel_limit = _arg;
    return *this;
  }
  Type & set__starting_state(
    const carma_planning_msgs::msg::VehicleState_<ContainerAllocator> & _arg)
  {
    this->starting_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds
    std::shared_ptr<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_debug_ros2_msgs__msg__TrajectoryCurvatureSpeeds
    std::shared_ptr<carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryCurvatureSpeeds_ & other) const
  {
    if (this->trajectory_plan != other.trajectory_plan) {
      return false;
    }
    if (this->curvatures != other.curvatures) {
      return false;
    }
    if (this->speed_limits != other.speed_limits) {
      return false;
    }
    if (this->velocity_profile != other.velocity_profile) {
      return false;
    }
    if (this->tangent_headings != other.tangent_headings) {
      return false;
    }
    if (this->relative_downtrack != other.relative_downtrack) {
      return false;
    }
    if (this->lat_accel_limit != other.lat_accel_limit) {
      return false;
    }
    if (this->lon_accel_limit != other.lon_accel_limit) {
      return false;
    }
    if (this->starting_state != other.starting_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryCurvatureSpeeds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryCurvatureSpeeds_

// alias to use template instance with default allocator
using TrajectoryCurvatureSpeeds =
  carma_debug_ros2_msgs::msg::TrajectoryCurvatureSpeeds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_debug_ros2_msgs

#endif  // CARMA_DEBUG_ROS2_MSGS__MSG__DETAIL__TRAJECTORY_CURVATURE_SPEEDS__STRUCT_HPP_
