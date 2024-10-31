# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_driver_msgs:msg/LightBarStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LightBarStatus(type):
    """Metaclass of message 'LightBarStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OFF': 0,
        'ON': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_driver_msgs.msg.LightBarStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__light_bar_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__light_bar_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__light_bar_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__light_bar_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__light_bar_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OFF': cls.__constants['OFF'],
            'ON': cls.__constants['ON'],
        }

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_LightBarStatus.__constants['OFF']

    @property
    def ON(self):
        """Message constant 'ON'."""
        return Metaclass_LightBarStatus.__constants['ON']


class LightBarStatus(metaclass=Metaclass_LightBarStatus):
    """
    Message class 'LightBarStatus'.

    Constants:
      OFF
      ON
    """

    __slots__ = [
        '_green_solid',
        '_yellow_solid',
        '_right_arrow',
        '_left_arrow',
        '_sides_solid',
        '_flash',
        '_green_flash',
        '_takedown',
    ]

    _fields_and_field_types = {
        'green_solid': 'uint8',
        'yellow_solid': 'uint8',
        'right_arrow': 'uint8',
        'left_arrow': 'uint8',
        'sides_solid': 'uint8',
        'flash': 'uint8',
        'green_flash': 'uint8',
        'takedown': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.green_solid = kwargs.get('green_solid', int())
        self.yellow_solid = kwargs.get('yellow_solid', int())
        self.right_arrow = kwargs.get('right_arrow', int())
        self.left_arrow = kwargs.get('left_arrow', int())
        self.sides_solid = kwargs.get('sides_solid', int())
        self.flash = kwargs.get('flash', int())
        self.green_flash = kwargs.get('green_flash', int())
        self.takedown = kwargs.get('takedown', int())

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
        if self.green_solid != other.green_solid:
            return False
        if self.yellow_solid != other.yellow_solid:
            return False
        if self.right_arrow != other.right_arrow:
            return False
        if self.left_arrow != other.left_arrow:
            return False
        if self.sides_solid != other.sides_solid:
            return False
        if self.flash != other.flash:
            return False
        if self.green_flash != other.green_flash:
            return False
        if self.takedown != other.takedown:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def green_solid(self):
        """Message field 'green_solid'."""
        return self._green_solid

    @green_solid.setter
    def green_solid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'green_solid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'green_solid' field must be an unsigned integer in [0, 255]"
        self._green_solid = value

    @property
    def yellow_solid(self):
        """Message field 'yellow_solid'."""
        return self._yellow_solid

    @yellow_solid.setter
    def yellow_solid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yellow_solid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'yellow_solid' field must be an unsigned integer in [0, 255]"
        self._yellow_solid = value

    @property
    def right_arrow(self):
        """Message field 'right_arrow'."""
        return self._right_arrow

    @right_arrow.setter
    def right_arrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_arrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_arrow' field must be an unsigned integer in [0, 255]"
        self._right_arrow = value

    @property
    def left_arrow(self):
        """Message field 'left_arrow'."""
        return self._left_arrow

    @left_arrow.setter
    def left_arrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_arrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_arrow' field must be an unsigned integer in [0, 255]"
        self._left_arrow = value

    @property
    def sides_solid(self):
        """Message field 'sides_solid'."""
        return self._sides_solid

    @sides_solid.setter
    def sides_solid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sides_solid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sides_solid' field must be an unsigned integer in [0, 255]"
        self._sides_solid = value

    @property
    def flash(self):
        """Message field 'flash'."""
        return self._flash

    @flash.setter
    def flash(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flash' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'flash' field must be an unsigned integer in [0, 255]"
        self._flash = value

    @property
    def green_flash(self):
        """Message field 'green_flash'."""
        return self._green_flash

    @green_flash.setter
    def green_flash(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'green_flash' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'green_flash' field must be an unsigned integer in [0, 255]"
        self._green_flash = value

    @property
    def takedown(self):
        """Message field 'takedown'."""
        return self._takedown

    @takedown.setter
    def takedown(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'takedown' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'takedown' field must be an unsigned integer in [0, 255]"
        self._takedown = value
