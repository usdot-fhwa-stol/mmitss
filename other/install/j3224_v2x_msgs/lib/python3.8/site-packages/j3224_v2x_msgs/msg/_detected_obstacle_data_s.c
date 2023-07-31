// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j3224_v2x_msgs:msg/DetectedObstacleData.idl
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
#include "j3224_v2x_msgs/msg/detail/detected_obstacle_data__struct.h"
#include "j3224_v2x_msgs/msg/detail/detected_obstacle_data__functions.h"

bool j3224_v2x_msgs__msg__obstacle_size__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j3224_v2x_msgs__msg__obstacle_size__convert_to_py(void * raw_ros_message);
bool j3224_v2x_msgs__msg__obstacle_size_confidence__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j3224_v2x_msgs__msg__obstacle_size_confidence__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j3224_v2x_msgs__msg__detected_obstacle_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("j3224_v2x_msgs.msg._detected_obstacle_data.DetectedObstacleData", full_classname_dest, 63) == 0);
  }
  j3224_v2x_msgs__msg__DetectedObstacleData * ros_message = _ros_message;
  {  // obst_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "obst_size");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__obstacle_size__convert_from_py(field, &ros_message->obst_size)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obst_size_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "obst_size_confidence");
    if (!field) {
      return false;
    }
    if (!j3224_v2x_msgs__msg__obstacle_size_confidence__convert_from_py(field, &ros_message->obst_size_confidence)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j3224_v2x_msgs__msg__detected_obstacle_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectedObstacleData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j3224_v2x_msgs.msg._detected_obstacle_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectedObstacleData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j3224_v2x_msgs__msg__DetectedObstacleData * ros_message = (j3224_v2x_msgs__msg__DetectedObstacleData *)raw_ros_message;
  {  // obst_size
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__obstacle_size__convert_to_py(&ros_message->obst_size);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obst_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obst_size_confidence
    PyObject * field = NULL;
    field = j3224_v2x_msgs__msg__obstacle_size_confidence__convert_to_py(&ros_message->obst_size_confidence);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obst_size_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
