// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
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
#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__struct.h"
#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool carma_msgs__msg__light_bar_indicator__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * carma_msgs__msg__light_bar_indicator__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool carma_msgs__msg__light_bar_cda_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * carma_msgs__msg__light_bar_cda_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_driver_msgs__srv__set_light_bar_indicator__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
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
    assert(strncmp("carma_driver_msgs.srv._set_light_bar_indicator.SetLightBarIndicator_Request", full_classname_dest, 75) == 0);
  }
  carma_driver_msgs__srv__SetLightBarIndicator_Request * ros_message = _ros_message;
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // requester_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "requester_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->requester_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // indicator
    PyObject * field = PyObject_GetAttrString(_pymsg, "indicator");
    if (!field) {
      return false;
    }
    if (!carma_msgs__msg__light_bar_indicator__convert_from_py(field, &ros_message->indicator)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cda_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "cda_type");
    if (!field) {
      return false;
    }
    if (!carma_msgs__msg__light_bar_cda_type__convert_from_py(field, &ros_message->cda_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_driver_msgs__srv__set_light_bar_indicator__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetLightBarIndicator_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_driver_msgs.srv._set_light_bar_indicator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetLightBarIndicator_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_driver_msgs__srv__SetLightBarIndicator_Request * ros_message = (carma_driver_msgs__srv__SetLightBarIndicator_Request *)raw_ros_message;
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
  {  // requester_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->requester_name.data,
      strlen(ros_message->requester_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "requester_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // indicator
    PyObject * field = NULL;
    field = carma_msgs__msg__light_bar_indicator__convert_to_py(&ros_message->indicator);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "indicator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cda_type
    PyObject * field = NULL;
    field = carma_msgs__msg__light_bar_cda_type__convert_to_py(&ros_message->cda_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cda_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_light_bar_indicator__struct.h"
// already included above
// #include "carma_driver_msgs/srv/detail/set_light_bar_indicator__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_driver_msgs__srv__set_light_bar_indicator__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("carma_driver_msgs.srv._set_light_bar_indicator.SetLightBarIndicator_Response", full_classname_dest, 76) == 0);
  }
  carma_driver_msgs__srv__SetLightBarIndicator_Response * ros_message = _ros_message;
  {  // status_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_code = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_driver_msgs__srv__set_light_bar_indicator__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetLightBarIndicator_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_driver_msgs.srv._set_light_bar_indicator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetLightBarIndicator_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_driver_msgs__srv__SetLightBarIndicator_Response * ros_message = (carma_driver_msgs__srv__SetLightBarIndicator_Response *)raw_ros_message;
  {  // status_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
