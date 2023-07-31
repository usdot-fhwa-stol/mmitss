// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:srv/PlanManeuvers.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__STRUCT_HPP_

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
// Member 'prior_plan'
#include "carma_planning_msgs/msg/detail/maneuver_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__PlanManeuvers_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__PlanManeuvers_Request __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanManeuvers_Request_
{
  using Type = PlanManeuvers_Request_<ContainerAllocator>;

  explicit PlanManeuvers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    prior_plan(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->veh_x = 0.0;
      this->veh_y = 0.0;
      this->veh_downtrack = 0.0;
      this->veh_logitudinal_velocity = 0.0;
      this->veh_lane_id = "";
    }
  }

  explicit PlanManeuvers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    prior_plan(_alloc, _init),
    veh_lane_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->veh_x = 0.0;
      this->veh_y = 0.0;
      this->veh_downtrack = 0.0;
      this->veh_logitudinal_velocity = 0.0;
      this->veh_lane_id = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _prior_plan_type =
    carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>;
  _prior_plan_type prior_plan;
  using _veh_x_type =
    double;
  _veh_x_type veh_x;
  using _veh_y_type =
    double;
  _veh_y_type veh_y;
  using _veh_downtrack_type =
    double;
  _veh_downtrack_type veh_downtrack;
  using _veh_logitudinal_velocity_type =
    double;
  _veh_logitudinal_velocity_type veh_logitudinal_velocity;
  using _veh_lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _veh_lane_id_type veh_lane_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__prior_plan(
    const carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> & _arg)
  {
    this->prior_plan = _arg;
    return *this;
  }
  Type & set__veh_x(
    const double & _arg)
  {
    this->veh_x = _arg;
    return *this;
  }
  Type & set__veh_y(
    const double & _arg)
  {
    this->veh_y = _arg;
    return *this;
  }
  Type & set__veh_downtrack(
    const double & _arg)
  {
    this->veh_downtrack = _arg;
    return *this;
  }
  Type & set__veh_logitudinal_velocity(
    const double & _arg)
  {
    this->veh_logitudinal_velocity = _arg;
    return *this;
  }
  Type & set__veh_lane_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->veh_lane_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__PlanManeuvers_Request
    std::shared_ptr<carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__PlanManeuvers_Request
    std::shared_ptr<carma_planning_msgs::srv::PlanManeuvers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanManeuvers_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->prior_plan != other.prior_plan) {
      return false;
    }
    if (this->veh_x != other.veh_x) {
      return false;
    }
    if (this->veh_y != other.veh_y) {
      return false;
    }
    if (this->veh_downtrack != other.veh_downtrack) {
      return false;
    }
    if (this->veh_logitudinal_velocity != other.veh_logitudinal_velocity) {
      return false;
    }
    if (this->veh_lane_id != other.veh_lane_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanManeuvers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanManeuvers_Request_

// alias to use template instance with default allocator
using PlanManeuvers_Request =
  carma_planning_msgs::srv::PlanManeuvers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs


// Include directives for member types
// Member 'new_plan'
// already included above
// #include "carma_planning_msgs/msg/detail/maneuver_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__PlanManeuvers_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__PlanManeuvers_Response __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanManeuvers_Response_
{
  using Type = PlanManeuvers_Response_<ContainerAllocator>;

  explicit PlanManeuvers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : new_plan(_init)
  {
    (void)_init;
  }

  explicit PlanManeuvers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : new_plan(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _new_plan_type =
    carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>;
  _new_plan_type new_plan;

  // setters for named parameter idiom
  Type & set__new_plan(
    const carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> & _arg)
  {
    this->new_plan = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__PlanManeuvers_Response
    std::shared_ptr<carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__PlanManeuvers_Response
    std::shared_ptr<carma_planning_msgs::srv::PlanManeuvers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanManeuvers_Response_ & other) const
  {
    if (this->new_plan != other.new_plan) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanManeuvers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanManeuvers_Response_

// alias to use template instance with default allocator
using PlanManeuvers_Response =
  carma_planning_msgs::srv::PlanManeuvers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{

namespace srv
{

struct PlanManeuvers
{
  using Request = carma_planning_msgs::srv::PlanManeuvers_Request;
  using Response = carma_planning_msgs::srv::PlanManeuvers_Response;
};

}  // namespace srv

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__STRUCT_HPP_
