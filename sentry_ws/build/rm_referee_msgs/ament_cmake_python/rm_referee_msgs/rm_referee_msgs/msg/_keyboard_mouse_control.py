# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_referee_msgs:msg/KeyboardMouseControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KeyboardMouseControl(type):
    """Metaclass of message 'KeyboardMouseControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'KEY_W': 1,
        'KEY_S': 2,
        'KEY_A': 4,
        'KEY_D': 8,
        'KEY_SHIFT': 16,
        'KEY_CTRL': 32,
        'KEY_Q': 64,
        'KEY_E': 128,
        'KEY_R': 256,
        'KEY_F': 512,
        'KEY_G': 1024,
        'KEY_Z': 2048,
        'KEY_X': 4096,
        'KEY_C': 8192,
        'KEY_V': 16384,
        'KEY_B': 32768,
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
                'rm_referee_msgs.msg.KeyboardMouseControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__keyboard_mouse_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__keyboard_mouse_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__keyboard_mouse_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__keyboard_mouse_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__keyboard_mouse_control

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'KEY_W': cls.__constants['KEY_W'],
            'KEY_S': cls.__constants['KEY_S'],
            'KEY_A': cls.__constants['KEY_A'],
            'KEY_D': cls.__constants['KEY_D'],
            'KEY_SHIFT': cls.__constants['KEY_SHIFT'],
            'KEY_CTRL': cls.__constants['KEY_CTRL'],
            'KEY_Q': cls.__constants['KEY_Q'],
            'KEY_E': cls.__constants['KEY_E'],
            'KEY_R': cls.__constants['KEY_R'],
            'KEY_F': cls.__constants['KEY_F'],
            'KEY_G': cls.__constants['KEY_G'],
            'KEY_Z': cls.__constants['KEY_Z'],
            'KEY_X': cls.__constants['KEY_X'],
            'KEY_C': cls.__constants['KEY_C'],
            'KEY_V': cls.__constants['KEY_V'],
            'KEY_B': cls.__constants['KEY_B'],
        }

    @property
    def KEY_W(self):
        """Message constant 'KEY_W'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_W']

    @property
    def KEY_S(self):
        """Message constant 'KEY_S'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_S']

    @property
    def KEY_A(self):
        """Message constant 'KEY_A'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_A']

    @property
    def KEY_D(self):
        """Message constant 'KEY_D'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_D']

    @property
    def KEY_SHIFT(self):
        """Message constant 'KEY_SHIFT'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_SHIFT']

    @property
    def KEY_CTRL(self):
        """Message constant 'KEY_CTRL'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_CTRL']

    @property
    def KEY_Q(self):
        """Message constant 'KEY_Q'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_Q']

    @property
    def KEY_E(self):
        """Message constant 'KEY_E'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_E']

    @property
    def KEY_R(self):
        """Message constant 'KEY_R'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_R']

    @property
    def KEY_F(self):
        """Message constant 'KEY_F'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_F']

    @property
    def KEY_G(self):
        """Message constant 'KEY_G'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_G']

    @property
    def KEY_Z(self):
        """Message constant 'KEY_Z'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_Z']

    @property
    def KEY_X(self):
        """Message constant 'KEY_X'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_X']

    @property
    def KEY_C(self):
        """Message constant 'KEY_C'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_C']

    @property
    def KEY_V(self):
        """Message constant 'KEY_V'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_V']

    @property
    def KEY_B(self):
        """Message constant 'KEY_B'."""
        return Metaclass_KeyboardMouseControl.__constants['KEY_B']


class KeyboardMouseControl(metaclass=Metaclass_KeyboardMouseControl):
    """
    Message class 'KeyboardMouseControl'.

    Constants:
      KEY_W
      KEY_S
      KEY_A
      KEY_D
      KEY_SHIFT
      KEY_CTRL
      KEY_Q
      KEY_E
      KEY_R
      KEY_F
      KEY_G
      KEY_Z
      KEY_X
      KEY_C
      KEY_V
      KEY_B
    """

    __slots__ = [
        '_header',
        '_mouse_x',
        '_mouse_y',
        '_mouse_z',
        '_left_button_down',
        '_right_button_down',
        '_keyboard_value',
        '_mid_button_down',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'mouse_x': 'int32',
        'mouse_y': 'int32',
        'mouse_z': 'int32',
        'left_button_down': 'boolean',
        'right_button_down': 'boolean',
        'keyboard_value': 'uint32',
        'mid_button_down': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.mouse_x = kwargs.get('mouse_x', int())
        self.mouse_y = kwargs.get('mouse_y', int())
        self.mouse_z = kwargs.get('mouse_z', int())
        self.left_button_down = kwargs.get('left_button_down', bool())
        self.right_button_down = kwargs.get('right_button_down', bool())
        self.keyboard_value = kwargs.get('keyboard_value', int())
        self.mid_button_down = kwargs.get('mid_button_down', bool())

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
        if self.mouse_x != other.mouse_x:
            return False
        if self.mouse_y != other.mouse_y:
            return False
        if self.mouse_z != other.mouse_z:
            return False
        if self.left_button_down != other.left_button_down:
            return False
        if self.right_button_down != other.right_button_down:
            return False
        if self.keyboard_value != other.keyboard_value:
            return False
        if self.mid_button_down != other.mid_button_down:
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
    def mouse_x(self):
        """Message field 'mouse_x'."""
        return self._mouse_x

    @mouse_x.setter
    def mouse_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mouse_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mouse_x' field must be an integer in [-2147483648, 2147483647]"
        self._mouse_x = value

    @builtins.property
    def mouse_y(self):
        """Message field 'mouse_y'."""
        return self._mouse_y

    @mouse_y.setter
    def mouse_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mouse_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mouse_y' field must be an integer in [-2147483648, 2147483647]"
        self._mouse_y = value

    @builtins.property
    def mouse_z(self):
        """Message field 'mouse_z'."""
        return self._mouse_z

    @mouse_z.setter
    def mouse_z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mouse_z' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mouse_z' field must be an integer in [-2147483648, 2147483647]"
        self._mouse_z = value

    @builtins.property
    def left_button_down(self):
        """Message field 'left_button_down'."""
        return self._left_button_down

    @left_button_down.setter
    def left_button_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_button_down' field must be of type 'bool'"
        self._left_button_down = value

    @builtins.property
    def right_button_down(self):
        """Message field 'right_button_down'."""
        return self._right_button_down

    @right_button_down.setter
    def right_button_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_button_down' field must be of type 'bool'"
        self._right_button_down = value

    @builtins.property
    def keyboard_value(self):
        """Message field 'keyboard_value'."""
        return self._keyboard_value

    @keyboard_value.setter
    def keyboard_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'keyboard_value' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'keyboard_value' field must be an unsigned integer in [0, 4294967295]"
        self._keyboard_value = value

    @builtins.property
    def mid_button_down(self):
        """Message field 'mid_button_down'."""
        return self._mid_button_down

    @mid_button_down.setter
    def mid_button_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mid_button_down' field must be of type 'bool'"
        self._mid_button_down = value
