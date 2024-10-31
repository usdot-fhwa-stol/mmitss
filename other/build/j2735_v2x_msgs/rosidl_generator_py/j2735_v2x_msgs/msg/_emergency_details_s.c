// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
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
#include "j2735_v2x_msgs/msg/detail/emergency_details__struct.h"
#include "j2735_v2x_msgs/msg/detail/emergency_details__functions.h"

bool j2735_v2x_msgs__msg__siren_in_use__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__siren_in_use__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__lightbar_in_use__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__lightbar_in_use__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__multi_vehicle_response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__multi_vehicle_response__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__privileged_events__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__privileged_events__convert_to_py(void * raw_ros_message);
bool j2735_v2x_msgs__msg__response_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * j2735_v2x_msgs__msg__response_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool j2735_v2x_msgs__msg__emergency_details__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("j2735_v2x_msgs.msg._emergency_details.EmergencyDetails", full_classname_dest, 54) == 0);
  }
  j2735_v2x_msgs__msg__EmergencyDetails * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ssp_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "ssp_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ssp_index = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // siren_use
    PyObject * field = PyObject_GetAttrString(_pymsg, "siren_use");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__siren_in_use__convert_from_py(field, &ros_message->siren_use)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lights_use
    PyObject * field = PyObject_GetAttrString(_pymsg, "lights_use");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__lightbar_in_use__convert_from_py(field, &ros_message->lights_use)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // multi
    PyObject * field = PyObject_GetAttrString(_pymsg, "multi");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__multi_vehicle_response__convert_from_py(field, &ros_message->multi)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // events
    PyObject * field = PyObject_GetAttrString(_pymsg, "events");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__privileged_events__convert_from_py(field, &ros_message->events)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // response_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "response_type");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__response_type__convert_from_py(field, &ros_message->response_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * j2735_v2x_msgs__msg__emergency_details__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EmergencyDetails */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("j2735_v2x_msgs.msg._emergency_details");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EmergencyDetails");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  j2735_v2x_msgs__msg__EmergencyDetails * ros_message = (j2735_v2x_msgs__msg__EmergencyDetails *)raw_ros_message;
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
  {  // ssp_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ssp_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ssp_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // siren_use
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__siren_in_use__convert_to_py(&ros_message->siren_use);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "siren_use", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lights_use
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__lightbar_in_use__convert_to_py(&ros_message->lights_use);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lights_use", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // multi
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__multi_vehicle_response__convert_to_py(&ros_message->multi);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "multi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // events
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__privileged_events__convert_to_py(&ros_message->events);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "events", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response_type
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__response_type__convert_to_py(&ros_message->response_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "response_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
