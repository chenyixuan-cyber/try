# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_referee_msgs:msg/ShootData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ShootData(type):
    """Metaclass of message 'ShootData'."""

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
            module = import_type_support('rm_referee_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rm_referee_msgs.msg.ShootData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__shoot_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__shoot_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__shoot_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__shoot_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__shoot_data

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


class ShootData(metaclass=Metaclass_ShootData):
    """Message class 'ShootData'."""

    __slots__ = [
        '_header',
        '_bullet_type',
        '_shooter_number',
        '_launching_frequency',
        '_initial_speed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'bullet_type': 'uint8',
        'shooter_number': 'uint8',
        'launching_frequency': 'uint8',
        'initial_speed': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.bullet_type = kwargs.get('bullet_type', int())
        self.shooter_number = kwargs.get('shooter_number', int())
        self.launching_frequency = kwargs.get('launching_frequency', int())
        self.initial_speed = kwargs.get('initial_speed', float())

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
        if self.bullet_type != other.bullet_type:
            return False
        if self.shooter_number != other.shooter_number:
            return False
        if self.launching_frequency != other.launching_frequency:
            return False
        if self.initial_speed != other.initial_speed:
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
    def bullet_type(self):
        """Message field 'bullet_type'."""
        return self._bullet_type

    @bullet_type.setter
    def bullet_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bullet_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bullet_type' field must be an unsigned integer in [0, 255]"
        self._bullet_type = value

    @builtins.property
    def shooter_number(self):
        """Message field 'shooter_number'."""
        return self._shooter_number

    @shooter_number.setter
    def shooter_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'shooter_number' field must be an unsigned integer in [0, 255]"
        self._shooter_number = value

    @builtins.property
    def launching_frequency(self):
        """Message field 'launching_frequency'."""
        return self._launching_frequency

    @launching_frequency.setter
    def launching_frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'launching_frequency' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'launching_frequency' field must be an unsigned integer in [0, 255]"
        self._launching_frequency = value

    @builtins.property
    def initial_speed(self):
        """Message field 'initial_speed'."""
        return self._initial_speed

    @initial_speed.setter
    def initial_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initial_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'initial_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._initial_speed = value
