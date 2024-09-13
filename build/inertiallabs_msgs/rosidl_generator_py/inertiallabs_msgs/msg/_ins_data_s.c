// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from inertiallabs_msgs:msg/InsData.idl
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
#include "inertiallabs_msgs/msg/detail/ins_data__struct.h"
#include "inertiallabs_msgs/msg/detail/ins_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__quaternion__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool inertiallabs_msgs__msg__ins_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("inertiallabs_msgs.msg._ins_data.InsData", full_classname_dest, 39) == 0);
  }
  inertiallabs_msgs__msg__InsData * ros_message = _ros_message;
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
  {  // gps_ins_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_ins_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_ins_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_imu_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_imu_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_imu_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_msow
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_msow");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int32__convert_from_py(field, &ros_message->gps_msow)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // llh
    PyObject * field = PyObject_GetAttrString(_pymsg, "llh");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->llh)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ypr
    PyObject * field = PyObject_GetAttrString(_pymsg, "ypr");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->ypr)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // oriquat
    PyObject * field = PyObject_GetAttrString(_pymsg, "oriquat");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__quaternion__convert_from_py(field, &ros_message->oriquat)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vel_enu
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_enu");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->vel_enu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // solution_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_status");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int8__convert_from_py(field, &ros_message->solution_status)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pos_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_std");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->pos_std)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heading_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // usw
    PyObject * field = PyObject_GetAttrString(_pymsg, "usw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->usw = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * inertiallabs_msgs__msg__ins_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InsData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("inertiallabs_msgs.msg._ins_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InsData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  inertiallabs_msgs__msg__InsData * ros_message = (inertiallabs_msgs__msg__InsData *)raw_ros_message;
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
  {  // gps_ins_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_ins_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_ins_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_imu_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_imu_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_imu_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_msow
    PyObject * field = NULL;
    field = std_msgs__msg__u_int32__convert_to_py(&ros_message->gps_msow);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_msow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // llh
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->llh);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "llh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ypr
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->ypr);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ypr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oriquat
    PyObject * field = NULL;
    field = geometry_msgs__msg__quaternion__convert_to_py(&ros_message->oriquat);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "oriquat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_enu
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->vel_enu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_enu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_status
    PyObject * field = NULL;
    field = std_msgs__msg__int8__convert_to_py(&ros_message->solution_status);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_std
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->pos_std);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usw
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->usw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
