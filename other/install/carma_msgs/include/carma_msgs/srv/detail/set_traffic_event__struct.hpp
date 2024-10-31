// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
// generated code does not contain a copyright notice

#ifndef CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__STRUCT_HPP_
#define CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_msgs__srv__SetTrafficEvent_Request __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__srv__SetTrafficEvent_Request __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTrafficEvent_Request_
{
  using Type = SetTrafficEvent_Request_<ContainerAllocator>;

  explicit SetTrafficEvent_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->up_track = 0.0;
      this->down_track = 0.0;
      this->minimum_gap = 0.0;
      this->advisory_speed = 0.0;
    }
  }

  explicit SetTrafficEvent_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->up_track = 0.0;
      this->down_track = 0.0;
      this->minimum_gap = 0.0;
      this->advisory_speed = 0.0;
    }
  }

  // field types and members
  using _up_track_type =
    double;
  _up_track_type up_track;
  using _down_track_type =
    double;
  _down_track_type down_track;
  using _minimum_gap_type =
    double;
  _minimum_gap_type minimum_gap;
  using _advisory_speed_type =
    double;
  _advisory_speed_type advisory_speed;

  // setters for named parameter idiom
  Type & set__up_track(
    const double & _arg)
  {
    this->up_track = _arg;
    return *this;
  }
  Type & set__down_track(
    const double & _arg)
  {
    this->down_track = _arg;
    return *this;
  }
  Type & set__minimum_gap(
    const double & _arg)
  {
    this->minimum_gap = _arg;
    return *this;
  }
  Type & set__advisory_speed(
    const double & _arg)
  {
    this->advisory_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__srv__SetTrafficEvent_Request
    std::shared_ptr<carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__srv__SetTrafficEvent_Request
    std::shared_ptr<carma_msgs::srv::SetTrafficEvent_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTrafficEvent_Request_ & other) const
  {
    if (this->up_track != other.up_track) {
      return false;
    }
    if (this->down_track != other.down_track) {
      return false;
    }
    if (this->minimum_gap != other.minimum_gap) {
      return false;
    }
    if (this->advisory_speed != other.advisory_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTrafficEvent_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTrafficEvent_Request_

// alias to use template instance with default allocator
using SetTrafficEvent_Request =
  carma_msgs::srv::SetTrafficEvent_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_msgs


#ifndef _WIN32
# define DEPRECATED__carma_msgs__srv__SetTrafficEvent_Response __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__srv__SetTrafficEvent_Response __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTrafficEvent_Response_
{
  using Type = SetTrafficEvent_Response_<ContainerAllocator>;

  explicit SetTrafficEvent_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetTrafficEvent_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__srv__SetTrafficEvent_Response
    std::shared_ptr<carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__srv__SetTrafficEvent_Response
    std::shared_ptr<carma_msgs::srv::SetTrafficEvent_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTrafficEvent_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTrafficEvent_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTrafficEvent_Response_

// alias to use template instance with default allocator
using SetTrafficEvent_Response =
  carma_msgs::srv::SetTrafficEvent_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace carma_msgs

namespace carma_msgs
{

namespace srv
{

struct SetTrafficEvent
{
  using Request = carma_msgs::srv::SetTrafficEvent_Request;
  using Response = carma_msgs::srv::SetTrafficEvent_Response;
};

}  // namespace srv

}  // namespace carma_msgs

#endif  // CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__STRUCT_HPP_
