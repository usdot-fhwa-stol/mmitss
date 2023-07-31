// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/TrajectoryPlan.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_HPP_

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
// Member 'trajectory_points'
#include "carma_planning_msgs/msg/detail/trajectory_plan_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__TrajectoryPlan __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__TrajectoryPlan __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPlan_
{
  using Type = TrajectoryPlan_<ContainerAllocator>;

  explicit TrajectoryPlan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trajectory_id = "";
      this->initial_longitudinal_velocity = 0.0;
    }
  }

  explicit TrajectoryPlan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    trajectory_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trajectory_id = "";
      this->initial_longitudinal_velocity = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _trajectory_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _trajectory_id_type trajectory_id;
  using _initial_longitudinal_velocity_type =
    double;
  _initial_longitudinal_velocity_type initial_longitudinal_velocity;
  using _trajectory_points_type =
    std::vector<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>>::other>;
  _trajectory_points_type trajectory_points;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__trajectory_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->trajectory_id = _arg;
    return *this;
  }
  Type & set__initial_longitudinal_velocity(
    const double & _arg)
  {
    this->initial_longitudinal_velocity = _arg;
    return *this;
  }
  Type & set__trajectory_points(
    const std::vector<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>>::other> & _arg)
  {
    this->trajectory_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__TrajectoryPlan
    std::shared_ptr<carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__TrajectoryPlan
    std::shared_ptr<carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPlan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->trajectory_id != other.trajectory_id) {
      return false;
    }
    if (this->initial_longitudinal_velocity != other.initial_longitudinal_velocity) {
      return false;
    }
    if (this->trajectory_points != other.trajectory_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPlan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPlan_

// alias to use template instance with default allocator
using TrajectoryPlan =
  carma_planning_msgs::msg::TrajectoryPlan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN__STRUCT_HPP_
