# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_referee_msgs:msg/ProjectileAllowance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProjectileAllowance(type):
    """Metaclass of message 'ProjectileAllowance'."""

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
                'rm_referee_msgs.msg.ProjectileAllowance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__projectile_allowance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__projectile_allowance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__projectile_allowance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__projectile_allowance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__projectile_allowance

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


class ProjectileAllowance(metaclass=Metaclass_ProjectileAllowance):
    """Message class 'ProjectileAllowance'."""

    __slots__ = [
        '_header',
        '_projectile_allowance_17mm',
        '_projectile_allowance_42mm',
        '_remaining_gold_coin',
        '_projectile_allowance_fortress',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'projectile_allowance_17mm': 'uint16',
        'projectile_allowance_42mm': 'uint16',
        'remaining_gold_coin': 'uint16',
        'projectile_allowance_fortress': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.projectile_allowance_17mm = kwargs.get('projectile_allowance_17mm', int())
        self.projectile_allowance_42mm = kwargs.get('projectile_allowance_42mm', int())
        self.remaining_gold_coin = kwargs.get('remaining_gold_coin', int())
        self.projectile_allowance_fortress = kwargs.get('projectile_allowance_fortress', int())

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
        if self.projectile_allowance_17mm != other.projectile_allowance_17mm:
            return False
        if self.projectile_allowance_42mm != other.projectile_allowance_42mm:
            return False
        if self.remaining_gold_coin != other.remaining_gold_coin:
            return False
        if self.projectile_allowance_fortress != other.projectile_allowance_fortress:
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
    def projectile_allowance_17mm(self):
        """Message field 'projectile_allowance_17mm'."""
        return self._projectile_allowance_17mm

    @projectile_allowance_17mm.setter
    def projectile_allowance_17mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'projectile_allowance_17mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'projectile_allowance_17mm' field must be an unsigned integer in [0, 65535]"
        self._projectile_allowance_17mm = value

    @builtins.property
    def projectile_allowance_42mm(self):
        """Message field 'projectile_allowance_42mm'."""
        return self._projectile_allowance_42mm

    @projectile_allowance_42mm.setter
    def projectile_allowance_42mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'projectile_allowance_42mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'projectile_allowance_42mm' field must be an unsigned integer in [0, 65535]"
        self._projectile_allowance_42mm = value

    @builtins.property
    def remaining_gold_coin(self):
        """Message field 'remaining_gold_coin'."""
        return self._remaining_gold_coin

    @remaining_gold_coin.setter
    def remaining_gold_coin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_gold_coin' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remaining_gold_coin' field must be an unsigned integer in [0, 65535]"
        self._remaining_gold_coin = value

    @builtins.property
    def projectile_allowance_fortress(self):
        """Message field 'projectile_allowance_fortress'."""
        return self._projectile_allowance_fortress

    @projectile_allowance_fortress.setter
    def projectile_allowance_fortress(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'projectile_allowance_fortress' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'projectile_allowance_fortress' field must be an unsigned integer in [0, 65535]"
        self._projectile_allowance_fortress = value
