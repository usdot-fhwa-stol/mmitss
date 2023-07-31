// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_msgs:srv/ReleaseIndicatorControl.idl
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
#include "carma_msgs/srv/detail/release_indicator_control__struct.h"
#include "carma_msgs/srv/detail/release_indicator_control__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"
#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"
// end nested array functions include
bool carma_msgs__msg__light_bar_indicator__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_msgs__msg__light_bar_indicator__convert_to_py(void * raw_ros_message);
bool carma_msgs__msg__light_bar_cda_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_msgs__msg__light_bar_cda_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_msgs__srv__release_indicator_control__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("carma_msgs.srv._release_indicator_control.ReleaseIndicatorControl_Request", full_classname_dest, 73) == 0);
  }
  carma_msgs__srv__ReleaseIndicatorControl_Request * ros_message = _ros_message;
  {  // ind_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "ind_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ind_list'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!carma_msgs__msg__LightBarIndicator__Sequence__init(&(ros_message->ind_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_msgs__msg__LightBarIndicator__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_msgs__msg__LightBarIndicator * dest = ros_message->ind_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_msgs__msg__light_bar_indicator__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cda_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "cda_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cda_list'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!carma_msgs__msg__LightBarCDAType__Sequence__init(&(ros_message->cda_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_msgs__msg__LightBarCDAType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_msgs__msg__LightBarCDAType * dest = ros_message->cda_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_msgs__msg__light_bar_cda_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_msgs__srv__release_indicator_control__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ReleaseIndicatorControl_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_msgs.srv._release_indicator_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ReleaseIndicatorControl_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_msgs__srv__ReleaseIndicatorControl_Request * ros_message = (carma_msgs__srv__ReleaseIndicatorControl_Request *)raw_ros_message;
  {  // ind_list
    PyObject * field = NULL;
    size_t size = ros_message->ind_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_msgs__msg__LightBarIndicator * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ind_list.data[i]);
      PyObject * pyitem = carma_msgs__msg__light_bar_indicator__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ind_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cda_list
    PyObject * field = NULL;
    size_t size = ros_message->cda_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_msgs__msg__LightBarCDAType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cda_list.data[i]);
      PyObject * pyitem = carma_msgs__msg__light_bar_cda_type__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cda_list", field);
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
// #include "carma_msgs/srv/detail/release_indicator_control__struct.h"
// already included above
// #include "carma_msgs/srv/detail/release_indicator_control__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool carma_msgs__srv__release_indicator_control__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("carma_msgs.srv._release_indicator_control.ReleaseIndicatorControl_Response", full_classname_dest, 74) == 0);
  }
  carma_msgs__srv__ReleaseIndicatorControl_Response * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_msgs__srv__release_indicator_control__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ReleaseIndicatorControl_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_msgs.srv._release_indicator_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ReleaseIndicatorControl_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
