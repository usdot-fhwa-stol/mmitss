// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:srv/SetGuidanceActive.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__SET_GUIDANCE_ACTIVE__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__SET_GUIDANCE_ACTIVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__SetGuidanceActive_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__SetGuidanceActive_Request __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGuidanceActive_Request_
{
  using Type = SetGuidanceActive_Request_<ContainerAllocator>;

  explicit SetGuidanceActive_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guidance_active = false;
    }
  }

  explicit SetGuidanceActive_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guidance_active = false;
    }
  }

  // field types and members
  using _guidance_active_type =
    bool;
  _guidance_active_type guidance_active;

  // setters for named parameter idiom
  Type & set__guidance_active(
    const bool & _arg)
  {
    this->guidance_active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__SetGuidanceActive_Request
    std::shared_ptr<carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__SetGuidanceActive_Request
    std::shared_ptr<carma_planning_msgs::srv::SetGuidanceActive_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGuidanceActive_Request_ & other) const
  {
    if (this->guidance_active != other.guidance_active) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGuidanceActive_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGuidanceActive_Request_

// alias to use template instance with default allocator
using SetGuidanceActive_Request =
  carma_planning_msgs::srv::SetGuidanceActive_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__SetGuidanceActive_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__SetGuidanceActive_Response __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGuidanceActive_Response_
{
  using Type = SetGuidanceActive_Response_<ContainerAllocator>;

  explicit SetGuidanceActive_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guidance_status = false;
    }
  }

  explicit SetGuidanceActive_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->guidance_status = false;
    }
  }

  // field types and members
  using _guidance_status_type =
    bool;
  _guidance_status_type guidance_status;

  // setters for named parameter idiom
  Type & set__guidance_status(
    const bool & _arg)
  {
    this->guidance_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__SetGuidanceActive_Response
    std::shared_ptr<carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__SetGuidanceActive_Response
    std::shared_ptr<carma_planning_msgs::srv::SetGuidanceActive_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGuidanceActive_Response_ & other) const
  {
    if (this->guidance_status != other.guidance_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGuidanceActive_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGuidanceActive_Response_

// alias to use template instance with default allocator
using SetGuidanceActive_Response =
  carma_planning_msgs::srv::SetGuidanceActive_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{

namespace srv
{

struct SetGuidanceActive
{
  using Request = carma_planning_msgs::srv::SetGuidanceActive_Request;
  using Response = carma_planning_msgs::srv::SetGuidanceActive_Response;
};

}  // namespace srv

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__SET_GUIDANCE_ACTIVE__STRUCT_HPP_
