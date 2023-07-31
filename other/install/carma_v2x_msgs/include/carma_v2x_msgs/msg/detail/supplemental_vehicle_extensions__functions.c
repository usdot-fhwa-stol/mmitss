// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/supplemental_vehicle_extensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `classification`
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"
// Member `class_details`
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__functions.h"
// Member `vehicle_data`
#include "carma_v2x_msgs/msg/detail/vehicle_data__functions.h"
// Member `weather_report`
#include "carma_v2x_msgs/msg/detail/weather_report__functions.h"
// Member `weather_probe`
#include "carma_v2x_msgs/msg/detail/weather_probe__functions.h"
// Member `obstacle`
#include "carma_v2x_msgs/msg/detail/obstacle_detection__functions.h"
// Member `status`
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__functions.h"
// Member `speed_profile`
#include "carma_v2x_msgs/msg/detail/gross_speed__functions.h"
// Member `the_rtcm`
#include "carma_v2x_msgs/msg/detail/rtcm_package__functions.h"

bool
carma_v2x_msgs__msg__SupplementalVehicleExtensions__init(carma_v2x_msgs__msg__SupplementalVehicleExtensions * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // classification
  if (!j2735_v2x_msgs__msg__BasicVehicleClass__init(&msg->classification)) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
    return false;
  }
  // class_details
  if (!j2735_v2x_msgs__msg__VehicleClassification__init(&msg->class_details)) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
    return false;
  }
  // vehicle_data
  if (!carma_v2x_msgs__msg__VehicleData__init(&msg->vehicle_data)) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
    return false;
  }
  // weather_report
  if (!carma_v2x_msgs__msg__WeatherReport__init(&msg->weather_report)) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
    return false;
  }
  // weather_probe
  if (!carma_v2x_msgs__msg__WeatherProbe__init(&msg->weather_probe)) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
    return false;
  }
  // obstacle
  if (!carma_v2x_msgs__msg__ObstacleDetection__init(&msg->obstacle)) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
    return false;
  }
  // status
  if (!j2735_v2x_msgs__msg__DisabledVehicle__init(&msg->status)) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
    return false;
  }
  // speed_profile
  if (!carma_v2x_msgs__msg__GrossSpeed__Sequence__init(&msg->speed_profile, 0)) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
    return false;
  }
  // the_rtcm
  if (!carma_v2x_msgs__msg__RTCMPackage__init(&msg->the_rtcm)) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(carma_v2x_msgs__msg__SupplementalVehicleExtensions * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // classification
  j2735_v2x_msgs__msg__BasicVehicleClass__fini(&msg->classification);
  // class_details
  j2735_v2x_msgs__msg__VehicleClassification__fini(&msg->class_details);
  // vehicle_data
  carma_v2x_msgs__msg__VehicleData__fini(&msg->vehicle_data);
  // weather_report
  carma_v2x_msgs__msg__WeatherReport__fini(&msg->weather_report);
  // weather_probe
  carma_v2x_msgs__msg__WeatherProbe__fini(&msg->weather_probe);
  // obstacle
  carma_v2x_msgs__msg__ObstacleDetection__fini(&msg->obstacle);
  // status
  j2735_v2x_msgs__msg__DisabledVehicle__fini(&msg->status);
  // speed_profile
  carma_v2x_msgs__msg__GrossSpeed__Sequence__fini(&msg->speed_profile);
  // the_rtcm
  carma_v2x_msgs__msg__RTCMPackage__fini(&msg->the_rtcm);
}

