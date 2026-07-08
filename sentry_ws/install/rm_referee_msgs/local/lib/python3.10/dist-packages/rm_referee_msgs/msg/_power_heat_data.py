# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_referee_msgs:msg/PowerHeatData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowerHeatData(type):
    """Metaclass of message 'PowerHeatData'."""

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
                'rm_referee_msgs.msg.PowerHeatData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_heat_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_heat_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_heat_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_heat_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_heat_data

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


class PowerHeatData(metaclass=Metaclass_PowerHeatData):
    """Message class 'PowerHeatData'."""

    __slots__ = [
        '_header',
        '_reserved',
        '_reserved_2',
        '_reserved_3',
        '_buffer_energy',
        '_shooter_17mm_1_barrel_heat',
        '_shooter_42mm_barrel_heat',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'reserved': 'uint16',
        'reserved_2': 'uint16',
        'reserved_3': 'float',
        'buffer_energy': 'uint16',
        'shooter_17mm_1_barrel_heat': 'uint16',
        'shooter_42mm_barrel_heat': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.reserved = kwargs.get('reserved', int())
        self.reserved_2 = kwargs.get('reserved_2', int())
        self.reserved_3 = kwargs.get('reserved_3', float())
        self.buffer_energy = kwargs.get('buffer_energy', int())
        self.shooter_17mm_1_barrel_heat = kwargs.get('shooter_17mm_1_barrel_heat', int())
        self.shooter_42mm_barrel_heat = kwargs.get('shooter_42mm_barrel_heat', int())

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
        if self.reserved != other.reserved:
            return False
        if self.reserved_2 != other.reserved_2:
            return False
        if self.reserved_3 != other.reserved_3:
            return False
        if self.buffer_energy != other.buffer_energy:
            return False
        if self.shooter_17mm_1_barrel_heat != other.shooter_17mm_1_barrel_heat:
            return False
        if self.shooter_42mm_barrel_heat != other.shooter_42mm_barrel_heat:
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
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reserved' field must be an unsigned integer in [0, 65535]"
        self._reserved = value

    @builtins.property
    def reserved_2(self):
        """Message field 'reserved_2'."""
        return self._reserved_2

    @reserved_2.setter
    def reserved_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reserved_2' field must be an unsigned integer in [0, 65535]"
        self._reserved_2 = value

    @builtins.property
    def reserved_3(self):
        """Message field 'reserved_3'."""
        return self._reserved_3

    @reserved_3.setter
    def reserved_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reserved_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'reserved_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._reserved_3 = value

    @builtins.property
    def buffer_energy(self):
        """Message field 'buffer_energy'."""
        return self._buffer_energy

    @buffer_energy.setter
    def buffer_energy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buffer_energy' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'buffer_energy' field must be an unsigned integer in [0, 65535]"
        self._buffer_energy = value

    @builtins.property
    def shooter_17mm_1_barrel_heat(self):
        """Message field 'shooter_17mm_1_barrel_heat'."""
        return self._shooter_17mm_1_barrel_heat

    @shooter_17mm_1_barrel_heat.setter
    def shooter_17mm_1_barrel_heat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_17mm_1_barrel_heat' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_17mm_1_barrel_heat' field must be an unsigned integer in [0, 65535]"
        self._shooter_17mm_1_barrel_heat = value

    @builtins.property
    def shooter_42mm_barrel_heat(self):
        """Message field 'shooter_42mm_barrel_heat'."""
        return self._shooter_42mm_barrel_heat

    @shooter_42mm_barrel_heat.setter
    def shooter_42mm_barrel_heat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_42mm_barrel_heat' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_42mm_barrel_heat' field must be an unsigned integer in [0, 65535]"
        self._shooter_42mm_barrel_heat = value
