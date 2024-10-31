// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
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
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.h"
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__connection_maneuver_assist__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
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
    assert(strncmp("j2735_v2x_msgs.msg._connection_maneuver_assist.ConnectionManeuverAssist", full_classname_dest, 71) == 0);
  }
  j2735_v2x_msgs__msg__ConnectionManeuverAssist * ros_message = _ros_message;
  {  // connection_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "connection_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->connection_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // queue_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "queue_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->queue_length = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // queue_length_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "queue_length_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->queue_length_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // available_storage_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "available_storage_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->available_storage_length = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // available_storage_length_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "available_storage_length_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->available_storage_length_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wait_on_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "wait_on_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wait_on_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wait_on_stop_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "wait_on_stop_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wait_on_stop_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ped_bicycle_detect
    PyObject * field = PyObject_GetAttrString(_pymsg, "ped_bicycle_detect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ped_bicycle_detect = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ped_bicycle_detect_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "ped_bicycle_detect_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ped_bicycle_detect_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__connection_maneuver_assist__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConnectionManeuverAssist */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._connection_maneuver_assist");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConnectionManeuverAssist");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__ConnectionManeuverAssist * ros_message = (j2735_v2x_msgs__msg__ConnectionManeuverAssist *)raw_ros_message;
  {  // connection_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->connection_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connection_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // queue_length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->queue_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "queue_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // queue_length_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->queue_length_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "queue_length_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // available_storage_length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->available_storage_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "available_storage_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // available_storage_length_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->available_storage_length_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "available_storage_length_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wait_on_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wait_on_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wait_on_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wait_on_stop_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wait_on_stop_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wait_on_stop_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ped_bicycle_detect
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ped_bicycle_detect ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ped_bicycle_detect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ped_bicycle_detect_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ped_bicycle_detect_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ped_bicycle_detect_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
