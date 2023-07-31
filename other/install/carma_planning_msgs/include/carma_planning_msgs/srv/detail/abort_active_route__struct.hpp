// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:srv/AbortActiveRoute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__ABORT_ACTIVE_ROUTE__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__ABORT_ACTIVE_ROUTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__AbortActiveRoute_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__AbortActiveRoute_Request __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AbortActiveRoute_Request_
{
  using Type = AbortActiveRoute_Request_<ContainerAllocator>;

  explicit AbortActiveRoute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit AbortActiveRoute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__AbortActiveRoute_Request
    std::shared_ptr<carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__AbortActiveRoute_Request
    std::shared_ptr<carma_planning_msgs::srv::AbortActiveRoute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AbortActiveRoute_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const AbortActiveRoute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AbortActiveRoute_Request_

// alias to use template instance with default allocator
using AbortActiveRoute_Request =
  carma_planning_msgs::srv::AbortActiveRoute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_planning_msgs


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__AbortActiveRoute_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__AbortActiveRoute_Response __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AbortActiveRoute_Response_
{
  using Type = AbortActiveRoute_Response_<ContainerAllocator>;

  explicit AbortActiveRoute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_status = 0;
    }
  }

  explicit AbortActiveRoute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_status = 0;
    }
  }

  // field types and members
  using _error_status_type =
    uint8_t;
  _error_status_type error_status;

  // setters for named parameter idiom
  Type & set__error_status(
    const uint8_t & _arg)
  {
    this->error_status = _arg;
    return *this;
  }

  // constant declarations
  // guard against 'NO_ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(NO_ERROR)
#    pragma push_macro("NO_ERROR")
#    undef NO_ERROR
#  endif
#endif
  static constexpr uint8_t NO_ERROR =
    0u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("NO_ERROR")
#endif
  static constexpr uint8_t NO_ACTIVE_ROUTE =
    1u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__AbortActiveRoute_Response
    std::shared_ptr<carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__AbortActiveRoute_Response
    std::shared_ptr<carma_planning_msgs::srv::AbortActiveRoute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AbortActiveRoute_Response_ & other) const
  {
    if (this->error_status != other.error_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const AbortActiveRoute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AbortActiveRoute_Response_

// alias to use template instance with default allocator
using AbortActiveRoute_Response =
  carma_planning_msgs::srv::AbortActiveRoute_Response_<std::allocator<void>>;

// constant definitions
// guard against 'NO_ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(NO_ERROR)
#    pragma push_macro("NO_ERROR")
#    undef NO_ERROR
#  endif
#endif
template<typename ContainerAllocator>
constexpr uint8_t AbortActiveRoute_Response_<ContainerAllocator>::NO_ERROR;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("NO_ERROR")
#endif
template<typename ContainerAllocator>
constexpr uint8_t AbortActiveRoute_Response_<ContainerAllocator>::NO_ACTIVE_ROUTE;

}  // namespace srv

}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{

namespace srv
{

struct AbortActiveRoute
{
  using Request = carma_planning_msgs::srv::AbortActiveRoute_Request;
  using Response = carma_planning_msgs::srv::AbortActiveRoute_Response;
};

}  // namespace srv

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__ABORT_ACTIVE_ROUTE__STRUCT_HPP_
