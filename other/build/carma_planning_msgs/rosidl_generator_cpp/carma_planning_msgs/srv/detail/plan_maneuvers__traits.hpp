// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_planning_msgs:srv/PlanManeuvers.idl
// generated code does not contain a copyright notice

#ifndef CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__TRAITS_HPP_
#define CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__TRAITS_HPP_

#include "carma_planning_msgs/srv/detail/plan_maneuvers__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'prior_plan'
#include "carma_planning_msgs/msg/detail/maneuver_plan__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::PlanManeuvers_Request>()
{
  return "carma_planning_msgs::srv::PlanManeuvers_Request";
}

template<>
inline const char * name<carma_planning_msgs::srv::PlanManeuvers_Request>()
{
  return "carma_planning_msgs/srv/PlanManeuvers_Request";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::PlanManeuvers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_planning_msgs::srv::PlanManeuvers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_planning_msgs::srv::PlanManeuvers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'new_plan'
// already included above
// #include "carma_planning_msgs/msg/detail/maneuver_plan__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::PlanManeuvers_Response>()
{
  return "carma_planning_msgs::srv::PlanManeuvers_Response";
}

template<>
inline const char * name<carma_planning_msgs::srv::PlanManeuvers_Response>()
{
  return "carma_planning_msgs/srv/PlanManeuvers_Response";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::PlanManeuvers_Response>
  : std::integral_constant<bool, has_fixed_size<carma_planning_msgs::msg::ManeuverPlan>::value> {};

template<>
struct has_bounded_size<carma_planning_msgs::srv::PlanManeuvers_Response>
  : std::integral_constant<bool, has_bounded_size<carma_planning_msgs::msg::ManeuverPlan>::value> {};

template<>
struct is_message<carma_planning_msgs::srv::PlanManeuvers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_planning_msgs::srv::PlanManeuvers>()
{
  return "carma_planning_msgs::srv::PlanManeuvers";
}

template<>
inline const char * name<carma_planning_msgs::srv::PlanManeuvers>()
{
  return "carma_planning_msgs/srv/PlanManeuvers";
}

template<>
struct has_fixed_size<carma_planning_msgs::srv::PlanManeuvers>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_planning_msgs::srv::PlanManeuvers_Request>::value &&
    has_fixed_size<carma_planning_msgs::srv::PlanManeuvers_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_planning_msgs::srv::PlanManeuvers>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_planning_msgs::srv::PlanManeuvers_Request>::value &&
    has_bounded_size<carma_planning_msgs::srv::PlanManeuvers_Response>::value
  >
{
};

template<>
struct is_service<carma_planning_msgs::srv::PlanManeuvers>
  : std::true_type
{
};

template<>
struct is_service_request<carma_planning_msgs::srv::PlanManeuvers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_planning_msgs::srv::PlanManeuvers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_PLANNING_MSGS__SRV__DETAIL__PLAN_MANEUVERS__TRAITS_HPP_
