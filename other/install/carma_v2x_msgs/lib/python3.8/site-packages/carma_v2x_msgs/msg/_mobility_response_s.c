// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/MobilityResponse.idl
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
#include "carma_v2x_msgs/msg/detail/mobility_response__struct.h"
#include "carma_v2x_msgs/msg/detail/mobility_response__functions.h"

bool carma_v2x_msgs__msg__mobility_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__mobility_header__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__plan_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__plan_type__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__mobility_reason__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__mobility_reason__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__mobility_repeat__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__mobility_repeat__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__mobility_response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("carma_v2x_msgs.msg._mobility_response.MobilityResponse", full_classname_dest, 54) == 0);
  }
  carma_v2x_msgs__msg__MobilityResponse * ros_message = _ros_message;
  {  // m_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_header");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__mobility_header__convert_from_py(field, &ros_message->m_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // urgency
    PyObject * field = PyObject_GetAttrString(_pymsg, "urgency");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->urgency = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_accepted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // plan_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_type");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__plan_type__convert_from_py(field, &ros_message->plan_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "reason");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__mobility_reason__convert_from_py(field, &ros_message->reason)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // repeat
    PyObject * field = PyObject_GetAttrString(_pymsg, "repeat");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__mobility_repeat__convert_from_py(field, &ros_message->repeat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__mobility_response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MobilityResponse */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._mobility_response");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MobilityResponse");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__MobilityResponse * ros_message = (carma_v2x_msgs__msg__MobilityResponse *)raw_ros_message;
  {  // m_header
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__mobility_header__convert_to_py(&ros_message->m_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // urgency
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->urgency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "urgency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_type
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__plan_type__convert_to_py(&ros_message->plan_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reason
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__mobility_reason__convert_to_py(&ros_message->reason);
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
  {  // repeat
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__mobility_repeat__convert_to_py(&ros_message->repeat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "repeat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
