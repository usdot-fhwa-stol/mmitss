// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/EmergencyVehicleResponse.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'm_header'
#include "carma_v2x_msgs/msg/detail/mobility_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__EmergencyVehicleResponse __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__EmergencyVehicleResponse __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyVehicleResponse_
{
  using Type = EmergencyVehicleResponse_<ContainerAllocator>;

  explicit EmergencyVehicleResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_change_lanes = false;
      this->reason = "";
      this->reason_exists = false;
    }
  }

  explicit EmergencyVehicleResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_header(_alloc, _init),
    reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_change_lanes = false;
      this->reason = "";
      this->reason_exists = false;
    }
  }

  // field types and members
  using _m_header_type =
    carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>;
  _m_header_type m_header;
  using _can_change_lanes_type =
    bool;
  _can_change_lanes_type can_change_lanes;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _reason_type reason;
  using _reason_exists_type =
    bool;
  _reason_exists_type reason_exists;

  // setters for named parameter idiom
  Type & set__m_header(
    const carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> & _arg)
  {
    this->m_header = _arg;
    return *this;
  }
  Type & set__can_change_lanes(
    const bool & _arg)
  {
    this->can_change_lanes = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->reason = _arg;
    return *this;
  }
  Type & set__reason_exists(
    const bool & _arg)
  {
    this->reason_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__EmergencyVehicleResponse
    std::shared_ptr<carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__EmergencyVehicleResponse
    std::shared_ptr<carma_v2x_msgs::msg::EmergencyVehicleResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyVehicleResponse_ & other) const
  {
    if (this->m_header != other.m_header) {
      return false;
    }
    if (this->can_change_lanes != other.can_change_lanes) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    if (this->reason_exists != other.reason_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyVehicleResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyVehicleResponse_

// alias to use template instance with default allocator
using EmergencyVehicleResponse =
  carma_v2x_msgs::msg::EmergencyVehicleResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__EMERGENCY_VEHICLE_RESPONSE__STRUCT_HPP_
