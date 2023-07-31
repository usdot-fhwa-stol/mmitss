// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
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
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__functions.h"

bool carma_debug_ros2_msgs__msg__regulatory_element__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_debug_ros2_msgs__msg__regulatory_element__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[93];
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
    assert(strncmp("carma_debug_ros2_msgs.msg._lanelet_id_regulatory_element_pair.LaneletIdRegulatoryElementPair", full_classname_dest, 92) == 0);
  }
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * ros_message = _ros_message;
  {  // lanelet_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanelet_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanelet_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // element
    PyObject * field = PyObject_GetAttrString(_pymsg, "element");
    if (!field) {
      return false;
    }
    if (!carma_debug_ros2_msgs__msg__regulatory_element__convert_from_py(field, &ros_message->element)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneletIdRegulatoryElementPair */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_debug_ros2_msgs.msg._lanelet_id_regulatory_element_pair");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneletIdRegulatoryElementPair");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * ros_message = (carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair *)raw_ros_message;
  {  // lanelet_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->lanelet_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanelet_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // element
    PyObject * field = NULL;
    field = carma_debug_ros2_msgs__msg__regulatory_element__convert_to_py(&ros_message->element);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "element", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
