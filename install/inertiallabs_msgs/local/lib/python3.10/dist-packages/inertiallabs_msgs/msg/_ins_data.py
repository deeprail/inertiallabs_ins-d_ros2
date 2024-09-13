# generated from rosidl_generator_py/resource/_idl.py.em
# with input from inertiallabs_msgs:msg/InsData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InsData(type):
    """Metaclass of message 'InsData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('inertiallabs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'inertiallabs_msgs.msg.InsData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ins_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ins_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ins_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ins_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ins_data

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from std_msgs.msg import Int8
            if Int8.__class__._TYPE_SUPPORT is None:
                Int8.__class__.__import_type_support__()

            from std_msgs.msg import UInt32
            if UInt32.__class__._TYPE_SUPPORT is None:
                UInt32.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InsData(metaclass=Metaclass_InsData):
    """Message class 'InsData'."""

    __slots__ = [
        '_header',
        '_gps_ins_time',
        '_gps_imu_time',
        '_gps_msow',
        '_llh',
        '_ypr',
        '_oriquat',
        '_vel_enu',
        '_solution_status',
        '_pos_std',
        '_heading_std',
        '_usw',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'gps_ins_time': 'double',
        'gps_imu_time': 'double',
        'gps_msow': 'std_msgs/UInt32',
        'llh': 'geometry_msgs/Vector3',
        'ypr': 'geometry_msgs/Vector3',
        'oriquat': 'geometry_msgs/Quaternion',
        'vel_enu': 'geometry_msgs/Vector3',
        'solution_status': 'std_msgs/Int8',
        'pos_std': 'geometry_msgs/Vector3',
        'heading_std': 'float',
        'usw': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.gps_ins_time = kwargs.get('gps_ins_time', float())
        self.gps_imu_time = kwargs.get('gps_imu_time', float())
        from std_msgs.msg import UInt32
        self.gps_msow = kwargs.get('gps_msow', UInt32())
        from geometry_msgs.msg import Vector3
        self.llh = kwargs.get('llh', Vector3())
        from geometry_msgs.msg import Vector3
        self.ypr = kwargs.get('ypr', Vector3())
        from geometry_msgs.msg import Quaternion
        self.oriquat = kwargs.get('oriquat', Quaternion())
        from geometry_msgs.msg import Vector3
        self.vel_enu = kwargs.get('vel_enu', Vector3())
        from std_msgs.msg import Int8
        self.solution_status = kwargs.get('solution_status', Int8())
        from geometry_msgs.msg import Vector3
        self.pos_std = kwargs.get('pos_std', Vector3())
        self.heading_std = kwargs.get('heading_std', float())
        self.usw = kwargs.get('usw', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.gps_ins_time != other.gps_ins_time:
            return False
        if self.gps_imu_time != other.gps_imu_time:
            return False
        if self.gps_msow != other.gps_msow:
            return False
        if self.llh != other.llh:
            return False
        if self.ypr != other.ypr:
            return False
        if self.oriquat != other.oriquat:
            return False
        if self.vel_enu != other.vel_enu:
            return False
        if self.solution_status != other.solution_status:
            return False
        if self.pos_std != other.pos_std:
            return False
        if self.heading_std != other.heading_std:
            return False
        if self.usw != other.usw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def gps_ins_time(self):
        """Message field 'gps_ins_time'."""
        return self._gps_ins_time

    @gps_ins_time.setter
    def gps_ins_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_ins_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gps_ins_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gps_ins_time = value

    @builtins.property
    def gps_imu_time(self):
        """Message field 'gps_imu_time'."""
        return self._gps_imu_time

    @gps_imu_time.setter
    def gps_imu_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_imu_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gps_imu_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gps_imu_time = value

    @builtins.property
    def gps_msow(self):
        """Message field 'gps_msow'."""
        return self._gps_msow

    @gps_msow.setter
    def gps_msow(self, value):
        if __debug__:
            from std_msgs.msg import UInt32
            assert \
                isinstance(value, UInt32), \
                "The 'gps_msow' field must be a sub message of type 'UInt32'"
        self._gps_msow = value

    @builtins.property
    def llh(self):
        """Message field 'llh'."""
        return self._llh

    @llh.setter
    def llh(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'llh' field must be a sub message of type 'Vector3'"
        self._llh = value

    @builtins.property
    def ypr(self):
        """Message field 'ypr'."""
        return self._ypr

    @ypr.setter
    def ypr(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'ypr' field must be a sub message of type 'Vector3'"
        self._ypr = value

    @builtins.property
    def oriquat(self):
        """Message field 'oriquat'."""
        return self._oriquat

    @oriquat.setter
    def oriquat(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'oriquat' field must be a sub message of type 'Quaternion'"
        self._oriquat = value

    @builtins.property
    def vel_enu(self):
        """Message field 'vel_enu'."""
        return self._vel_enu

    @vel_enu.setter
    def vel_enu(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'vel_enu' field must be a sub message of type 'Vector3'"
        self._vel_enu = value

    @builtins.property
    def solution_status(self):
        """Message field 'solution_status'."""
        return self._solution_status

    @solution_status.setter
    def solution_status(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'solution_status' field must be a sub message of type 'Int8'"
        self._solution_status = value

    @builtins.property
    def pos_std(self):
        """Message field 'pos_std'."""
        return self._pos_std

    @pos_std.setter
    def pos_std(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'pos_std' field must be a sub message of type 'Vector3'"
        self._pos_std = value

    @builtins.property
    def heading_std(self):
        """Message field 'heading_std'."""
        return self._heading_std

    @heading_std.setter
    def heading_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_std = value

    @builtins.property
    def usw(self):
        """Message field 'usw'."""
        return self._usw

    @usw.setter
    def usw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'usw' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'usw' field must be an unsigned integer in [0, 65535]"
        self._usw = value
