// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_planning_msgs:msg/ManeuverParameters.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/maneuver_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `maneuver_id`
// Member `planning_strategic_plugin`
// Member `planning_tactical_plugin`
// Member `string_valued_meta_data`
#include "rosidl_runtime_c/string_functions.h"
// Member `bool_valued_meta_data`
// Member `int_valued_meta_data`
// Member `float_valued_meta_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `time_valued_meta_data`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
carma_planning_msgs__msg__ManeuverParameters__init(carma_planning_msgs__msg__ManeuverParameters * msg)
{
  if (!msg) {
    return false;
  }
  // maneuver_id
  if (!rosidl_runtime_c__String__init(&msg->maneuver_id)) {
    carma_planning_msgs__msg__ManeuverParameters__fini(msg);
    return false;
  }
  // negotiation_type
  // planning_strategic_plugin
  if (!rosidl_runtime_c__String__init(&msg->planning_strategic_plugin)) {
    carma_planning_msgs__msg__ManeuverParameters__fini(msg);
    return false;
  }
  // presence_vector
  // planning_tactical_plugin
  if (!rosidl_runtime_c__String__init(&msg->planning_tactical_plugin)) {
    carma_planning_msgs__msg__ManeuverParameters__fini(msg);
    return false;
  }
  // bool_valued_meta_data
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->bool_valued_meta_data, 0)) {
    carma_planning_msgs__msg__ManeuverParameters__fini(msg);
    return false;
  }
  // int_valued_meta_data
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->int_valued_meta_data, 0)) {
    carma_planning_msgs__msg__ManeuverParameters__fini(msg);
    return false;
  }
  // float_valued_meta_data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->float_valued_meta_data, 0)) {
    carma_planning_msgs__msg__ManeuverParameters__fini(msg);
    return false;
  }
  // string_valued_meta_data
  if (!rosidl_runtime_c__String__Sequence__init(&msg->string_valued_meta_data, 0)) {
    carma_planning_msgs__msg__ManeuverParameters__fini(msg);
    return false;
  }
  // time_valued_meta_data
  if (!builtin_interfaces__msg__Time__Sequence__init(&msg->time_valued_meta_data, 0)) {
    carma_planning_msgs__msg__ManeuverParameters__fini(msg);
    return false;
  }
  return true;
}

void
carma_planning_msgs__msg__ManeuverParameters__fini(carma_planning_msgs__msg__ManeuverParameters * msg)
{
  if (!msg) {
    return;
  }
  // maneuver_id
  rosidl_runtime_c__String__fini(&msg->maneuver_id);
  // negotiation_type
  // planning_strategic_plugin
  rosidl_runtime_c__String__fini(&msg->planning_strategic_plugin);
  // presence_vector
  // planning_tactical_plugin
  rosidl_runtime_c__String__fini(&msg->planning_tactical_plugin);
  // bool_valued_meta_data
  rosidl_runtime_c__boolean__Sequence__fini(&msg->bool_valued_meta_data);
  // int_valued_meta_data
  rosidl_runtime_c__int64__Sequence__fini(&msg->int_valued_meta_data);
  // float_valued_meta_data
  rosidl_runtime_c__double__Sequence__fini(&msg->float_valued_meta_data);
  // string_valued_meta_data
  rosidl_runtime_c__String__Sequence__fini(&msg->string_valued_meta_data);
  // time_valued_meta_data
  builtin_interfaces__msg__Time__Sequence__fini(&msg->time_valued_meta_data);
}

bool
carma_planning_msgs__msg__ManeuverParameters__are_equal(const carma_planning_msgs__msg__ManeuverParameters * lhs, const carma_planning_msgs__msg__ManeuverParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // maneuver_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->maneuver_id), &(rhs->maneuver_id)))
  {
    return false;
  }
  // negotiation_type
  if (lhs->negotiation_type != rhs->negotiation_type) {
    return false;
  }
  // planning_strategic_plugin
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_strategic_plugin), &(rhs->planning_strategic_plugin)))
  {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // planning_tactical_plugin
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_tactical_plugin), &(rhs->planning_tactical_plugin)))
  {
    return false;
  }
  // bool_valued_meta_data
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->bool_valued_meta_data), &(rhs->bool_valued_meta_data)))
  {
    return false;
  }
  // int_valued_meta_data
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->int_valued_meta_data), &(rhs->int_valued_meta_data)))
  {
    return false;
  }
  // float_valued_meta_data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->float_valued_meta_data), &(rhs->float_valued_meta_data)))
  {
    return false;
  }
  // string_valued_meta_data
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->string_valued_meta_data), &(rhs->string_valued_meta_data)))
  {
    return false;
  }
  // time_valued_meta_data
  if (!builtin_interfaces__msg__Time__Sequence__are_equal(
      &(lhs->time_valued_meta_data), &(rhs->time_valued_meta_data)))
  {
    return false;
  }
  return true;
}

