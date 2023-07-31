// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_perception_msgs:msg/TrafficSignalInfoList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__STRUCT_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'traffic_signal_info_list'
#include "carma_perception_msgs/msg/detail/traffic_signal_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_perception_msgs__msg__TrafficSignalInfoList __attribute__((deprecated))
#else
# define DEPRECATED__carma_perception_msgs__msg__TrafficSignalInfoList __declspec(deprecated)
#endif

namespace carma_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficSignalInfoList_
{
  using Type = TrafficSignalInfoList_<ContainerAllocator>;

  explicit TrafficSignalInfoList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TrafficSignalInfoList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _traffic_signal_info_list_type =
    std::vector<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>>::other>;
  _traffic_signal_info_list_type traffic_signal_info_list;

  // setters for named parameter idiom
  Type & set__traffic_signal_info_list(
    const std::vector<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_perception_msgs::msg::TrafficSignalInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->traffic_signal_info_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_perception_msgs__msg__TrafficSignalInfoList
    std::shared_ptr<carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_perception_msgs__msg__TrafficSignalInfoList
    std::shared_ptr<carma_perception_msgs::msg::TrafficSignalInfoList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficSignalInfoList_ & other) const
  {
    if (this->traffic_signal_info_list != other.traffic_signal_info_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficSignalInfoList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficSignalInfoList_

// alias to use template instance with default allocator
using TrafficSignalInfoList =
  carma_perception_msgs::msg::TrafficSignalInfoList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_INFO_LIST__STRUCT_HPP_
