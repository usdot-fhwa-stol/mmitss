// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionReferenceID.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_REFERENCE_ID__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_REFERENCE_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__IntersectionReferenceID __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__IntersectionReferenceID __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionReferenceID_
{
  using Type = IntersectionReferenceID_<ContainerAllocator>;

  explicit IntersectionReferenceID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region = 0;
      this->region_exists = false;
      this->id = 0;
    }
  }

  explicit IntersectionReferenceID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region = 0;
      this->region_exists = false;
      this->id = 0;
    }
  }

  // field types and members
  using _region_type =
    uint16_t;
  _region_type region;
  using _region_exists_type =
    bool;
  _region_exists_type region_exists;
  using _id_type =
    uint16_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__region(
    const uint16_t & _arg)
  {
    this->region = _arg;
    return *this;
  }
  Type & set__region_exists(
    const bool & _arg)
  {
    this->region_exists = _arg;
    return *this;
  }
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t REGION_UNAVAILABLE =
    0u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__IntersectionReferenceID
    std::shared_ptr<j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__IntersectionReferenceID
    std::shared_ptr<j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionReferenceID_ & other) const
  {
    if (this->region != other.region) {
      return false;
    }
    if (this->region_exists != other.region_exists) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionReferenceID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionReferenceID_

// alias to use template instance with default allocator
using IntersectionReferenceID =
  j2735_v2x_msgs::msg::IntersectionReferenceID_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t IntersectionReferenceID_<ContainerAllocator>::REGION_UNAVAILABLE;

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_REFERENCE_ID__STRUCT_HPP_
