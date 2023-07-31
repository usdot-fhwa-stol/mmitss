// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/TrailerHistoryPoint.idl
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
#include "carma_v2x_msgs/msg/detail/trailer_history_point__struct.h"
#include "carma_v2x_msgs/msg/detail/trailer_history_point__functions.h"

bool carma_v2x_msgs__msg__angle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__angle__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__time_offset__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__time_offset__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__node_xy24b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__node_xy24b__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__vert_offset_b07__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__vert_offset_b07__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__coarse_heading__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__coarse_heading__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__trailer_history_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("carma_v2x_msgs.msg._trailer_history_point.TrailerHistoryPoint", full_classname_dest, 61) == 0);
  }
  carma_v2x_msgs__msg__TrailerHistoryPoint * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pivot_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "pivot_angle");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__angle__convert_from_py(field, &ros_message->pivot_angle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_offset");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__time_offset__convert_from_py(field, &ros_message->time_offset)) {
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
    if (!carma_v2x_msgs__msg__node_xy24b__convert_from_py(field, &ros_message->position_offset)) {
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
    if (!carma_v2x_msgs__msg__vert_offset_b07__convert_from_py(field, &ros_message->elevation_offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__coarse_heading__convert_from_py(field, &ros_message->heading)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__trailer_history_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrailerHistoryPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._trailer_history_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrailerHistoryPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__TrailerHistoryPoint * ros_message = (carma_v2x_msgs__msg__TrailerHistoryPoint *)raw_ros_message;
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
  {  // pivot_angle
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__angle__convert_to_py(&ros_message->pivot_angle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pivot_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_offset
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__time_offset__convert_to_py(&ros_message->time_offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_offset
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__node_xy24b__convert_to_py(&ros_message->position_offset);
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
    field = carma_v2x_msgs__msg__vert_offset_b07__convert_to_py(&ros_message->elevation_offset);
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
  {  // heading
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__coarse_heading__convert_to_py(&ros_message->heading);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
