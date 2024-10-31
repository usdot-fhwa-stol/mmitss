// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__struct.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__functions.h"

bool j2735_v2x_msgs__msg__is_dolly__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__is_dolly__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vehicle_width__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vehicle_width__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vehicle_length__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vehicle_length__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vehicle_height__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vehicle_height__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__trailer_mass__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__trailer_mass__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__bumper_heights__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__bumper_heights__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vehicle_height__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vehicle_height__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__pivot_point_description__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__pivot_point_description__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__pivot_point_description__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__pivot_point_description__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__offset_b12__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__offset_b12__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__node_xy24b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__node_xy24b__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vert_offset_b07__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vert_offset_b07__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__trailer_history_point_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__trailer_history_point_list__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__trailer_unit_description__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("j2735_v2x_msgs.msg._trailer_unit_description.TrailerUnitDescription", full_classname_dest, 67) == 0);
  }
  j2735_v2x_msgs__msg__TrailerUnitDescription * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_dolly
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_dolly");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__is_dolly__convert_from_py(field, &ros_message->is_dolly)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vehicle_width__convert_from_py(field, &ros_message->width)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vehicle_length__convert_from_py(field, &ros_message->length)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vehicle_height__convert_from_py(field, &ros_message->height)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mass");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__trailer_mass__convert_from_py(field, &ros_message->mass)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bumper_heights
    PyObject * field = PyObject_GetAttrString(_pymsg, "bumper_heights");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__bumper_heights__convert_from_py(field, &ros_message->bumper_heights)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // center_of_gravity
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_of_gravity");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vehicle_height__convert_from_py(field, &ros_message->center_of_gravity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // front_pivot
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_pivot");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__pivot_point_description__convert_from_py(field, &ros_message->front_pivot)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rear_pivot
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_pivot");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__pivot_point_description__convert_from_py(field, &ros_message->rear_pivot)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rear_wheel_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_wheel_offset");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__offset_b12__convert_from_py(field, &ros_message->rear_wheel_offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_offset");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__node_xy24b__convert_from_py(field, &ros_message->position_offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // elevation_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevation_offset");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__vert_offset_b07__convert_from_py(field, &ros_message->elevation_offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // crumb_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "crumb_data");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__trailer_history_point_list__convert_from_py(field, &ros_message->crumb_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__trailer_unit_description__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrailerUnitDescription */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._trailer_unit_description");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrailerUnitDescription");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__TrailerUnitDescription * ros_message = (j2735_v2x_msgs__msg__TrailerUnitDescription *)raw_ros_message;
  {  // presence_vector
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->presence_vector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "presence_vector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_dolly
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__is_dolly__convert_to_py(&ros_message->is_dolly);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_dolly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vehicle_width__convert_to_py(&ros_message->width);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vehicle_length__convert_to_py(&ros_message->length);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vehicle_height__convert_to_py(&ros_message->height);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mass
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__trailer_mass__convert_to_py(&ros_message->mass);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bumper_heights
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__bumper_heights__convert_to_py(&ros_message->bumper_heights);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bumper_heights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_of_gravity
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vehicle_height__convert_to_py(&ros_message->center_of_gravity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_of_gravity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_pivot
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__pivot_point_description__convert_to_py(&ros_message->front_pivot);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_pivot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_pivot
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__pivot_point_description__convert_to_py(&ros_message->rear_pivot);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_pivot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_wheel_offset
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__offset_b12__convert_to_py(&ros_message->rear_wheel_offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_wheel_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_offset
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__node_xy24b__convert_to_py(&ros_message->position_offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation_offset
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vert_offset_b07__convert_to_py(&ros_message->elevation_offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevation_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crumb_data
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__trailer_history_point_list__convert_to_py(&ros_message->crumb_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "crumb_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
