# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TransmissionState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TransmissionState(type):
    """Metaclass of message 'TransmissionState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NEUTRAL': 0,
        'PARK': 1,
        'FORWARDGEARS': 2,
        'REVERSEGEARS': 3,
        'RESERVED1': 4,
        'RESERVED2': 5,
        'RESERVED3': 6,
        'UNAVAILABLE': 7,
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
                'j2735_v2x_msgs.msg.TransmissionState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__transmission_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__transmission_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__transmission_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__transmission_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__transmission_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NEUTRAL': cls.__constants['NEUTRAL'],
            'PARK': cls.__constants['PARK'],
            'FORWARDGEARS': cls.__constants['FORWARDGEARS'],
            'REVERSEGEARS': cls.__constants['REVERSEGEARS'],
            'RESERVED1': cls.__constants['RESERVED1'],
            'RESERVED2': cls.__constants['RESERVED2'],
            'RESERVED3': cls.__constants['RESERVED3'],
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
        }

    @property
    def NEUTRAL(self):
        """Message constant 'NEUTRAL'."""
        return Metaclass_TransmissionState.__constants['NEUTRAL']

    @property
    def PARK(self):
        """Message constant 'PARK'."""
        return Metaclass_TransmissionState.__constants['PARK']

    @property
    def FORWARDGEARS(self):
        """Message constant 'FORWARDGEARS'."""
        return Metaclass_TransmissionState.__constants['FORWARDGEARS']

    @property
    def REVERSEGEARS(self):
        """Message constant 'REVERSEGEARS'."""
        return Metaclass_TransmissionState.__constants['REVERSEGEARS']

    @property
    def RESERVED1(self):
        """Message constant 'RESERVED1'."""
        return Metaclass_TransmissionState.__constants['RESERVED1']

    @property
    def RESERVED2(self):
        """Message constant 'RESERVED2'."""
        return Metaclass_TransmissionState.__constants['RESERVED2']

    @property
    def RESERVED3(self):
        """Message constant 'RESERVED3'."""
        return Metaclass_TransmissionState.__constants['RESERVED3']

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_TransmissionState.__constants['UNAVAILABLE']


class TransmissionState(metaclass=Metaclass_TransmissionState):
    """
    Message class 'TransmissionState'.

    Constants:
      NEUTRAL
      PARK
      FORWARDGEARS
      REVERSEGEARS
      RESERVED1
      RESERVED2
      RESERVED3
      UNAVAILABLE
    """

    __slots__ = [
        '_transmission_state',
    ]

    _fields_and_field_types = {
        'transmission_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.transmission_state = kwargs.get('transmission_state', int())

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
        if self.transmission_state != other.transmission_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def transmission_state(self):
        """Message field 'transmission_state'."""
        return self._transmission_state

    @transmission_state.setter
    def transmission_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'transmission_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'transmission_state' field must be an unsigned integer in [0, 255]"
        self._transmission_state = value
