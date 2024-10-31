// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_perception_msgs:msg/CheckActiveGeofence.idl
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
#include "carma_perception_msgs/msg/detail/check_active_geofence__struct.h"
#include "carma_perception_msgs/msg/detail/check_active_geofence__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_perception_msgs__msg__check_active_geofence__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("carma_perception_msgs.msg._check_active_geofence.CheckActiveGeofence", full_classname_dest, 68) == 0);
  }
  carma_perception_msgs__msg__CheckActiveGeofence * ros_message = _ros_message;
  {  // is_on_active_geofence
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_on_active_geofence");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_on_active_geofence = (Py_True == field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // value
    PyObject * field = PyObject_GetAttrString(_pymsg, "value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_to_next_geofence
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_next_geofence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_next_geofence = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // minimum_gap
    PyObject * field = PyObject_GetAttrString(_pymsg, "minimum_gap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->minimum_gap = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // advisory_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "advisory_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->advisory_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_perception_msgs__msg__check_active_geofence__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CheckActiveGeofence */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_perception_msgs.msg._check_active_geofence");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CheckActiveGeofence");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_perception_msgs__msg__CheckActiveGeofence * ros_message = (carma_perception_msgs__msg__CheckActiveGeofence *)raw_ros_message;
  {  // is_on_active_geofence
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_on_active_geofence ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_on_active_geofence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reason.data,
      strlen(ros_message->reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_next_geofence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_next_geofence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_next_geofence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minimum_gap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->minimum_gap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minimum_gap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // advisory_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->advisory_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "advisory_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
