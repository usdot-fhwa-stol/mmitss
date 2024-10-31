// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/TrafficControlMessageV01.idl
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
#include "carma_v2x_msgs/msg/detail/traffic_control_message_v01__struct.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_message_v01__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__id64b__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__id64b__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__id128b__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__id128b__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__traffic_control_package__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__traffic_control_package__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__traffic_control_params__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__traffic_control_params__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__traffic_control_geometry__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__traffic_control_geometry__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__traffic_control_message_v01__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("carma_v2x_msgs.msg._traffic_control_message_v01.TrafficControlMessageV01", full_classname_dest, 72) == 0);
  }
  carma_v2x_msgs__msg__TrafficControlMessageV01 * ros_message = _ros_message;
  {  // reqid
    PyObject * field = PyObject_GetAttrString(_pymsg, "reqid");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__id64b__convert_from_py(field, &ros_message->reqid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reqseq
    PyObject * field = PyObject_GetAttrString(_pymsg, "reqseq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reqseq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // msgtot
    PyObject * field = PyObject_GetAttrString(_pymsg, "msgtot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msgtot = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // msgnum
    PyObject * field = PyObject_GetAttrString(_pymsg, "msgnum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msgnum = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__id128b__convert_from_py(field, &ros_message->id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // updated
    PyObject * field = PyObject_GetAttrString(_pymsg, "updated");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->updated)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // package
    PyObject * field = PyObject_GetAttrString(_pymsg, "package");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__traffic_control_package__convert_from_py(field, &ros_message->package)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // package_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "package_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->package_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // params
    PyObject * field = PyObject_GetAttrString(_pymsg, "params");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__traffic_control_params__convert_from_py(field, &ros_message->params)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "params_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->params_exists = (Py_True == field);
    Py_DECREF(field);
  }
  {  // geometry
    PyObject * field = PyObject_GetAttrString(_pymsg, "geometry");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__traffic_control_geometry__convert_from_py(field, &ros_message->geometry)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // geometry_exists
    PyObject * field = PyObject_GetAttrString(_pymsg, "geometry_exists");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->geometry_exists = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__traffic_control_message_v01__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficControlMessageV01 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._traffic_control_message_v01");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficControlMessageV01");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__TrafficControlMessageV01 * ros_message = (carma_v2x_msgs__msg__TrafficControlMessageV01 *)raw_ros_message;
  {  // reqid
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__id64b__convert_to_py(&ros_message->reqid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reqid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reqseq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reqseq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reqseq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msgtot
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msgtot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msgtot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msgnum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msgnum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msgnum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__id128b__convert_to_py(&ros_message->id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // updated
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->updated);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "updated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // package
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__traffic_control_package__convert_to_py(&ros_message->package);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "package", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // package_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->package_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "package_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__traffic_control_params__convert_to_py(&ros_message->params);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->params_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "params_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // geometry
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__traffic_control_geometry__convert_to_py(&ros_message->geometry);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "geometry", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // geometry_exists
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->geometry_exists ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "geometry_exists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
