// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
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
#include "carma_driver_msgs/msg/detail/robot_enabled__struct.h"
#include "carma_driver_msgs/msg/detail/robot_enabled__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_driver_msgs__msg__robot_enabled__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("carma_driver_msgs.msg._robot_enabled.RobotEnabled", full_classname_dest, 49) == 0);
  }
  carma_driver_msgs__msg__RobotEnabled * ros_message = _ros_message;
  {  // robot_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->robot_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // robot_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->robot_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // torque_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "torque_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->torque_validity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_decel
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_decel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_decel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_decel_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_decel_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_decel_validity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // throttle_effort
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_effort");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_effort = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_effort_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_effort_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->throttle_effort_validity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // braking_effort
    PyObject * field = PyObject_GetAttrString(_pymsg, "braking_effort");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->braking_effort = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // braking_effort_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "braking_effort_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->braking_effort_validity = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_driver_msgs__msg__robot_enabled__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotEnabled */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_driver_msgs.msg._robot_enabled");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotEnabled");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_driver_msgs__msg__RobotEnabled * ros_message = (carma_driver_msgs__msg__RobotEnabled *)raw_ros_message;
  {  // robot_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->robot_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->robot_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torque_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->torque_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torque_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_decel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_decel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_decel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_decel_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_decel_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_decel_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_effort
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_effort);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_effort", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_effort_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->throttle_effort_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_effort_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // braking_effort
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->braking_effort);
    {
      int rc = PyObject_SetAttrString(_pymessage, "braking_effort", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // braking_effort_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->braking_effort_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "braking_effort_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
