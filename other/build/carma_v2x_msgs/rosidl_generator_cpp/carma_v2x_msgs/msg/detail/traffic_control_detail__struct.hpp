// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlDetail __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__TrafficControlDetail __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlDetail_
{
  using Type = TrafficControlDetail_<ContainerAllocator>;

  explicit TrafficControlDetail_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->closed = 0;
      this->chains = 0;
      this->direction = 0;
      this->lataffinity = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->latperm.begin(), this->latperm.end(), 0);
      this->parking = 0;
      this->minspeed = 0.0;
      this->maxspeed = 0.0;
      this->minhdwy = 0.0;
      this->maxvehmass = 0.0;
      this->maxvehheight = 0.0;
      this->maxvehwidth = 0.0;
      this->maxvehlength = 0.0;
      this->maxvehaxles = 0;
      this->minvehocc = 0;
      this->maxplatoonsize = 0;
      this->minplatoonhdwy = 0.0;
    }
  }

  explicit TrafficControlDetail_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : latperm(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->closed = 0;
      this->chains = 0;
      this->direction = 0;
      this->lataffinity = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->latperm.begin(), this->latperm.end(), 0);
      this->parking = 0;
      this->minspeed = 0.0;
      this->maxspeed = 0.0;
      this->minhdwy = 0.0;
      this->maxvehmass = 0.0;
      this->maxvehheight = 0.0;
      this->maxvehwidth = 0.0;
      this->maxvehlength = 0.0;
      this->maxvehaxles = 0;
      this->minvehocc = 0;
      this->maxplatoonsize = 0;
      this->minplatoonhdwy = 0.0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _signal_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _signal_type signal;
  using _closed_type =
    uint8_t;
  _closed_type closed;
  using _chains_type =
    uint8_t;
  _chains_type chains;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _lataffinity_type =
    uint8_t;
  _lataffinity_type lataffinity;
  using _latperm_type =
    std::array<uint8_t, 2>;
  _latperm_type latperm;
  using _parking_type =
    uint8_t;
  _parking_type parking;
  using _minspeed_type =
    double;
  _minspeed_type minspeed;
  using _maxspeed_type =
    double;
  _maxspeed_type maxspeed;
  using _minhdwy_type =
    double;
  _minhdwy_type minhdwy;
  using _maxvehmass_type =
    double;
  _maxvehmass_type maxvehmass;
  using _maxvehheight_type =
    double;
  _maxvehheight_type maxvehheight;
  using _maxvehwidth_type =
    double;
  _maxvehwidth_type maxvehwidth;
  using _maxvehlength_type =
    double;
  _maxvehlength_type maxvehlength;
  using _maxvehaxles_type =
    uint8_t;
  _maxvehaxles_type maxvehaxles;
  using _minvehocc_type =
    uint8_t;
  _minvehocc_type minvehocc;
  using _maxplatoonsize_type =
    uint8_t;
  _maxplatoonsize_type maxplatoonsize;
  using _minplatoonhdwy_type =
    double;
  _minplatoonhdwy_type minplatoonhdwy;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__signal(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->signal = _arg;
    return *this;
  }
  Type & set__closed(
    const uint8_t & _arg)
  {
    this->closed = _arg;
    return *this;
  }
  Type & set__chains(
    const uint8_t & _arg)
  {
    this->chains = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__lataffinity(
    const uint8_t & _arg)
  {
    this->lataffinity = _arg;
    return *this;
  }
  Type & set__latperm(
    const std::array<uint8_t, 2> & _arg)
  {
    this->latperm = _arg;
    return *this;
  }
  Type & set__parking(
    const uint8_t & _arg)
  {
    this->parking = _arg;
    return *this;
  }
  Type & set__minspeed(
    const double & _arg)
  {
    this->minspeed = _arg;
    return *this;
  }
  Type & set__maxspeed(
    const double & _arg)
  {
    this->maxspeed = _arg;
    return *this;
  }
  Type & set__minhdwy(
    const double & _arg)
  {
    this->minhdwy = _arg;
    return *this;
  }
  Type & set__maxvehmass(
    const double & _arg)
  {
    this->maxvehmass = _arg;
    return *this;
  }
  Type & set__maxvehheight(
    const double & _arg)
  {
    this->maxvehheight = _arg;
    return *this;
  }
  Type & set__maxvehwidth(
    const double & _arg)
  {
    this->maxvehwidth = _arg;
    return *this;
  }
  Type & set__maxvehlength(
    const double & _arg)
  {
    this->maxvehlength = _arg;
    return *this;
  }
  Type & set__maxvehaxles(
    const uint8_t & _arg)
  {
    this->maxvehaxles = _arg;
    return *this;
  }
  Type & set__minvehocc(
    const uint8_t & _arg)
  {
    this->minvehocc = _arg;
    return *this;
  }
  Type & set__maxplatoonsize(
    const uint8_t & _arg)
  {
    this->maxplatoonsize = _arg;
    return *this;
  }
  Type & set__minplatoonhdwy(
    const double & _arg)
  {
    this->minplatoonhdwy = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SIGNAL_CHOICE =
    0u;
  static constexpr uint8_t STOP_CHOICE =
    1u;
  static constexpr uint8_t YIELD_CHOICE =
    2u;
  static constexpr uint8_t NOTOWING_CHOICE =
    3u;
  static constexpr uint8_t RESTRICTED_CHOICE =
    4u;
  static constexpr uint8_t CLOSED_CHOICE =
    5u;
  static constexpr uint8_t CHAINS_CHOICE =
    6u;
  static constexpr uint8_t DIRECTION_CHOICE =
    7u;
  static constexpr uint8_t LATAFFINITY_CHOICE =
    8u;
  static constexpr uint8_t LATPERM_CHOICE =
    9u;
  static constexpr uint8_t PARKING_CHOICE =
    10u;
  static constexpr uint8_t MINSPEED_CHOICE =
    11u;
  static constexpr uint8_t MAXSPEED_CHOICE =
    12u;
  static constexpr uint8_t MINHDWY_CHOICE =
    13u;
  static constexpr uint8_t MAXVEHMASS_CHOICE =
    14u;
  static constexpr uint8_t MAXVEHHEIGHT_CHOICE =
    15u;
  static constexpr uint8_t MAXVEHWIDTH_CHOICE =
    16u;
  static constexpr uint8_t MAXVEHLENGTH_CHOICE =
    17u;
  static constexpr uint8_t MAXVEHAXLES_CHOICE =
    18u;
  static constexpr uint8_t MINVEHOCC_CHOICE =
    19u;
  static constexpr uint8_t MAXPLATOONSIZE_CHOICE =
    20u;
  static constexpr uint8_t MINPLATOONHDWY_CHOICE =
    21u;
  static constexpr uint8_t OPEN =
    0u;
  static constexpr uint8_t CLOSED =
    1u;
  static constexpr uint8_t TAPERLEFT =
    2u;
  static constexpr uint8_t TAPERRIGHT =
    3u;
  static constexpr uint8_t OPENLEFT =
    4u;
  static constexpr uint8_t OPENRIGHT =
    5u;
  static constexpr uint8_t NO =
    0u;
  static constexpr uint8_t PERMITTED =
    1u;
  static constexpr uint8_t REQUIRED =
    2u;
  static constexpr uint8_t FORWARD =
    0u;
  static constexpr uint8_t REVERSE =
    1u;
  static constexpr uint8_t LEFT =
    0u;
  static constexpr uint8_t RIGHT =
    1u;
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t PASSINGONLY =
    2u;
  static constexpr uint8_t EMERGENCYONLY =
    3u;
  static constexpr uint8_t PARALLEL =
    1u;
  static constexpr uint8_t ANGLED =
    2u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlDetail
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__TrafficControlDetail
    std::shared_ptr<carma_v2x_msgs::msg::TrafficControlDetail_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlDetail_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->signal != other.signal) {
      return false;
    }
    if (this->closed != other.closed) {
      return false;
    }
    if (this->chains != other.chains) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->lataffinity != other.lataffinity) {
      return false;
    }
    if (this->latperm != other.latperm) {
      return false;
    }
    if (this->parking != other.parking) {
      return false;
    }
    if (this->minspeed != other.minspeed) {
      return false;
    }
    if (this->maxspeed != other.maxspeed) {
      return false;
    }
    if (this->minhdwy != other.minhdwy) {
      return false;
    }
    if (this->maxvehmass != other.maxvehmass) {
      return false;
    }
    if (this->maxvehheight != other.maxvehheight) {
      return false;
    }
    if (this->maxvehwidth != other.maxvehwidth) {
      return false;
    }
    if (this->maxvehlength != other.maxvehlength) {
      return false;
    }
    if (this->maxvehaxles != other.maxvehaxles) {
      return false;
    }
    if (this->minvehocc != other.minvehocc) {
      return false;
    }
    if (this->maxplatoonsize != other.maxplatoonsize) {
      return false;
    }
    if (this->minplatoonhdwy != other.minplatoonhdwy) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlDetail_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlDetail_

// alias to use template instance with default allocator
using TrafficControlDetail =
  carma_v2x_msgs::msg::TrafficControlDetail_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::SIGNAL_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::STOP_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::YIELD_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::NOTOWING_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::RESTRICTED_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::CLOSED_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::CHAINS_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::DIRECTION_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::LATAFFINITY_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::LATPERM_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::PARKING_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MINSPEED_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MAXSPEED_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MINHDWY_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MAXVEHMASS_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MAXVEHHEIGHT_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MAXVEHWIDTH_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MAXVEHLENGTH_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MAXVEHAXLES_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MINVEHOCC_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MAXPLATOONSIZE_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::MINPLATOONHDWY_CHOICE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::OPEN;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::CLOSED;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::TAPERLEFT;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::TAPERRIGHT;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::OPENLEFT;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::OPENRIGHT;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::NO;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::PERMITTED;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::REQUIRED;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::FORWARD;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::REVERSE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::LEFT;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::NONE;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::PASSINGONLY;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::EMERGENCYONLY;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::PARALLEL;
template<typename ContainerAllocator>
constexpr uint8_t TrafficControlDetail_<ContainerAllocator>::ANGLED;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__STRUCT_HPP_
