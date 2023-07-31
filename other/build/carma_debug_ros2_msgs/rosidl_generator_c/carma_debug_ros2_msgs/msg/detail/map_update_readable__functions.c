// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
// generated code does not contain a copyright notice
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `format_version`
// Member `map_version`
// Member `route_id`
// Member `traffic_control_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `update_list`
// Member `remove_list`
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__functions.h"

bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__init(carma_debug_ros2_msgs__msg__MapUpdateReadable * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(msg);
    return false;
  }
  // format_version
  if (!rosidl_runtime_c__String__init(&msg->format_version)) {
    carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(msg);
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(msg);
    return false;
  }
  // route_id
  if (!rosidl_runtime_c__String__init(&msg->route_id)) {
    carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(msg);
    return false;
  }
  // route_version
  // invalidates_route
  // traffic_control_id
  if (!rosidl_runtime_c__String__init(&msg->traffic_control_id)) {
    carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(msg);
    return false;
  }
  // update_list
  if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init(&msg->update_list, 0)) {
    carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(msg);
    return false;
  }
  // remove_list
  if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init(&msg->remove_list, 0)) {
    carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(msg);
    return false;
  }
  return true;
}

void
carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(carma_debug_ros2_msgs__msg__MapUpdateReadable * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // format_version
  rosidl_runtime_c__String__fini(&msg->format_version);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // route_id
  rosidl_runtime_c__String__fini(&msg->route_id);
  // route_version
  // invalidates_route
  // traffic_control_id
  rosidl_runtime_c__String__fini(&msg->traffic_control_id);
  // update_list
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__fini(&msg->update_list);
  // remove_list
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__fini(&msg->remove_list);
}

bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__are_equal(const carma_debug_ros2_msgs__msg__MapUpdateReadable * lhs, const carma_debug_ros2_msgs__msg__MapUpdateReadable * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // format_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->format_version), &(rhs->format_version)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_version), &(rhs->map_version)))
  {
    return false;
  }
  // route_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->route_id), &(rhs->route_id)))
  {
    return false;
  }
  // route_version
  if (lhs->route_version != rhs->route_version) {
    return false;
  }
  // invalidates_route
  if (lhs->invalidates_route != rhs->invalidates_route) {
    return false;
  }
  // traffic_control_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->traffic_control_id), &(rhs->traffic_control_id)))
  {
    return false;
  }
  // update_list
  if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__are_equal(
      &(lhs->update_list), &(rhs->update_list)))
  {
    return false;
  }
  // remove_list
  if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__are_equal(
      &(lhs->remove_list), &(rhs->remove_list)))
  {
    return false;
  }
  return true;
}

bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__copy(
  const carma_debug_ros2_msgs__msg__MapUpdateReadable * input,
  carma_debug_ros2_msgs__msg__MapUpdateReadable * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // format_version
  if (!rosidl_runtime_c__String__copy(
      &(input->format_version), &(output->format_version)))
  {
    return false;
  }
  // map_version
  if (!rosidl_runtime_c__String__copy(
      &(input->map_version), &(output->map_version)))
  {
    return false;
  }
  // route_id
  if (!rosidl_runtime_c__String__copy(
      &(input->route_id), &(output->route_id)))
  {
    return false;
  }
  // route_version
  output->route_version = input->route_version;
  // invalidates_route
  output->invalidates_route = input->invalidates_route;
  // traffic_control_id
  if (!rosidl_runtime_c__String__copy(
      &(input->traffic_control_id), &(output->traffic_control_id)))
  {
    return false;
  }
  // update_list
  if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__copy(
      &(input->update_list), &(output->update_list)))
  {
    return false;
  }
  // remove_list
  if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__copy(
      &(input->remove_list), &(output->remove_list)))
  {
    return false;
  }
  return true;
}

carma_debug_ros2_msgs__msg__MapUpdateReadable *
carma_debug_ros2_msgs__msg__MapUpdateReadable__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_debug_ros2_msgs__msg__MapUpdateReadable * msg = (carma_debug_ros2_msgs__msg__MapUpdateReadable *)allocator.allocate(sizeof(carma_debug_ros2_msgs__msg__MapUpdateReadable), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_debug_ros2_msgs__msg__MapUpdateReadable));
  bool success = carma_debug_ros2_msgs__msg__MapUpdateReadable__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_debug_ros2_msgs__msg__MapUpdateReadable__destroy(carma_debug_ros2_msgs__msg__MapUpdateReadable * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__init(carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_debug_ros2_msgs__msg__MapUpdateReadable * data = NULL;

  if (size) {
    data = (carma_debug_ros2_msgs__msg__MapUpdateReadable *)allocator.zero_allocate(size, sizeof(carma_debug_ros2_msgs__msg__MapUpdateReadable), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_debug_ros2_msgs__msg__MapUpdateReadable__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__fini(carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence *
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * array = (carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence *)allocator.allocate(sizeof(carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__destroy(carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__are_equal(const carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * lhs, const carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_debug_ros2_msgs__msg__MapUpdateReadable__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence__copy(
  const carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * input,
  carma_debug_ros2_msgs__msg__MapUpdateReadable__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_debug_ros2_msgs__msg__MapUpdateReadable);
    carma_debug_ros2_msgs__msg__MapUpdateReadable * data =
      (carma_debug_ros2_msgs__msg__MapUpdateReadable *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_debug_ros2_msgs__msg__MapUpdateReadable__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_debug_ros2_msgs__msg__MapUpdateReadable__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_debug_ros2_msgs__msg__MapUpdateReadable__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
