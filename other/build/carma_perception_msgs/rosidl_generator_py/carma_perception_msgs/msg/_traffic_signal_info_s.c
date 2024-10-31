// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_perception_msgs:msg/TrafficSignalInfo.idl
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
#include "carma_perception_msgs/msg/detail/traffic_signal_info__struct.h"
#include "carma_perception_msgs/msg/detail/traffic_signal_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_perception_msgs__msg__traffic_signal_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("carma_perception_msgs.msg._traffic_signal_info.TrafficSignalInfo", full_classname_dest, 64) == 0);
  }
  carma_perception_msgs__msg__TrafficSignalInfo * ros_message = _ros_message;
  {  // intersection_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->intersection_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remaining_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remaining_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remaining_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_perception_msgs__msg__traffic_signal_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficSignalInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_perception_msgs.msg._traffic_signal_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficSignalInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_perception_msgs__msg__TrafficSignalInfo * ros_message = (carma_perception_msgs__msg__TrafficSignalInfo *)raw_ros_message;
  {  // intersection_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->intersection_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersection_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remaining_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
