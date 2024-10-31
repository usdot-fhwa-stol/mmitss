// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:srv/PlanTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_TRAJECTORY__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_TRAJECTORY__STRUCT_HPP_

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
// Member 'vehicle_state'
#include "carma_planning_msgs/msg/detail/vehicle_state__struct.hpp"
// Member 'maneuver_plan'
#include "carma_planning_msgs/msg/detail/maneuver_plan__struct.hpp"
// Member 'initial_trajectory_plan'
#include "carma_planning_msgs/msg/detail/trajectory_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__PlanTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__PlanTrajectory_Request __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_Request_
{
  using Type = PlanTrajectory_Request_<ContainerAllocator>;

  explicit PlanTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    vehicle_state(_init),
    maneuver_plan(_init),
    initial_trajectory_plan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_index_to_plan = 0;
    }
  }

  explicit PlanTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    vehicle_state(_alloc, _init),
    maneuver_plan(_alloc, _init),
    initial_trajectory_plan(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->maneuver_index_to_plan = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicle_state_type =
    carma_planning_msgs::msg::VehicleState_<ContainerAllocator>;
  _vehicle_state_type vehicle_state;
  using _maneuver_plan_type =
    carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>;
  _maneuver_plan_type maneuver_plan;
  using _initial_trajectory_plan_type =
    carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator>;
  _initial_trajectory_plan_type initial_trajectory_plan;
  using _maneuver_index_to_plan_type =
    uint16_t;
  _maneuver_index_to_plan_type maneuver_index_to_plan;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicle_state(
    const carma_planning_msgs::msg::VehicleState_<ContainerAllocator> & _arg)
  {
    this->vehicle_state = _arg;
    return *this;
  }
  Type & set__maneuver_plan(
    const carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> & _arg)
  {
    this->maneuver_plan = _arg;
    return *this;
  }
  Type & set__initial_trajectory_plan(
    const carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator> & _arg)
  {
    this->initial_trajectory_plan = _arg;
    return *this;
  }
  Type & set__maneuver_index_to_plan(
    const uint16_t & _arg)
  {
    this->maneuver_index_to_plan = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__PlanTrajectory_Request
    std::shared_ptr<carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__PlanTrajectory_Request
    std::shared_ptr<carma_planning_msgs::srv::PlanTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicle_state != other.vehicle_state) {
      return false;
    }
    if (this->maneuver_plan != other.maneuver_plan) {
      return false;
    }
    if (this->initial_trajectory_plan != other.initial_trajectory_plan) {
      return false;
    }
    if (this->maneuver_index_to_plan != other.maneuver_index_to_plan) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_Request_

// alias to use template instance with default allocator
using PlanTrajectory_Request =
  carma_planning_msgs::srv::PlanTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs


// Include directives for member types
// Member 'trajectory_plan'
// already included above
// #include "carma_planning_msgs/msg/detail/trajectory_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__PlanTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__PlanTrajectory_Response __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_Response_
{
  using Type = PlanTrajectory_Response_<ContainerAllocator>;

  explicit PlanTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_plan(_init)
  {
    (void)_init;
  }

  explicit PlanTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory_plan(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trajectory_plan_type =
    carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator>;
  _trajectory_plan_type trajectory_plan;
  using _related_maneuvers_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _related_maneuvers_type related_maneuvers;
  using _maneuver_status_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _maneuver_status_type maneuver_status;

  // setters for named parameter idiom
  Type & set__trajectory_plan(
    const carma_planning_msgs::msg::TrajectoryPlan_<ContainerAllocator> & _arg)
  {
    this->trajectory_plan = _arg;
    return *this;
  }
  Type & set__related_maneuvers(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->related_maneuvers = _arg;
    return *this;
  }
  Type & set__maneuver_status(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->maneuver_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MANEUVER_ABORTED =
    0u;
  static constexpr uint8_t MANEUVER_IN_PROGRESS =
    1u;
  static constexpr uint8_t MANEUVER_COMPLETE =
    2u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__PlanTrajectory_Response
    std::shared_ptr<carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__PlanTrajectory_Response
    std::shared_ptr<carma_planning_msgs::srv::PlanTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_Response_ & other) const
  {
    if (this->trajectory_plan != other.trajectory_plan) {
      return false;
    }
    if (this->related_maneuvers != other.related_maneuvers) {
      return false;
    }
    if (this->maneuver_status != other.maneuver_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_Response_

// alias to use template instance with default allocator
using PlanTrajectory_Response =
  carma_planning_msgs::srv::PlanTrajectory_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PlanTrajectory_Response_<ContainerAllocator>::MANEUVER_ABORTED;
template<typename ContainerAllocator>
constexpr uint8_t PlanTrajectory_Response_<ContainerAllocator>::MANEUVER_IN_PROGRESS;
template<typename ContainerAllocator>
constexpr uint8_t PlanTrajectory_Response_<ContainerAllocator>::MANEUVER_COMPLETE;

}  // namespace srv

}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{

namespace srv
{

struct PlanTrajectory
{
  using Request = carma_planning_msgs::srv::PlanTrajectory_Request;
  using Response = carma_planning_msgs::srv::PlanTrajectory_Response;
};

}  // namespace srv

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_TRAJECTORY__STRUCT_HPP_
