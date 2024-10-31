# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/LightbarInUse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LightbarInUse(type):
    """Metaclass of message 'LightbarInUse'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'NOT_IN_USE': 1,
        'IN_USE': 2,
        'YELLOW_CAUTION_LIGHTS': 3,
        'SCHOOL_BUS_LIGHTS': 4,
        'ARROW_SIGNS_ACTIVE': 5,
        'SLOW_MOVING_VEHICLE': 6,
        'FREQ_STOPS': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.LightbarInUse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lightbar_in_use
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lightbar_in_use
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lightbar_in_use
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lightbar_in_use
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lightbar_in_use

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'NOT_IN_USE': cls.__constants['NOT_IN_USE'],
            'IN_USE': cls.__constants['IN_USE'],
            'YELLOW_CAUTION_LIGHTS': cls.__constants['YELLOW_CAUTION_LIGHTS'],
            'SCHOOL_BUS_LIGHTS': cls.__constants['SCHOOL_BUS_LIGHTS'],
            'ARROW_SIGNS_ACTIVE': cls.__constants['ARROW_SIGNS_ACTIVE'],
            'SLOW_MOVING_VEHICLE': cls.__constants['SLOW_MOVING_VEHICLE'],
            'FREQ_STOPS': cls.__constants['FREQ_STOPS'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_LightbarInUse.__constants['UNAVAILABLE']

    @property
    def NOT_IN_USE(self):
        """Message constant 'NOT_IN_USE'."""
        return Metaclass_LightbarInUse.__constants['NOT_IN_USE']

    @property
    def IN_USE(self):
        """Message constant 'IN_USE'."""
        return Metaclass_LightbarInUse.__constants['IN_USE']

    @property
    def YELLOW_CAUTION_LIGHTS(self):
        """Message constant 'YELLOW_CAUTION_LIGHTS'."""
        return Metaclass_LightbarInUse.__constants['YELLOW_CAUTION_LIGHTS']

    @property
    def SCHOOL_BUS_LIGHTS(self):
        """Message constant 'SCHOOL_BUS_LIGHTS'."""
        return Metaclass_LightbarInUse.__constants['SCHOOL_BUS_LIGHTS']

    @property
    def ARROW_SIGNS_ACTIVE(self):
        """Message constant 'ARROW_SIGNS_ACTIVE'."""
        return Metaclass_LightbarInUse.__constants['ARROW_SIGNS_ACTIVE']

    @property
    def SLOW_MOVING_VEHICLE(self):
        """Message constant 'SLOW_MOVING_VEHICLE'."""
        return Metaclass_LightbarInUse.__constants['SLOW_MOVING_VEHICLE']

    @property
    def FREQ_STOPS(self):
        """Message constant 'FREQ_STOPS'."""
        return Metaclass_LightbarInUse.__constants['FREQ_STOPS']


class LightbarInUse(metaclass=Metaclass_LightbarInUse):
    """
    Message class 'LightbarInUse'.

    Constants:
      UNAVAILABLE
      NOT_IN_USE
      IN_USE
      YELLOW_CAUTION_LIGHTS
      SCHOOL_BUS_LIGHTS
      ARROW_SIGNS_ACTIVE
      SLOW_MOVING_VEHICLE
      FREQ_STOPS
    """

    __slots__ = [
        '_lightbar_in_use',
    ]

    _fields_and_field_types = {
        'lightbar_in_use': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lightbar_in_use = kwargs.get('lightbar_in_use', int())

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
        if self.lightbar_in_use != other.lightbar_in_use:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lightbar_in_use(self):
        """Message field 'lightbar_in_use'."""
        return self._lightbar_in_use

    @lightbar_in_use.setter
    def lightbar_in_use(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lightbar_in_use' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lightbar_in_use' field must be an unsigned integer in [0, 255]"
        self._lightbar_in_use = value