bool
carma_planning_msgs__msg__ManeuverParameters__copy(
  const carma_planning_msgs__msg__ManeuverParameters * input,
  carma_planning_msgs__msg__ManeuverParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // maneuver_id
  if (!rosidl_runtime_c__String__copy(
      &(input->maneuver_id), &(output->maneuver_id)))
  {
    return false;
  }
  // negotiation_type
  output->negotiation_type = input->negotiation_type;
  // planning_strategic_plugin
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_strategic_plugin), &(output->planning_strategic_plugin)))
  {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // planning_tactical_plugin
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_tactical_plugin), &(output->planning_tactical_plugin)))
  {
    return false;
  }
  // bool_valued_meta_data
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->bool_valued_meta_data), &(output->bool_valued_meta_data)))
  {
    return false;
  }
  // int_valued_meta_data
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->int_valued_meta_data), &(output->int_valued_meta_data)))
  {
    return false;
  }
  // float_valued_meta_data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->float_valued_meta_data), &(output->float_valued_meta_data)))
  {
    return false;
  }
  // string_valued_meta_data
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->string_valued_meta_data), &(output->string_valued_meta_data)))
  {
    return false;
  }
  // time_valued_meta_data
  if (!builtin_interfaces__msg__Time__Sequence__copy(
      &(input->time_valued_meta_data), &(output->time_valued_meta_data)))
  {
    return false;
  }
  return true;
}

carma_planning_msgs__msg__ManeuverParameters *
carma_planning_msgs__msg__ManeuverParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__ManeuverParameters * msg = (carma_planning_msgs__msg__ManeuverParameters *)allocator.allocate(sizeof(carma_planning_msgs__msg__ManeuverParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_planning_msgs__msg__ManeuverParameters));
  bool success = carma_planning_msgs__msg__ManeuverParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_planning_msgs__msg__ManeuverParameters__destroy(carma_planning_msgs__msg__ManeuverParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_planning_msgs__msg__ManeuverParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_planning_msgs__msg__ManeuverParameters__Sequence__init(carma_planning_msgs__msg__ManeuverParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__ManeuverParameters * data = NULL;

  if (size) {
    data = (carma_planning_msgs__msg__ManeuverParameters *)allocator.zero_allocate(size, sizeof(carma_planning_msgs__msg__ManeuverParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_planning_msgs__msg__ManeuverParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_planning_msgs__msg__ManeuverParameters__fini(&data[i - 1]);
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
carma_planning_msgs__msg__ManeuverParameters__Sequence__fini(carma_planning_msgs__msg__ManeuverParameters__Sequence * array)
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
      carma_planning_msgs__msg__ManeuverParameters__fini(&array->data[i]);
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

carma_planning_msgs__msg__ManeuverParameters__Sequence *
carma_planning_msgs__msg__ManeuverParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_planning_msgs__msg__ManeuverParameters__Sequence * array = (carma_planning_msgs__msg__ManeuverParameters__Sequence *)allocator.allocate(sizeof(carma_planning_msgs__msg__ManeuverParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_planning_msgs__msg__ManeuverParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_planning_msgs__msg__ManeuverParameters__Sequence__destroy(carma_planning_msgs__msg__ManeuverParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_planning_msgs__msg__ManeuverParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_planning_msgs__msg__ManeuverParameters__Sequence__are_equal(const carma_planning_msgs__msg__ManeuverParameters__Sequence * lhs, const carma_planning_msgs__msg__ManeuverParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_planning_msgs__msg__ManeuverParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_planning_msgs__msg__ManeuverParameters__Sequence__copy(
  const carma_planning_msgs__msg__ManeuverParameters__Sequence * input,
  carma_planning_msgs__msg__ManeuverParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_planning_msgs__msg__ManeuverParameters);
    carma_planning_msgs__msg__ManeuverParameters * data =
      (carma_planning_msgs__msg__ManeuverParameters *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_planning_msgs__msg__ManeuverParameters__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_planning_msgs__msg__ManeuverParameters__fini(&data[i]);
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
    if (!carma_planning_msgs__msg__ManeuverParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
