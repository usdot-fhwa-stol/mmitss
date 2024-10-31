// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_debug_ros2_msgs:msg/MapUpdateReadable.idl
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
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__struct.h"
#include "carma_debug_ros2_msgs/msg/detail/map_update_readable__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "carma_debug_ros2_msgs/msg/detail/lanelet_id_regulatory_element_pair__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_to_py(void * raw_ros_message);
bool carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_debug_ros2_msgs__msg__map_update_readable__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("carma_debug_ros2_msgs.msg._map_update_readable.MapUpdateReadable", full_classname_dest, 64) == 0);
  }
  carma_debug_ros2_msgs__msg__MapUpdateReadable * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // format_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "format_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->format_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // map_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->map_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // route_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "route_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->route_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // route_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "route_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->route_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // invalidates_route
    PyObject * field = PyObject_GetAttrString(_pymsg, "invalidates_route");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->invalidates_route = (Py_True == field);
    Py_DECREF(field);
  }
  {  // traffic_control_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_control_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->traffic_control_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // update_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "update_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'update_list'");
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
    if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init(&(ros_message->update_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * dest = ros_message->update_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // remove_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "remove_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'remove_list'");
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
    if (!carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence__init(&(ros_message->remove_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * dest = ros_message->remove_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * carma_debug_ros2_msgs__msg__map_update_readable__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MapUpdateReadable */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_debug_ros2_msgs.msg._map_update_readable");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapUpdateReadable");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_debug_ros2_msgs__msg__MapUpdateReadable * ros_message = (carma_debug_ros2_msgs__msg__MapUpdateReadable *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // format_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->format_version.data,
      strlen(ros_message->format_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "format_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->map_version.data,
      strlen(ros_message->map_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // route_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->route_id.data,
      strlen(ros_message->route_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "route_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // route_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->route_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "route_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // invalidates_route
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->invalidates_route ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "invalidates_route", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_control_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->traffic_control_id.data,
      strlen(ros_message->traffic_control_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_control_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // update_list
    PyObject * field = NULL;
    size_t size = ros_message->update_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->update_list.data[i]);
      PyObject * pyitem = carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "update_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remove_list
    PyObject * field = NULL;
    size_t size = ros_message->remove_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    carma_debug_ros2_msgs__msg__LaneletIdRegulatoryElementPair * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->remove_list.data[i]);
      PyObject * pyitem = carma_debug_ros2_msgs__msg__lanelet_id_regulatory_element_pair__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "remove_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
