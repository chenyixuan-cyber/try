# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_referee_msgs:msg/SentryInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SentryInfo(type):
    """Metaclass of message 'SentryInfo'."""

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
                'rm_referee_msgs.msg.SentryInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sentry_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sentry_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sentry_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sentry_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sentry_info

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


class SentryInfo(metaclass=Metaclass_SentryInfo):
    """Message class 'SentryInfo'."""

    __slots__ = [
        '_header',
        '_sentry_info',
        '_sentry_info_2',
        '_sentry_info_3',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sentry_info': 'uint32',
        'sentry_info_2': 'uint16',
        'sentry_info_3': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.sentry_info = kwargs.get('sentry_info', int())
        self.sentry_info_2 = kwargs.get('sentry_info_2', int())
        self.sentry_info_3 = kwargs.get('sentry_info_3', int())

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
        if self.sentry_info != other.sentry_info:
            return False
        if self.sentry_info_2 != other.sentry_info_2:
            return False
        if self.sentry_info_3 != other.sentry_info_3:
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
    def sentry_info(self):
        """Message field 'sentry_info'."""
        return self._sentry_info

    @sentry_info.setter
    def sentry_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_info' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sentry_info' field must be an unsigned integer in [0, 4294967295]"
        self._sentry_info = value

    @builtins.property
    def sentry_info_2(self):
        """Message field 'sentry_info_2'."""
        return self._sentry_info_2

    @sentry_info_2.setter
    def sentry_info_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_info_2' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sentry_info_2' field must be an unsigned integer in [0, 65535]"
        self._sentry_info_2 = value

    @builtins.property
    def sentry_info_3(self):
        """Message field 'sentry_info_3'."""
        return self._sentry_info_3

    @sentry_info_3.setter
    def sentry_info_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_info_3' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'sentry_info_3' field must be an unsigned integer in [0, 18446744073709551615]"
        self._sentry_info_3 = value
