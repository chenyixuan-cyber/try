# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_referee_msgs:msg/MapCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapCommand(type):
    """Metaclass of message 'MapCommand'."""

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
                'rm_referee_msgs.msg.MapCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_command

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


class MapCommand(metaclass=Metaclass_MapCommand):
    """Message class 'MapCommand'."""

    __slots__ = [
        '_header',
        '_target_position_x',
        '_target_position_y',
        '_cmd_keyboard',
        '_target_robot_id',
        '_cmd_source',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'target_position_x': 'float',
        'target_position_y': 'float',
        'cmd_keyboard': 'uint8',
        'target_robot_id': 'uint8',
        'cmd_source': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.target_position_x = kwargs.get('target_position_x', float())
        self.target_position_y = kwargs.get('target_position_y', float())
        self.cmd_keyboard = kwargs.get('cmd_keyboard', int())
        self.target_robot_id = kwargs.get('target_robot_id', int())
        self.cmd_source = kwargs.get('cmd_source', int())

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
        if self.target_position_x != other.target_position_x:
            return False
        if self.target_position_y != other.target_position_y:
            return False
        if self.cmd_keyboard != other.cmd_keyboard:
            return False
        if self.target_robot_id != other.target_robot_id:
            return False
        if self.cmd_source != other.cmd_source:
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
    def target_position_x(self):
        """Message field 'target_position_x'."""
        return self._target_position_x

    @target_position_x.setter
    def target_position_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_position_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_position_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_position_x = value

    @builtins.property
    def target_position_y(self):
        """Message field 'target_position_y'."""
        return self._target_position_y

    @target_position_y.setter
    def target_position_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_position_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_position_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_position_y = value

    @builtins.property
    def cmd_keyboard(self):
        """Message field 'cmd_keyboard'."""
        return self._cmd_keyboard

    @cmd_keyboard.setter
    def cmd_keyboard(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_keyboard' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_keyboard' field must be an unsigned integer in [0, 255]"
        self._cmd_keyboard = value

    @builtins.property
    def target_robot_id(self):
        """Message field 'target_robot_id'."""
        return self._target_robot_id

    @target_robot_id.setter
    def target_robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_robot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_robot_id' field must be an unsigned integer in [0, 255]"
        self._target_robot_id = value

    @builtins.property
    def cmd_source(self):
        """Message field 'cmd_source'."""
        return self._cmd_source

    @cmd_source.setter
    def cmd_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_source' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cmd_source' field must be an unsigned integer in [0, 65535]"
        self._cmd_source = value
