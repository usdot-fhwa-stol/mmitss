// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
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
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__struct.h"
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_msgs__msg__light_bar_indicator_controllers__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("carma_msgs.msg._light_bar_indicator_controllers.LightBarIndicatorControllers", full_classname_dest, 76) == 0);
  }
  carma_msgs__msg__LightBarIndicatorControllers * ros_message = _ros_message;
  {  // green_solid_owner
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_solid_owner");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->green_solid_owner, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // green_flash_owner
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_flash_owner");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->green_flash_owner, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // yellow_sides_owner
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_sides_owner");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->yellow_sides_owner, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // yellow_dim_owner
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_dim_owner");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->yellow_dim_owner, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // yellow_flash_owner
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_flash_owner");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->yellow_flash_owner, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // yellow_arrow_left_owner
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_arrow_left_owner");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->yellow_arrow_left_owner, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // yellow_arrow_right_owner
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_arrow_right_owner");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->yellow_arrow_right_owner, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // yellow_arrow_out_owner
    PyObject * field = PyObject_GetAttrString(_pymsg, "yellow_arrow_out_owner");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->yellow_arrow_out_owner, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_msgs__msg__light_bar_indicator_controllers__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LightBarIndicatorControllers */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_msgs.msg._light_bar_indicator_controllers");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LightBarIndicatorControllers");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_msgs__msg__LightBarIndicatorControllers * ros_message = (carma_msgs__msg__LightBarIndicatorControllers *)raw_ros_message;
  {  // green_solid_owner
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->green_solid_owner.data,
      strlen(ros_message->green_solid_owner.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_solid_owner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_flash_owner
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->green_flash_owner.data,
      strlen(ros_message->green_flash_owner.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_flash_owner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_sides_owner
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->yellow_sides_owner.data,
      strlen(ros_message->yellow_sides_owner.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_sides_owner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_dim_owner
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->yellow_dim_owner.data,
      strlen(ros_message->yellow_dim_owner.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_dim_owner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_flash_owner
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->yellow_flash_owner.data,
      strlen(ros_message->yellow_flash_owner.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_flash_owner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_arrow_left_owner
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->yellow_arrow_left_owner.data,
      strlen(ros_message->yellow_arrow_left_owner.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_arrow_left_owner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_arrow_right_owner
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->yellow_arrow_right_owner.data,
      strlen(ros_message->yellow_arrow_right_owner.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_arrow_right_owner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yellow_arrow_out_owner
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->yellow_arrow_out_owner.data,
      strlen(ros_message->yellow_arrow_out_owner.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yellow_arrow_out_owner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
