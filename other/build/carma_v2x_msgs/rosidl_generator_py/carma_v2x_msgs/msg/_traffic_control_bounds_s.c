// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/TrafficControlBounds.idl
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
#include "carma_v2x_msgs/msg/detail/traffic_control_bounds__struct.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_bounds__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "carma_v2x_msgs/msg/detail/offset_point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__offset_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__offset_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__traffic_control_bounds__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("carma_v2x_msgs.msg._traffic_control_bounds.TrafficControlBounds", full_classname_dest, 63) == 0);
  }
  carma_v2x_msgs__msg__TrafficControlBounds * ros_message = _ros_message;
  {  // oldest
    PyObject * field = PyObject_GetAttrString(_pymsg, "oldest");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->oldest)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reflon
    PyObject * field = PyObject_GetAttrString(_pymsg, "reflon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reflon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reflat
    PyObject * field = PyObject_GetAttrString(_pymsg, "reflat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reflat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offsets
    PyObject * field = PyObject_GetAttrString(_pymsg, "offsets");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'offsets'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    carma_v2x_msgs__msg__OffsetPoint * dest = ros_message->offsets;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_v2x_msgs__msg__offset_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__traffic_control_bounds__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficControlBounds */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._traffic_control_bounds");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficControlBounds");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__TrafficControlBounds * ros_message = (carma_v2x_msgs__msg__TrafficControlBounds *)raw_ros_message;
  {  // oldest
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->oldest);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "oldest", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reflon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reflon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reflon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reflat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reflat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reflat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offsets
    PyObject * field = NULL;
    size_t size = 3;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_v2x_msgs__msg__OffsetPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->offsets[i]);
      PyObject * pyitem = carma_v2x_msgs__msg__offset_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "offsets", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
