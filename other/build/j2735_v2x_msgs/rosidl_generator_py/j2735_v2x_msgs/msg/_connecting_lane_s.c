// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/ConnectingLane.idl
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
#include "j2735_v2x_msgs/msg/detail/connecting_lane__struct.h"
#include "j2735_v2x_msgs/msg/detail/connecting_lane__functions.h"

bool j2735_v2x_msgs__msg__allowed_maneuvers__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__allowed_maneuvers__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__connecting_lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("j2735_v2x_msgs.msg._connecting_lane.ConnectingLane", full_classname_dest, 50) == 0);
  }
  j2735_v2x_msgs__msg__ConnectingLane * ros_message = _ros_message;
  {  // lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // maneuver
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__allowed_maneuvers__convert_from_py(field, &ros_message->maneuver)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // maneuver_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->maneuver_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__connecting_lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConnectingLane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._connecting_lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConnectingLane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__ConnectingLane * ros_message = (j2735_v2x_msgs__msg__ConnectingLane *)raw_ros_message;
  {  // lane
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuver
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__allowed_maneuvers__convert_to_py(&ros_message->maneuver);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuver_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->maneuver_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuver_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
