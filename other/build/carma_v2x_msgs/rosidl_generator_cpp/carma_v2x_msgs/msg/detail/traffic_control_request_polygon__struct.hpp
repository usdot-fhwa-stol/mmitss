// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlRequestPolygon.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_POLYGON__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_POLYGON__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'polygon_list'
#include "carma_v2x_msgs/msg/detail/position3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlRequestPolygon __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlRequestPolygon __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlRequestPolygon_
{
  using Type = TrafficControlRequestPolygon_<ContainerAllocator>;

  explicit TrafficControlRequestPolygon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TrafficControlRequestPolygon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _polygon_list_type =
    std::vector<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>>::other>;
  _polygon_list_type polygon_list;

  // setters for named parameter idiom
  Type & set__polygon_list(
    const std::vector<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::Position3D_<ContainerAllocator>>::other> & _arg)
  {
    this->polygon_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlRequestPolygon
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlRequestPolygon
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlRequestPolygon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlRequestPolygon_ & other) const
  {
    if (this->polygon_list != other.polygon_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlRequestPolygon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlRequestPolygon_

// alias to use template instance with default allocator
using TrafficControlRequestPolygon =
  carma_v2x_msgs::msg::TrafficControlRequestPolygon_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_POLYGON__STRUCT_HPP_
