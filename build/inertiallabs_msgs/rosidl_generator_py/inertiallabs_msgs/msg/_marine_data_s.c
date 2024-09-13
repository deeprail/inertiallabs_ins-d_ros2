// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from inertiallabs_msgs:msg/MarineData.idl
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
#include "inertiallabs_msgs/msg/detail/marine_data__struct.h"
#include "inertiallabs_msgs/msg/detail/marine_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool inertiallabs_msgs__msg__marine_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("inertiallabs_msgs.msg._marine_data.MarineData", full_classname_dest, 45) == 0);
  }
  inertiallabs_msgs__msg__MarineData * ros_message = _ros_message;
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
  {  // heave
    PyObject * field = PyObject_GetAttrString(_pymsg, "heave");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heave = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // surge
    PyObject * field = PyObject_GetAttrString(_pymsg, "surge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->surge = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sway
    PyObject * field = PyObject_GetAttrString(_pymsg, "sway");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sway = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heave_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "heave_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heave_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // surge_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "surge_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->surge_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sway_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "sway_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sway_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // significant_wave_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "significant_wave_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->significant_wave_height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * inertiallabs_msgs__msg__marine_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MarineData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("inertiallabs_msgs.msg._marine_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MarineData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  inertiallabs_msgs__msg__MarineData * ros_message = (inertiallabs_msgs__msg__MarineData *)raw_ros_message;
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
  {  // heave
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heave);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heave", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // surge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->surge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "surge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sway
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sway);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sway", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heave_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heave_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heave_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // surge_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->surge_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "surge_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sway_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sway_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sway_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // significant_wave_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->significant_wave_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "significant_wave_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
