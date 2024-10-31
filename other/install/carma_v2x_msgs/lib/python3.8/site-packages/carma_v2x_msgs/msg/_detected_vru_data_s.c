// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/DetectedVRUData.idl
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
#include "carma_v2x_msgs/msg/detail/detected_vru_data__struct.h"
#include "carma_v2x_msgs/msg/detail/detected_vru_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__personal_device_user_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__personal_device_user_type__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__propelled_information__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__propelled_information__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__attachment__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__attachment__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__attachment_radius__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__attachment_radius__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__detected_vru_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("carma_v2x_msgs.msg._detected_vru_data.DetectedVRUData", full_classname_dest, 53) == 0);
  }
  carma_v2x_msgs__msg__DetectedVRUData * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // basic_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "basic_type");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__personal_device_user_type__convert_from_py(field, &ros_message->basic_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // propulsion
    PyObject * field = PyObject_GetAttrString(_pymsg, "propulsion");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__propelled_information__convert_from_py(field, &ros_message->propulsion)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // attachment
    PyObject * field = PyObject_GetAttrString(_pymsg, "attachment");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__attachment__convert_from_py(field, &ros_message->attachment)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "radius");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__attachment_radius__convert_from_py(field, &ros_message->radius)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__detected_vru_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectedVRUData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._detected_vru_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectedVRUData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__DetectedVRUData * ros_message = (carma_v2x_msgs__msg__DetectedVRUData *)raw_ros_message;
  {  // presence_vector
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->presence_vector);
    {
      int rc = PyObject_SetAttrString(_pymessage, "presence_vector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // basic_type
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__personal_device_user_type__convert_to_py(&ros_message->basic_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "basic_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // propulsion
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__propelled_information__convert_to_py(&ros_message->propulsion);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "propulsion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attachment
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__attachment__convert_to_py(&ros_message->attachment);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "attachment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radius
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__attachment_radius__convert_to_py(&ros_message->radius);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
