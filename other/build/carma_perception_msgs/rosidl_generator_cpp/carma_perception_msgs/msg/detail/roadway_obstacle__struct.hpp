// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_perception_msgs:msg/RoadwayObstacle.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__STRUCT_HPP_
#define CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'object'
#include "carma_perception_msgs/msg/detail/external_object__struct.hpp"
// Member 'connected_vehicle_type'
#include "carma_perception_msgs/msg/detail/connected_vehicle_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_perception_msgs__msg__RoadwayObstacle __attribute__((deprecated))
#else
# define DEPRECATED__carma_perception_msgs__msg__RoadwayObstacle __declspec(deprecated)
#endif

namespace carma_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadwayObstacle_
{
  using Type = RoadwayObstacle_<ContainerAllocator>;

  explicit RoadwayObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_init),
    connected_vehicle_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanelet_id = 0ll;
      this->cross_track = 0.0;
      this->down_track = 0.0;
    }
  }

  explicit RoadwayObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_alloc, _init),
    connected_vehicle_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lanelet_id = 0ll;
      this->cross_track = 0.0;
      this->down_track = 0.0;
    }
  }

  // field types and members
  using _object_type =
    carma_perception_msgs::msg::ExternalObject_<ContainerAllocator>;
  _object_type object;
  using _connected_vehicle_type_type =
    carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator>;
  _connected_vehicle_type_type connected_vehicle_type;
  using _lanelet_id_type =
    int64_t;
  _lanelet_id_type lanelet_id;
  using _cross_track_type =
    double;
  _cross_track_type cross_track;
  using _down_track_type =
    double;
  _down_track_type down_track;
  using _predicted_lanelet_ids_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _predicted_lanelet_ids_type predicted_lanelet_ids;
  using _predicted_lanelet_id_confidences_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predicted_lanelet_id_confidences_type predicted_lanelet_id_confidences;
  using _predicted_cross_tracks_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predicted_cross_tracks_type predicted_cross_tracks;
  using _predicted_cross_track_confidences_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predicted_cross_track_confidences_type predicted_cross_track_confidences;
  using _predicted_down_tracks_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predicted_down_tracks_type predicted_down_tracks;
  using _predicted_down_track_confidences_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _predicted_down_track_confidences_type predicted_down_track_confidences;

  // setters for named parameter idiom
  Type & set__object(
    const carma_perception_msgs::msg::ExternalObject_<ContainerAllocator> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__connected_vehicle_type(
    const carma_perception_msgs::msg::ConnectedVehicleType_<ContainerAllocator> & _arg)
  {
    this->connected_vehicle_type = _arg;
    return *this;
  }
  Type & set__lanelet_id(
    const int64_t & _arg)
  {
    this->lanelet_id = _arg;
    return *this;
  }
  Type & set__cross_track(
    const double & _arg)
  {
    this->cross_track = _arg;
    return *this;
  }
  Type & set__down_track(
    const double & _arg)
  {
    this->down_track = _arg;
    return *this;
  }
  Type & set__predicted_lanelet_ids(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->predicted_lanelet_ids = _arg;
    return *this;
  }
  Type & set__predicted_lanelet_id_confidences(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predicted_lanelet_id_confidences = _arg;
    return *this;
  }
  Type & set__predicted_cross_tracks(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predicted_cross_tracks = _arg;
    return *this;
  }
  Type & set__predicted_cross_track_confidences(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predicted_cross_track_confidences = _arg;
    return *this;
  }
  Type & set__predicted_down_tracks(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predicted_down_tracks = _arg;
    return *this;
  }
  Type & set__predicted_down_track_confidences(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->predicted_down_track_confidences = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_perception_msgs__msg__RoadwayObstacle
    std::shared_ptr<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_perception_msgs__msg__RoadwayObstacle
    std::shared_ptr<carma_perception_msgs::msg::RoadwayObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadwayObstacle_ & other) const
  {
    if (this->object != other.object) {
      return false;
    }
    if (this->connected_vehicle_type != other.connected_vehicle_type) {
      return false;
    }
    if (this->lanelet_id != other.lanelet_id) {
      return false;
    }
    if (this->cross_track != other.cross_track) {
      return false;
    }
    if (this->down_track != other.down_track) {
      return false;
    }
    if (this->predicted_lanelet_ids != other.predicted_lanelet_ids) {
      return false;
    }
    if (this->predicted_lanelet_id_confidences != other.predicted_lanelet_id_confidences) {
      return false;
    }
    if (this->predicted_cross_tracks != other.predicted_cross_tracks) {
      return false;
    }
    if (this->predicted_cross_track_confidences != other.predicted_cross_track_confidences) {
      return false;
    }
    if (this->predicted_down_tracks != other.predicted_down_tracks) {
      return false;
    }
    if (this->predicted_down_track_confidences != other.predicted_down_track_confidences) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadwayObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadwayObstacle_

// alias to use template instance with default allocator
using RoadwayObstacle =
  carma_perception_msgs::msg::RoadwayObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_perception_msgs

#endif  // CARMA_PERCEPTION_MSGS__MSG__DETAIL__ROADWAY_OBSTACLE__STRUCT_HPP_
