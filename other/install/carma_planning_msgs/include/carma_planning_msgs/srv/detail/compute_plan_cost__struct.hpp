// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:srv/ComputePlanCost.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__COMPUTE_PLAN_COST__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__COMPUTE_PLAN_COST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'maneuver_plan'
#include "carma_planning_msgs/msg/detail/maneuver_plan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__ComputePlanCost_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__ComputePlanCost_Request __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputePlanCost_Request_
{
  using Type = ComputePlanCost_Request_<ContainerAllocator>;

  explicit ComputePlanCost_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver_plan(_init)
  {
    (void)_init;
  }

  explicit ComputePlanCost_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver_plan(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _maneuver_plan_type =
    carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator>;
  _maneuver_plan_type maneuver_plan;

  // setters for named parameter idiom
  Type & set__maneuver_plan(
    const carma_planning_msgs::msg::ManeuverPlan_<ContainerAllocator> & _arg)
  {
    this->maneuver_plan = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__ComputePlanCost_Request
    std::shared_ptr<carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__ComputePlanCost_Request
    std::shared_ptr<carma_planning_msgs::srv::ComputePlanCost_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanCost_Request_ & other) const
  {
    if (this->maneuver_plan != other.maneuver_plan) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanCost_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanCost_Request_

// alias to use template instance with default allocator
using ComputePlanCost_Request =
  carma_planning_msgs::srv::ComputePlanCost_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__ComputePlanCost_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__ComputePlanCost_Response __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ComputePlanCost_Response_
{
  using Type = ComputePlanCost_Response_<ContainerAllocator>;

  explicit ComputePlanCost_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_cost = 0.0;
    }
  }

  explicit ComputePlanCost_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_cost = 0.0;
    }
  }

  // field types and members
  using _plan_cost_type =
    double;
  _plan_cost_type plan_cost;

  // setters for named parameter idiom
  Type & set__plan_cost(
    const double & _arg)
  {
    this->plan_cost = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__ComputePlanCost_Response
    std::shared_ptr<carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__ComputePlanCost_Response
    std::shared_ptr<carma_planning_msgs::srv::ComputePlanCost_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputePlanCost_Response_ & other) const
  {
    if (this->plan_cost != other.plan_cost) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputePlanCost_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputePlanCost_Response_

// alias to use template instance with default allocator
using ComputePlanCost_Response =
  carma_planning_msgs::srv::ComputePlanCost_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{

namespace srv
{

struct ComputePlanCost
{
  using Request = carma_planning_msgs::srv::ComputePlanCost_Request;
  using Response = carma_planning_msgs::srv::ComputePlanCost_Response;
};

}  // namespace srv

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__COMPUTE_PLAN_COST__STRUCT_HPP_
