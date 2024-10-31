// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/MobilityHeader.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_HEADER__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_HEADER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__MobilityHeader __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__MobilityHeader __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MobilityHeader_
{
  using Type = MobilityHeader_<ContainerAllocator>;

  explicit MobilityHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = "";
      this->recipient_id = "";
      this->sender_bsm_id = "";
      this->plan_id = "";
      this->timestamp = 0ull;
    }
  }

  explicit MobilityHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sender_id(_alloc),
    recipient_id(_alloc),
    sender_bsm_id(_alloc),
    plan_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = "";
      this->recipient_id = "";
      this->sender_bsm_id = "";
      this->plan_id = "";
      this->timestamp = 0ull;
    }
  }

  // field types and members
  using _sender_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _sender_id_type sender_id;
  using _recipient_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _recipient_id_type recipient_id;
  using _sender_bsm_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _sender_bsm_id_type sender_bsm_id;
  using _plan_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _plan_id_type plan_id;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__sender_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__recipient_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->recipient_id = _arg;
    return *this;
  }
  Type & set__sender_bsm_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->sender_bsm_id = _arg;
    return *this;
  }
  Type & set__plan_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->plan_id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityHeader
    std::shared_ptr<carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__MobilityHeader
    std::shared_ptr<carma_v2x_msgs::msg::MobilityHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MobilityHeader_ & other) const
  {
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->recipient_id != other.recipient_id) {
      return false;
    }
    if (this->sender_bsm_id != other.sender_bsm_id) {
      return false;
    }
    if (this->plan_id != other.plan_id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MobilityHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MobilityHeader_

// alias to use template instance with default allocator
using MobilityHeader =
  carma_v2x_msgs::msg::MobilityHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__MOBILITY_HEADER__STRUCT_HPP_
