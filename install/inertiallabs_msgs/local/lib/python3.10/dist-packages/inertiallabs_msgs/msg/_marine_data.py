# generated from rosidl_generator_py/resource/_idl.py.em
# with input from inertiallabs_msgs:msg/MarineData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MarineData(type):
    """Metaclass of message 'MarineData'."""

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
                'inertiallabs_msgs.msg.MarineData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__marine_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__marine_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__marine_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__marine_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__marine_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MarineData(metaclass=Metaclass_MarineData):
    """Message class 'MarineData'."""

    __slots__ = [
        '_header',
        '_heave',
        '_surge',
        '_sway',
        '_heave_velocity',
        '_surge_velocity',
        '_sway_velocity',
        '_significant_wave_height',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'heave': 'double',
        'surge': 'double',
        'sway': 'double',
        'heave_velocity': 'float',
        'surge_velocity': 'float',
        'sway_velocity': 'float',
        'significant_wave_height': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.heave = kwargs.get('heave', float())
        self.surge = kwargs.get('surge', float())
        self.sway = kwargs.get('sway', float())
        self.heave_velocity = kwargs.get('heave_velocity', float())
        self.surge_velocity = kwargs.get('surge_velocity', float())
        self.sway_velocity = kwargs.get('sway_velocity', float())
        self.significant_wave_height = kwargs.get('significant_wave_height', float())

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
        if self.heave != other.heave:
            return False
        if self.surge != other.surge:
            return False
        if self.sway != other.sway:
            return False
        if self.heave_velocity != other.heave_velocity:
            return False
        if self.surge_velocity != other.surge_velocity:
            return False
        if self.sway_velocity != other.sway_velocity:
            return False
        if self.significant_wave_height != other.significant_wave_height:
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
    def heave(self):
        """Message field 'heave'."""
        return self._heave

    @heave.setter
    def heave(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heave' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heave' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heave = value

    @builtins.property
    def surge(self):
        """Message field 'surge'."""
        return self._surge

    @surge.setter
    def surge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'surge' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'surge' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._surge = value

    @builtins.property
    def sway(self):
        """Message field 'sway'."""
        return self._sway

    @sway.setter
    def sway(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sway' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sway' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sway = value

    @builtins.property
    def heave_velocity(self):
        """Message field 'heave_velocity'."""
        return self._heave_velocity

    @heave_velocity.setter
    def heave_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heave_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heave_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heave_velocity = value

    @builtins.property
    def surge_velocity(self):
        """Message field 'surge_velocity'."""
        return self._surge_velocity

    @surge_velocity.setter
    def surge_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'surge_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'surge_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._surge_velocity = value

    @builtins.property
    def sway_velocity(self):
        """Message field 'sway_velocity'."""
        return self._sway_velocity

    @sway_velocity.setter
    def sway_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sway_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sway_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sway_velocity = value

    @builtins.property
    def significant_wave_height(self):
        """Message field 'significant_wave_height'."""
        return self._significant_wave_height

    @significant_wave_height.setter
    def significant_wave_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'significant_wave_height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'significant_wave_height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._significant_wave_height = value
