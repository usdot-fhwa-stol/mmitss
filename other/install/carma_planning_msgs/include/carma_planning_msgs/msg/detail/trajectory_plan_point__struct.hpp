// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:msg/TrajectoryPlanPoint.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN_POINT__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'target_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__msg__TrajectoryPlanPoint __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__msg__TrajectoryPlanPoint __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPlanPoint_
{
  using Type = TrajectoryPlanPoint_<ContainerAllocator>;

  explicit TrajectoryPlanPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->lane_id = "";
      this->controller_plugin_name = "";
      this->planner_plugin_name = "";
    }
  }

  explicit TrajectoryPlanPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_time(_alloc, _init),
    lane_id(_alloc),
    controller_plugin_name(_alloc),
    planner_plugin_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->lane_id = "";
      this->controller_plugin_name = "";
      this->planner_plugin_name = "";
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _target_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _target_time_type target_time;
  using _lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _lane_id_type lane_id;
  using _controller_plugin_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _controller_plugin_name_type controller_plugin_name;
  using _planner_plugin_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _planner_plugin_name_type planner_plugin_name;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__target_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->target_time = _arg;
    return *this;
  }
  Type & set__lane_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__controller_plugin_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->controller_plugin_name = _arg;
    return *this;
  }
  Type & set__planner_plugin_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->planner_plugin_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__msg__TrajectoryPlanPoint
    std::shared_ptr<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__msg__TrajectoryPlanPoint
    std::shared_ptr<carma_planning_msgs::msg::TrajectoryPlanPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPlanPoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->target_time != other.target_time) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->controller_plugin_name != other.controller_plugin_name) {
      return false;
    }
    if (this->planner_plugin_name != other.planner_plugin_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPlanPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPlanPoint_

// alias to use template instance with default allocator
using TrajectoryPlanPoint =
  carma_planning_msgs::msg::TrajectoryPlanPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_PLAN_POINT__STRUCT_HPP_
