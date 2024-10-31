// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from carma_v2x_msgs:msg/WeatherReport.idl
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
#include "carma_v2x_msgs/msg/detail/weather_report__struct.h"
#include "carma_v2x_msgs/msg/detail/weather_report__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__ntcip_ess_precip_yes_no__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__ntcip_ess_precip_yes_no__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__ntcip_ess_precip_rate__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__ntcip_ess_precip_rate__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__ntcip_ess_precip_situation__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__ntcip_ess_precip_situation__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__ntcip_ess_solar_radiation__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__ntcip_ess_solar_radiation__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool j2735_v2x_msgs__msg__ntcip_ess_mobile_friction__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * j2735_v2x_msgs__msg__ntcip_ess_mobile_friction__convert_to_py(void * raw_ros_message);
bool carma_v2x_msgs__msg__coefficient_of_friction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * carma_v2x_msgs__msg__coefficient_of_friction__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool carma_v2x_msgs__msg__weather_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("carma_v2x_msgs.msg._weather_report.WeatherReport", full_classname_dest, 48) == 0);
  }
  carma_v2x_msgs__msg__WeatherReport * ros_message = _ros_message;
  {  // presence_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "presence_vector");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->presence_vector = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_raining
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_raining");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__ntcip_ess_precip_yes_no__convert_from_py(field, &ros_message->is_raining)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rain_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "rain_rate");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__ntcip_ess_precip_rate__convert_from_py(field, &ros_message->rain_rate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // precip_situation
    PyObject * field = PyObject_GetAttrString(_pymsg, "precip_situation");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__ntcip_ess_precip_situation__convert_from_py(field, &ros_message->precip_situation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // solar_radiation
    PyObject * field = PyObject_GetAttrString(_pymsg, "solar_radiation");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__ntcip_ess_solar_radiation__convert_from_py(field, &ros_message->solar_radiation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // friction
    PyObject * field = PyObject_GetAttrString(_pymsg, "friction");
    if (!field) {
      return false;
    }
    if (!j2735_v2x_msgs__msg__ntcip_ess_mobile_friction__convert_from_py(field, &ros_message->friction)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // road_friction
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_friction");
    if (!field) {
      return false;
    }
    if (!carma_v2x_msgs__msg__coefficient_of_friction__convert_from_py(field, &ros_message->road_friction)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * carma_v2x_msgs__msg__weather_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WeatherReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("carma_v2x_msgs.msg._weather_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WeatherReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  carma_v2x_msgs__msg__WeatherReport * ros_message = (carma_v2x_msgs__msg__WeatherReport *)raw_ros_message;
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
  {  // is_raining
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__ntcip_ess_precip_yes_no__convert_to_py(&ros_message->is_raining);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_raining", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rain_rate
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__ntcip_ess_precip_rate__convert_to_py(&ros_message->rain_rate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rain_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // precip_situation
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__ntcip_ess_precip_situation__convert_to_py(&ros_message->precip_situation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "precip_situation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solar_radiation
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__ntcip_ess_solar_radiation__convert_to_py(&ros_message->solar_radiation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "solar_radiation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // friction
    PyObject * field = NULL;
    field = j2735_v2x_msgs__msg__ntcip_ess_mobile_friction__convert_to_py(&ros_message->friction);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "friction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_friction
    PyObject * field = NULL;
    field = carma_v2x_msgs__msg__coefficient_of_friction__convert_to_py(&ros_message->road_friction);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_friction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
