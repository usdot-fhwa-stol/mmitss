// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/traffic_control_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `proj`
// Member `datum`
#include "rosidl_runtime_c/string_functions.h"
// Member `reftime`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `nodes`
#include "carma_v2x_msgs/msg/detail/path_node__functions.h"

bool
carma_v2x_msgs__msg__TrafficControlGeometry__init(carma_v2x_msgs__msg__TrafficControlGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // proj
  if (!rosidl_runtime_c__String__init(&msg->proj)) {
    carma_v2x_msgs__msg__TrafficControlGeometry__fini(msg);
    return false;
  }
  // datum
  if (!rosidl_runtime_c__String__init(&msg->datum)) {
    carma_v2x_msgs__msg__TrafficControlGeometry__fini(msg);
    return false;
  }
  // reftime
  if (!builtin_interfaces__msg__Time__init(&msg->reftime)) {
    carma_v2x_msgs__msg__TrafficControlGeometry__fini(msg);
    return false;
  }
  // reflon
  // reflat
  // refelv
  // heading
  // nodes
  if (!carma_v2x_msgs__msg__PathNode__Sequence__init(&msg->nodes, 0)) {
    carma_v2x_msgs__msg__TrafficControlGeometry__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__TrafficControlGeometry__fini(carma_v2x_msgs__msg__TrafficControlGeometry * msg)
{
  if (!msg) {
    return;
  }
  // proj
  rosidl_runtime_c__String__fini(&msg->proj);
  // datum
  rosidl_runtime_c__String__fini(&msg->datum);
  // reftime
  builtin_interfaces__msg__Time__fini(&msg->reftime);
  // reflon
  // reflat
  // refelv
  // heading
  // nodes
  carma_v2x_msgs__msg__PathNode__Sequence__fini(&msg->nodes);
}

bool
carma_v2x_msgs__msg__TrafficControlGeometry__are_equal(const carma_v2x_msgs__msg__TrafficControlGeometry * lhs, const carma_v2x_msgs__msg__TrafficControlGeometry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // proj
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->proj), &(rhs->proj)))
  {
    return false;
  }
  // datum
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->datum), &(rhs->datum)))
  {
    return false;
  }
  // reftime
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->reftime), &(rhs->reftime)))
  {
    return false;
  }
  // reflon
  if (lhs->reflon != rhs->reflon) {
    return false;
  }
  // reflat
  if (lhs->reflat != rhs->reflat) {
    return false;
  }
  // refelv
  if (lhs->refelv != rhs->refelv) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // nodes
  if (!carma_v2x_msgs__msg__PathNode__Sequence__are_equal(
      &(lhs->nodes), &(rhs->nodes)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrafficControlGeometry__copy(
  const carma_v2x_msgs__msg__TrafficControlGeometry * input,
  carma_v2x_msgs__msg__TrafficControlGeometry * output)
{
  if (!input || !output) {
    return false;
  }
  // proj
  if (!rosidl_runtime_c__String__copy(
      &(input->proj), &(output->proj)))
  {
    return false;
  }
  // datum
  if (!rosidl_runtime_c__String__copy(
      &(input->datum), &(output->datum)))
  {
    return false;
  }
  // reftime
  if (!builtin_interfaces__msg__Time__copy(
      &(input->reftime), &(output->reftime)))
  {
    return false;
  }
  // reflon
  output->reflon = input->reflon;
  // reflat
  output->reflat = input->reflat;
  // refelv
  output->refelv = input->refelv;
  // heading
  output->heading = input->heading;
  // nodes
  if (!carma_v2x_msgs__msg__PathNode__Sequence__copy(
      &(input->nodes), &(output->nodes)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__TrafficControlGeometry *
carma_v2x_msgs__msg__TrafficControlGeometry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlGeometry * msg = (carma_v2x_msgs__msg__TrafficControlGeometry *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrafficControlGeometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__TrafficControlGeometry));
  bool success = carma_v2x_msgs__msg__TrafficControlGeometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__TrafficControlGeometry__destroy(carma_v2x_msgs__msg__TrafficControlGeometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__TrafficControlGeometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__TrafficControlGeometry__Sequence__init(carma_v2x_msgs__msg__TrafficControlGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlGeometry * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__TrafficControlGeometry *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__TrafficControlGeometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__TrafficControlGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__TrafficControlGeometry__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__TrafficControlGeometry__Sequence__fini(carma_v2x_msgs__msg__TrafficControlGeometry__Sequence * array)
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
      carma_v2x_msgs__msg__TrafficControlGeometry__fini(&array->data[i]);
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

carma_v2x_msgs__msg__TrafficControlGeometry__Sequence *
carma_v2x_msgs__msg__TrafficControlGeometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrafficControlGeometry__Sequence * array = (carma_v2x_msgs__msg__TrafficControlGeometry__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrafficControlGeometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__TrafficControlGeometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__TrafficControlGeometry__Sequence__destroy(carma_v2x_msgs__msg__TrafficControlGeometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__TrafficControlGeometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__TrafficControlGeometry__Sequence__are_equal(const carma_v2x_msgs__msg__TrafficControlGeometry__Sequence * lhs, const carma_v2x_msgs__msg__TrafficControlGeometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__TrafficControlGeometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrafficControlGeometry__Sequence__copy(
  const carma_v2x_msgs__msg__TrafficControlGeometry__Sequence * input,
  carma_v2x_msgs__msg__TrafficControlGeometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__TrafficControlGeometry);
    carma_v2x_msgs__msg__TrafficControlGeometry * data =
      (carma_v2x_msgs__msg__TrafficControlGeometry *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__TrafficControlGeometry__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__TrafficControlGeometry__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__TrafficControlGeometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
