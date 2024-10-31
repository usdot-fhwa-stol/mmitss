// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/PathHistoryPoint.idl
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
#include "j2735_v2x_msgs/msg/detail/path_history_point__struct.h"
#include "j2735_v2x_msgs/msg/detail/path_history_point__functions.h"

bool j2735_v2x_msgs__msg__offset_llb18__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__offset_llb18__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__offset_llb18__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__offset_llb18__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__vert_offset_b12__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__vert_offset_b12__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__time_offset__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__time_offset__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__speed__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__speed__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__positional_accuracy__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__positional_accuracy__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__coarse_heading__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__coarse_heading__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__path_history_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("j2735_v2x_msgs.msg._path_history_point.PathHistoryPoint", full_classname_dest, 55) == 0);
  }
  j2735_v2x_msgs__msg__PathHistoryPoint * ros_message = _ros_message;
  {  // lat_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_offset");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__offset_llb18__convert_from_py(field, &ros_message->lat_offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lon_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_offset");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__offset_llb18__convert_from_py(field, &ros_message->lon_offset)) {
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
    if (!j2735_v2x_msgs__msg__vert_offset_b12__convert_from_py(field, &ros_message->elevation_offset)) {
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
    if (!j2735_v2x_msgs__msg__time_offset__convert_from_py(field, &ros_message->time_offset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__speed__convert_from_py(field, &ros_message->speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pos_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_accuracy");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__positional_accuracy__convert_from_py(field, &ros_message->pos_accuracy)) {
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
    if (!j2735_v2x_msgs__msg__coarse_heading__convert_from_py(field, &ros_message->heading)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__path_history_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PathHistoryPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._path_history_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PathHistoryPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__PathHistoryPoint * ros_message = (j2735_v2x_msgs__msg__PathHistoryPoint *)raw_ros_message;
  {  // lat_offset
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__offset_llb18__convert_to_py(&ros_message->lat_offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_offset
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__offset_llb18__convert_to_py(&ros_message->lon_offset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevation_offset
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__vert_offset_b12__convert_to_py(&ros_message->elevation_offset);
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
  {  // time_offset
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__time_offset__convert_to_py(&ros_message->time_offset);
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
  {  // speed
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__speed__convert_to_py(&ros_message->speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_accuracy
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__positional_accuracy__convert_to_py(&ros_message->pos_accuracy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__coarse_heading__convert_to_py(&ros_message->heading);
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
