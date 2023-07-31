# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_msgs:msg/LightBarIndicator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LightBarIndicator(type):
    """Metaclass of message 'LightBarIndicator'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GREEN_SOLID': 0,
        'GREEN_FLASH': 1,
        'YELLOW_SIDES': 2,
        'YELLOW_DIM': 3,
        'YELLOW_FLASH': 4,
        'YELLOW_ARROW_LEFT': 5,
        'YELLOW_ARROW_RIGHT': 6,
        'YELLOW_ARROW_OUT': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.msg.LightBarIndicator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__light_bar_indicator
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__light_bar_indicator
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__light_bar_indicator
            cls._TYPE_SUPPORT = module.type_support_msg__msg__light_bar_indicator
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__light_bar_indicator

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GREEN_SOLID': cls.__constants['GREEN_SOLID'],
            'GREEN_FLASH': cls.__constants['GREEN_FLASH'],
            'YELLOW_SIDES': cls.__constants['YELLOW_SIDES'],
            'YELLOW_DIM': cls.__constants['YELLOW_DIM'],
            'YELLOW_FLASH': cls.__constants['YELLOW_FLASH'],
            'YELLOW_ARROW_LEFT': cls.__constants['YELLOW_ARROW_LEFT'],
            'YELLOW_ARROW_RIGHT': cls.__constants['YELLOW_ARROW_RIGHT'],
            'YELLOW_ARROW_OUT': cls.__constants['YELLOW_ARROW_OUT'],
        }

    @property
    def GREEN_SOLID(self):
        """Message constant 'GREEN_SOLID'."""
        return Metaclass_LightBarIndicator.__constants['GREEN_SOLID']

    @property
    def GREEN_FLASH(self):
        """Message constant 'GREEN_FLASH'."""
        return Metaclass_LightBarIndicator.__constants['GREEN_FLASH']

    @property
    def YELLOW_SIDES(self):
        """Message constant 'YELLOW_SIDES'."""
        return Metaclass_LightBarIndicator.__constants['YELLOW_SIDES']

    @property
    def YELLOW_DIM(self):
        """Message constant 'YELLOW_DIM'."""
        return Metaclass_LightBarIndicator.__constants['YELLOW_DIM']

    @property
    def YELLOW_FLASH(self):
        """Message constant 'YELLOW_FLASH'."""
        return Metaclass_LightBarIndicator.__constants['YELLOW_FLASH']

    @property
    def YELLOW_ARROW_LEFT(self):
        """Message constant 'YELLOW_ARROW_LEFT'."""
        return Metaclass_LightBarIndicator.__constants['YELLOW_ARROW_LEFT']

    @property
    def YELLOW_ARROW_RIGHT(self):
        """Message constant 'YELLOW_ARROW_RIGHT'."""
        return Metaclass_LightBarIndicator.__constants['YELLOW_ARROW_RIGHT']

    @property
    def YELLOW_ARROW_OUT(self):
        """Message constant 'YELLOW_ARROW_OUT'."""
        return Metaclass_LightBarIndicator.__constants['YELLOW_ARROW_OUT']


class LightBarIndicator(metaclass=Metaclass_LightBarIndicator):
    """
    Message class 'LightBarIndicator'.

    Constants:
      GREEN_SOLID
      GREEN_FLASH
      YELLOW_SIDES
      YELLOW_DIM
      YELLOW_FLASH
      YELLOW_ARROW_LEFT
      YELLOW_ARROW_RIGHT
      YELLOW_ARROW_OUT
    """

    __slots__ = [
        '_indicator',
    ]

    _fields_and_field_types = {
        'indicator': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.indicator = kwargs.get('indicator', int())

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
        if self.indicator != other.indicator:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def indicator(self):
        """Message field 'indicator'."""
        return self._indicator

    @indicator.setter
    def indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'indicator' field must be an unsigned integer in [0, 255]"
        self._indicator = value
