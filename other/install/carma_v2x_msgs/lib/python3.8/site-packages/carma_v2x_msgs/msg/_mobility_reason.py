# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/MobilityReason.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MobilityReason(type):
    """Metaclass of message 'MobilityReason'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'ACCEPTED': 1,
        'SAFETY_VIOLATION': 2,
        'INSUFFICIENT_TIME': 3,
        'PLAN_CONFLICT': 4,
        'OTHERWISE_ENGAGED': 5,
        'INSUFFICIENT_URGENCY': 6,
        'PLAN_UNCLEAR': 7,
        'OTHER': 8,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_v2x_msgs.msg.MobilityReason')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mobility_reason
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mobility_reason
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mobility_reason
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mobility_reason
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mobility_reason

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'ACCEPTED': cls.__constants['ACCEPTED'],
            'SAFETY_VIOLATION': cls.__constants['SAFETY_VIOLATION'],
            'INSUFFICIENT_TIME': cls.__constants['INSUFFICIENT_TIME'],
            'PLAN_CONFLICT': cls.__constants['PLAN_CONFLICT'],
            'OTHERWISE_ENGAGED': cls.__constants['OTHERWISE_ENGAGED'],
            'INSUFFICIENT_URGENCY': cls.__constants['INSUFFICIENT_URGENCY'],
            'PLAN_UNCLEAR': cls.__constants['PLAN_UNCLEAR'],
            'OTHER': cls.__constants['OTHER'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_MobilityReason.__constants['UNKNOWN']

    @property
    def ACCEPTED(self):
        """Message constant 'ACCEPTED'."""
        return Metaclass_MobilityReason.__constants['ACCEPTED']

    @property
    def SAFETY_VIOLATION(self):
        """Message constant 'SAFETY_VIOLATION'."""
        return Metaclass_MobilityReason.__constants['SAFETY_VIOLATION']

    @property
    def INSUFFICIENT_TIME(self):
        """Message constant 'INSUFFICIENT_TIME'."""
        return Metaclass_MobilityReason.__constants['INSUFFICIENT_TIME']

    @property
    def PLAN_CONFLICT(self):
        """Message constant 'PLAN_CONFLICT'."""
        return Metaclass_MobilityReason.__constants['PLAN_CONFLICT']

    @property
    def OTHERWISE_ENGAGED(self):
        """Message constant 'OTHERWISE_ENGAGED'."""
        return Metaclass_MobilityReason.__constants['OTHERWISE_ENGAGED']

    @property
    def INSUFFICIENT_URGENCY(self):
        """Message constant 'INSUFFICIENT_URGENCY'."""
        return Metaclass_MobilityReason.__constants['INSUFFICIENT_URGENCY']

    @property
    def PLAN_UNCLEAR(self):
        """Message constant 'PLAN_UNCLEAR'."""
        return Metaclass_MobilityReason.__constants['PLAN_UNCLEAR']

    @property
    def OTHER(self):
        """Message constant 'OTHER'."""
        return Metaclass_MobilityReason.__constants['OTHER']


class MobilityReason(metaclass=Metaclass_MobilityReason):
    """
    Message class 'MobilityReason'.

    Constants:
      UNKNOWN
      ACCEPTED
      SAFETY_VIOLATION
      INSUFFICIENT_TIME
      PLAN_CONFLICT
      OTHERWISE_ENGAGED
      INSUFFICIENT_URGENCY
      PLAN_UNCLEAR
      OTHER
    """

    __slots__ = [
        '_reason',
    ]

    _fields_and_field_types = {
        'reason': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.reason = kwargs.get('reason', int())

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
        if self.reason != other.reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reason' field must be an unsigned integer in [0, 255]"
        self._reason = value
