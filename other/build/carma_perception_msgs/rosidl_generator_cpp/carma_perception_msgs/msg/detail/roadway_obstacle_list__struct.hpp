// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_perception_msgs:msg/RoadwayObstacleList.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__STRUCT_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'roadway_obstacles'
#include "carma_perception_msgs/msg/detail/roadway_obstacle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_perception_msgs__msg__RoadwayObstacleList __attribute__((deprecated))
#else
# define DEPRECATED__carma_perception_msgs__msg__RoadwayObstacleList __declspec(deprecated)
#endif

namespace carma_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadwayObstacleList_
{
  using Type = RoadwayObstacleList_<ContainerAllocator>;

  explicit RoadwayObstacleList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RoadwayObstacleList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _roadway_obstacles_type =
    std::vector<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>>::other>;
  _roadway_obstacles_type roadway_obstacles;

  // setters for named parameter idiom
  Type & set__roadway_obstacles(
    const std::vector<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>>::other> & _arg)
  {
    this->roadway_obstacles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_perception_msgs__msg__RoadwayObstacleList
    std::shared_ptr<carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_perception_msgs__msg__RoadwayObstacleList
    std::shared_ptr<carma_perception_msgs::msg::RoadwayObstacleList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadwayObstacleList_ & other) const
  {
    if (this->roadway_obstacles != other.roadway_obstacles) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadwayObstacleList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadwayObstacleList_

// alias to use template instance with default allocator
using RoadwayObstacleList =
  carma_perception_msgs::msg::RoadwayObstacleList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE_LIST__STRUCT_HPP_
