# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PersonalDeviceUsageState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PersonalDeviceUsageState(type):
    """Metaclass of message 'PersonalDeviceUsageState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'OTHER': 1,
        'IDLE': 2,
        'LISTENING_TO_AUDIO': 4,
        'TYPING': 8,
        'CALLING': 16,
        'PLAYING_GAMES': 32,
        'READING': 64,
        'VIEWING': 128,
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
                'j2735_v2x_msgs.msg.PersonalDeviceUsageState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__personal_device_usage_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__personal_device_usage_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__personal_device_usage_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__personal_device_usage_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__personal_device_usage_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'OTHER': cls.__constants['OTHER'],
            'IDLE': cls.__constants['IDLE'],
            'LISTENING_TO_AUDIO': cls.__constants['LISTENING_TO_AUDIO'],
            'TYPING': cls.__constants['TYPING'],
            'CALLING': cls.__constants['CALLING'],
            'PLAYING_GAMES': cls.__constants['PLAYING_GAMES'],
            'READING': cls.__constants['READING'],
            'VIEWING': cls.__constants['VIEWING'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_PersonalDeviceUsageState.__constants['UNAVAILABLE']

    @property
    def OTHER(self):
        """Message constant 'OTHER'."""
        return Metaclass_PersonalDeviceUsageState.__constants['OTHER']

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_PersonalDeviceUsageState.__constants['IDLE']

    @property
    def LISTENING_TO_AUDIO(self):
        """Message constant 'LISTENING_TO_AUDIO'."""
        return Metaclass_PersonalDeviceUsageState.__constants['LISTENING_TO_AUDIO']

    @property
    def TYPING(self):
        """Message constant 'TYPING'."""
        return Metaclass_PersonalDeviceUsageState.__constants['TYPING']

    @property
    def CALLING(self):
        """Message constant 'CALLING'."""
        return Metaclass_PersonalDeviceUsageState.__constants['CALLING']

    @property
    def PLAYING_GAMES(self):
        """Message constant 'PLAYING_GAMES'."""
        return Metaclass_PersonalDeviceUsageState.__constants['PLAYING_GAMES']

    @property
    def READING(self):
        """Message constant 'READING'."""
        return Metaclass_PersonalDeviceUsageState.__constants['READING']

    @property
    def VIEWING(self):
        """Message constant 'VIEWING'."""
        return Metaclass_PersonalDeviceUsageState.__constants['VIEWING']


class PersonalDeviceUsageState(metaclass=Metaclass_PersonalDeviceUsageState):
    """
    Message class 'PersonalDeviceUsageState'.

    Constants:
      UNAVAILABLE
      OTHER
      IDLE
      LISTENING_TO_AUDIO
      TYPING
      CALLING
      PLAYING_GAMES
      READING
      VIEWING
    """

    __slots__ = [
        '_states',
    ]

    _fields_and_field_types = {
        'states': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.states = kwargs.get('states', int())

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
        if self.states != other.states:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def states(self):
        """Message field 'states'."""
        return self._states

    @states.setter
    def states(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'states' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'states' field must be an unsigned integer in [0, 65535]"
        self._states = value
