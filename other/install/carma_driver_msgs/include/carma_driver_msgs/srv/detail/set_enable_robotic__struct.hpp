// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:srv/SetEnableRobotic.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__srv__SetEnableRobotic_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__srv__SetEnableRobotic_Request __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEnableRobotic_Request_
{
  using Type = SetEnableRobotic_Request_<ContainerAllocator>;

  explicit SetEnableRobotic_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set = 0;
    }
  }

  explicit SetEnableRobotic_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set = 0;
    }
  }

  // field types and members
  using _set_type =
    uint8_t;
  _set_type set;

  // setters for named parameter idiom
  Type & set__set(
    const uint8_t & _arg)
  {
    this->set = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DISABLE =
    0u;
  static constexpr uint8_t ENABLE =
    1u;

  // pointer types
  using RawPtr =
    carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__srv__SetEnableRobotic_Request
    std::shared_ptr<carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__srv__SetEnableRobotic_Request
    std::shared_ptr<carma_driver_msgs::srv::SetEnableRobotic_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEnableRobotic_Request_ & other) const
  {
    if (this->set != other.set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEnableRobotic_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEnableRobotic_Request_

// alias to use template instance with default allocator
using SetEnableRobotic_Request =
  carma_driver_msgs::srv::SetEnableRobotic_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SetEnableRobotic_Request_<ContainerAllocator>::DISABLE;
template<typename ContainerAllocator>
constexpr uint8_t SetEnableRobotic_Request_<ContainerAllocator>::ENABLE;

}  // namespace srv

}  // namespace carma_driver_msgs


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__srv__SetEnableRobotic_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__srv__SetEnableRobotic_Response __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEnableRobotic_Response_
{
  using Type = SetEnableRobotic_Response_<ContainerAllocator>;

  explicit SetEnableRobotic_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetEnableRobotic_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__srv__SetEnableRobotic_Response
    std::shared_ptr<carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__srv__SetEnableRobotic_Response
    std::shared_ptr<carma_driver_msgs::srv::SetEnableRobotic_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEnableRobotic_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEnableRobotic_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEnableRobotic_Response_

// alias to use template instance with default allocator
using SetEnableRobotic_Response =
  carma_driver_msgs::srv::SetEnableRobotic_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_driver_msgs

namespace carma_driver_msgs
{

namespace srv
{

struct SetEnableRobotic
{
  using Request = carma_driver_msgs::srv::SetEnableRobotic_Request;
  using Response = carma_driver_msgs::srv::SetEnableRobotic_Response;
};

}  // namespace srv

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__STRUCT_HPP_
