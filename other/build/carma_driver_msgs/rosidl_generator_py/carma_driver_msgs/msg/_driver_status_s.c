// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
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
#include "carma_driver_msgs/msg/detail/driver_status__struct.h"
#include "carma_driver_msgs/msg/detail/driver_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_driver_msgs__msg__driver_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("carma_driver_msgs.msg._driver_status.DriverStatus", full_classname_dest, 49) == 0);
  }
  carma_driver_msgs__msg__DriverStatus * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can
    PyObject * field = PyObject_GetAttrString(_pymsg, "can");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radar
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->radar = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gnss
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gnss = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lidar
    PyObject * field = PyObject_GetAttrString(_pymsg, "lidar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lidar = (Py_True == field);
    Py_DECREF(field);
  }
  {  // roadway_sensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "roadway_sensor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->roadway_sensor = (Py_True == field);
    Py_DECREF(field);
  }
  {  // comms
    PyObject * field = PyObject_GetAttrString(_pymsg, "comms");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->comms = (Py_True == field);
    Py_DECREF(field);
  }
  {  // controller
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->controller = (Py_True == field);
    Py_DECREF(field);
  }
  {  // camera
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->camera = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trailer_angle_sensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "trailer_angle_sensor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->trailer_angle_sensor = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lightbar
    PyObject * field = PyObject_GetAttrString(_pymsg, "lightbar");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lightbar = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_driver_msgs__msg__driver_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DriverStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_driver_msgs.msg._driver_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DriverStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_driver_msgs__msg__DriverStatus * ros_message = (carma_driver_msgs__msg__DriverStatus *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->radar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gnss ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lidar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lidar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lidar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roadway_sensor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->roadway_sensor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roadway_sensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // comms
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->comms ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "comms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->controller ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->camera ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trailer_angle_sensor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->trailer_angle_sensor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trailer_angle_sensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lightbar
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lightbar ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lightbar", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
