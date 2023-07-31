// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_planning_msgs:srv/SetActiveRoute.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__STRUCT_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'destination_points'
#include "carma_v2x_msgs/msg/detail/position3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__SetActiveRoute_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__SetActiveRoute_Request __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetActiveRoute_Request_
{
  using Type = SetActiveRoute_Request_<ContainerAllocator>;

  explicit SetActiveRoute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->route_id = "";
    }
  }

  explicit SetActiveRoute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->route_id = "";
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _route_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _route_id_type route_id;
  using _destination_points_type =
    std::vector<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>>::other>;
  _destination_points_type destination_points;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__route_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->route_id = _arg;
    return *this;
  }
  Type & set__destination_points(
    const std::vector<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>>::other> & _arg)
  {
    this->destination_points = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ROUTE_ID =
    0u;
  static constexpr uint8_t DESTINATION_POINTS_ARRAY =
    1u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__SetActiveRoute_Request
    std::shared_ptr<carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__SetActiveRoute_Request
    std::shared_ptr<carma_planning_msgs::srv::SetActiveRoute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetActiveRoute_Request_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->route_id != other.route_id) {
      return false;
    }
    if (this->destination_points != other.destination_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetActiveRoute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetActiveRoute_Request_

// alias to use template instance with default allocator
using SetActiveRoute_Request =
  carma_planning_msgs::srv::SetActiveRoute_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SetActiveRoute_Request_<ContainerAllocator>::ROUTE_ID;
template<typename ContainerAllocator>
constexpr uint8_t SetActiveRoute_Request_<ContainerAllocator>::DESTINATION_POINTS_ARRAY;

}  // namespace srv

}  // namespace carma_planning_msgs


#ifndef _WIN32
# define DEPRECATED__carma_planning_msgs__srv__SetActiveRoute_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_planning_msgs__srv__SetActiveRoute_Response __declspec(deprecated)
#endif

namespace carma_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetActiveRoute_Response_
{
  using Type = SetActiveRoute_Response_<ContainerAllocator>;

  explicit SetActiveRoute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_status = 0;
    }
  }

  explicit SetActiveRoute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t NO_ROUTE =
    1u;
  static constexpr uint8_t ALREADY_FOLLOWING_ROUTE =
    2u;
  static constexpr uint8_t ROUTE_FILE_ERROR =
    3u;
  static constexpr uint8_t ROUTING_FAILURE =
    4u;
  static constexpr uint8_t TRANSFORM_ERROR =
    5u;

  // pointer types
  using RawPtr =
    carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_planning_msgs__srv__SetActiveRoute_Response
    std::shared_ptr<carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_planning_msgs__srv__SetActiveRoute_Response
    std::shared_ptr<carma_planning_msgs::srv::SetActiveRoute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetActiveRoute_Response_ & other) const
  {
    if (this->error_status != other.error_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetActiveRoute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetActiveRoute_Response_

// alias to use template instance with default allocator
using SetActiveRoute_Response =
  carma_planning_msgs::srv::SetActiveRoute_Response_<std::allocator<void>>;

// constant definitions
// guard against 'NO_ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(NO_ERROR)
#    pragma push_macro("NO_ERROR")
#    undef NO_ERROR
#  endif
#endif
template<typename ContainerAllocator>
constexpr uint8_t SetActiveRoute_Response_<ContainerAllocator>::NO_ERROR;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("NO_ERROR")
#endif
template<typename ContainerAllocator>
constexpr uint8_t SetActiveRoute_Response_<ContainerAllocator>::NO_ROUTE;
template<typename ContainerAllocator>
constexpr uint8_t SetActiveRoute_Response_<ContainerAllocator>::ALREADY_FOLLOWING_ROUTE;
template<typename ContainerAllocator>
constexpr uint8_t SetActiveRoute_Response_<ContainerAllocator>::ROUTE_FILE_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t SetActiveRoute_Response_<ContainerAllocator>::ROUTING_FAILURE;
template<typename ContainerAllocator>
constexpr uint8_t SetActiveRoute_Response_<ContainerAllocator>::TRANSFORM_ERROR;

}  // namespace srv

}  // namespace carma_planning_msgs

namespace carma_planning_msgs
{

namespace srv
{

struct SetActiveRoute
{
  using Request = carma_planning_msgs::srv::SetActiveRoute_Request;
  using Response = carma_planning_msgs::srv::SetActiveRoute_Response;
};

}  // namespace srv

}  // namespace carma_planning_msgs

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__SET_ACTIVE_ROUTE__STRUCT_HPP_
