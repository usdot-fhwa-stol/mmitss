// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:srv/GetEmergencyRoute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__GET_EMERGENCY_ROUTE__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__GET_EMERGENCY_ROUTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__GetEmergencyRoute_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__GetEmergencyRoute_Request __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEmergencyRoute_Request_
{
  using Type = GetEmergencyRoute_Request_<ContainerAllocator>;

  explicit GetEmergencyRoute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetEmergencyRoute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__GetEmergencyRoute_Request
    std::shared_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__GetEmergencyRoute_Request
    std::shared_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEmergencyRoute_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEmergencyRoute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEmergencyRoute_Request_

// alias to use template instance with default allocator
using GetEmergencyRoute_Request =
  carma_planning_msgs::srv::GetEmergencyRoute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__GetEmergencyRoute_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__GetEmergencyRoute_Response __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEmergencyRoute_Response_
{
  using Type = GetEmergencyRoute_Response_<ContainerAllocator>;

  explicit GetEmergencyRoute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_successful = false;
      this->route_name = "";
    }
  }

  explicit GetEmergencyRoute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_successful = false;
      this->route_name = "";
    }
  }

  // field types and members
  using _is_successful_type =
    bool;
  _is_successful_type is_successful;
  using _route_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _route_name_type route_name;

  // setters for named parameter idiom
  Type & set__is_successful(
    const bool & _arg)
  {
    this->is_successful = _arg;
    return *this;
  }
  Type & set__route_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->route_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__GetEmergencyRoute_Response
    std::shared_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__GetEmergencyRoute_Response
    std::shared_ptr<carma_planning_msgs::srv::GetEmergencyRoute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEmergencyRoute_Response_ & other) const
  {
    if (this->is_successful != other.is_successful) {
      return false;
    }
    if (this->route_name != other.route_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEmergencyRoute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEmergencyRoute_Response_

// alias to use template instance with default allocator
using GetEmergencyRoute_Response =
  carma_planning_msgs::srv::GetEmergencyRoute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{

namespace srv
{

struct GetEmergencyRoute
{
  using Request = carma_planning_msgs::srv::GetEmergencyRoute_Request;
  using Response = carma_planning_msgs::srv::GetEmergencyRoute_Response;
};

}  // namespace srv

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__GET_EMERGENCY_ROUTE__STRUCT_HPP_
