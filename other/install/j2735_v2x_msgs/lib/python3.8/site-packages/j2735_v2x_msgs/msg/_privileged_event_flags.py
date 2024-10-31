# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/PrivilegedEventFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PrivilegedEventFlags(type):
    """Metaclass of message 'PrivilegedEventFlags'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PE_UNAVAILABLE': 1,
        'PE_EMERGENCY_RESPONSE': 2,
        'PE_EMERGENCY_LIGHTS_ACTIVE': 4,
        'PE_EMERGENCY_SOUND_ACTIVE': 8,
        'PE_NON_EMERGENCY_LIGHTS_ACTIVE': 16,
        'PE_NON_EMERGENCY_SOUND_ACTIVE': 32,
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
                'j2735_v2x_msgs.msg.PrivilegedEventFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__privileged_event_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__privileged_event_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__privileged_event_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__privileged_event_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__privileged_event_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PE_UNAVAILABLE': cls.__constants['PE_UNAVAILABLE'],
            'PE_EMERGENCY_RESPONSE': cls.__constants['PE_EMERGENCY_RESPONSE'],
            'PE_EMERGENCY_LIGHTS_ACTIVE': cls.__constants['PE_EMERGENCY_LIGHTS_ACTIVE'],
            'PE_EMERGENCY_SOUND_ACTIVE': cls.__constants['PE_EMERGENCY_SOUND_ACTIVE'],
            'PE_NON_EMERGENCY_LIGHTS_ACTIVE': cls.__constants['PE_NON_EMERGENCY_LIGHTS_ACTIVE'],
            'PE_NON_EMERGENCY_SOUND_ACTIVE': cls.__constants['PE_NON_EMERGENCY_SOUND_ACTIVE'],
        }

    @property
    def PE_UNAVAILABLE(self):
        """Message constant 'PE_UNAVAILABLE'."""
        return Metaclass_PrivilegedEventFlags.__constants['PE_UNAVAILABLE']

    @property
    def PE_EMERGENCY_RESPONSE(self):
        """Message constant 'PE_EMERGENCY_RESPONSE'."""
        return Metaclass_PrivilegedEventFlags.__constants['PE_EMERGENCY_RESPONSE']

    @property
    def PE_EMERGENCY_LIGHTS_ACTIVE(self):
        """Message constant 'PE_EMERGENCY_LIGHTS_ACTIVE'."""
        return Metaclass_PrivilegedEventFlags.__constants['PE_EMERGENCY_LIGHTS_ACTIVE']

    @property
    def PE_EMERGENCY_SOUND_ACTIVE(self):
        """Message constant 'PE_EMERGENCY_SOUND_ACTIVE'."""
        return Metaclass_PrivilegedEventFlags.__constants['PE_EMERGENCY_SOUND_ACTIVE']

    @property
    def PE_NON_EMERGENCY_LIGHTS_ACTIVE(self):
        """Message constant 'PE_NON_EMERGENCY_LIGHTS_ACTIVE'."""
        return Metaclass_PrivilegedEventFlags.__constants['PE_NON_EMERGENCY_LIGHTS_ACTIVE']

    @property
    def PE_NON_EMERGENCY_SOUND_ACTIVE(self):
        """Message constant 'PE_NON_EMERGENCY_SOUND_ACTIVE'."""
        return Metaclass_PrivilegedEventFlags.__constants['PE_NON_EMERGENCY_SOUND_ACTIVE']


class PrivilegedEventFlags(metaclass=Metaclass_PrivilegedEventFlags):
    """
    Message class 'PrivilegedEventFlags'.

    Constants:
      PE_UNAVAILABLE
      PE_EMERGENCY_RESPONSE
      PE_EMERGENCY_LIGHTS_ACTIVE
      PE_EMERGENCY_SOUND_ACTIVE
      PE_NON_EMERGENCY_LIGHTS_ACTIVE
      PE_NON_EMERGENCY_SOUND_ACTIVE
    """

    __slots__ = [
        '_privileged_event_flags',
    ]

    _fields_and_field_types = {
        'privileged_event_flags': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.privileged_event_flags = kwargs.get('privileged_event_flags', int())

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
        if self.privileged_event_flags != other.privileged_event_flags:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def privileged_event_flags(self):
        """Message field 'privileged_event_flags'."""
        return self._privileged_event_flags

    @privileged_event_flags.setter
    def privileged_event_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'privileged_event_flags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'privileged_event_flags' field must be an unsigned integer in [0, 65535]"
        self._privileged_event_flags = value