bool
carma_v2x_msgs__msg__SupplementalVehicleExtensions__are_equal(const carma_v2x_msgs__msg__SupplementalVehicleExtensions * lhs, const carma_v2x_msgs__msg__SupplementalVehicleExtensions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // classification
  if (!j2735_v2x_msgs__msg__BasicVehicleClass__are_equal(
      &(lhs->classification), &(rhs->classification)))
  {
    return false;
  }
  // class_details
  if (!j2735_v2x_msgs__msg__VehicleClassification__are_equal(
      &(lhs->class_details), &(rhs->class_details)))
  {
    return false;
  }
  // vehicle_data
  if (!carma_v2x_msgs__msg__VehicleData__are_equal(
      &(lhs->vehicle_data), &(rhs->vehicle_data)))
  {
    return false;
  }
  // weather_report
  if (!carma_v2x_msgs__msg__WeatherReport__are_equal(
      &(lhs->weather_report), &(rhs->weather_report)))
  {
    return false;
  }
  // weather_probe
  if (!carma_v2x_msgs__msg__WeatherProbe__are_equal(
      &(lhs->weather_probe), &(rhs->weather_probe)))
  {
    return false;
  }
  // obstacle
  if (!carma_v2x_msgs__msg__ObstacleDetection__are_equal(
      &(lhs->obstacle), &(rhs->obstacle)))
  {
    return false;
  }
  // status
  if (!j2735_v2x_msgs__msg__DisabledVehicle__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // speed_profile
  if (!carma_v2x_msgs__msg__GrossSpeed__Sequence__are_equal(
      &(lhs->speed_profile), &(rhs->speed_profile)))
  {
    return false;
  }
  // the_rtcm
  if (!carma_v2x_msgs__msg__RTCMPackage__are_equal(
      &(lhs->the_rtcm), &(rhs->the_rtcm)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__SupplementalVehicleExtensions__copy(
  const carma_v2x_msgs__msg__SupplementalVehicleExtensions * input,
  carma_v2x_msgs__msg__SupplementalVehicleExtensions * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // classification
  if (!j2735_v2x_msgs__msg__BasicVehicleClass__copy(
      &(input->classification), &(output->classification)))
  {
    return false;
  }
  // class_details
  if (!j2735_v2x_msgs__msg__VehicleClassification__copy(
      &(input->class_details), &(output->class_details)))
  {
    return false;
  }
  // vehicle_data
  if (!carma_v2x_msgs__msg__VehicleData__copy(
      &(input->vehicle_data), &(output->vehicle_data)))
  {
    return false;
  }
  // weather_report
  if (!carma_v2x_msgs__msg__WeatherReport__copy(
      &(input->weather_report), &(output->weather_report)))
  {
    return false;
  }
  // weather_probe
  if (!carma_v2x_msgs__msg__WeatherProbe__copy(
      &(input->weather_probe), &(output->weather_probe)))
  {
    return false;
  }
  // obstacle
  if (!carma_v2x_msgs__msg__ObstacleDetection__copy(
      &(input->obstacle), &(output->obstacle)))
  {
    return false;
  }
  // status
  if (!j2735_v2x_msgs__msg__DisabledVehicle__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // speed_profile
  if (!carma_v2x_msgs__msg__GrossSpeed__Sequence__copy(
      &(input->speed_profile), &(output->speed_profile)))
  {
    return false;
  }
  // the_rtcm
  if (!carma_v2x_msgs__msg__RTCMPackage__copy(
      &(input->the_rtcm), &(output->the_rtcm)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__SupplementalVehicleExtensions *
carma_v2x_msgs__msg__SupplementalVehicleExtensions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__SupplementalVehicleExtensions * msg = (carma_v2x_msgs__msg__SupplementalVehicleExtensions *)allocator.allocate(sizeof(carma_v2x_msgs__msg__SupplementalVehicleExtensions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__SupplementalVehicleExtensions));
  bool success = carma_v2x_msgs__msg__SupplementalVehicleExtensions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__SupplementalVehicleExtensions__destroy(carma_v2x_msgs__msg__SupplementalVehicleExtensions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence__init(carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__SupplementalVehicleExtensions * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__SupplementalVehicleExtensions *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__SupplementalVehicleExtensions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__SupplementalVehicleExtensions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence__fini(carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence * array)
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
      carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(&array->data[i]);
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

carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence *
carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence * array = (carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence__destroy(carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence__are_equal(const carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence * lhs, const carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__SupplementalVehicleExtensions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence__copy(
  const carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence * input,
  carma_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__SupplementalVehicleExtensions);
    carma_v2x_msgs__msg__SupplementalVehicleExtensions * data =
      (carma_v2x_msgs__msg__SupplementalVehicleExtensions *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__SupplementalVehicleExtensions__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__SupplementalVehicleExtensions__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__SupplementalVehicleExtensions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
