# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/MovementPhaseState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MovementPhaseState(type):
    """Metaclass of message 'MovementPhaseState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'DARK': 1,
        'STOP_THEN_PROCEED': 2,
        'STOP_AND_REMAIN': 3,
        'PRE_MOVEMENT': 4,
        'PERMISSIVE_MOVEMENT_ALLOWED': 5,
        'PROTECTED_MOVEMENT_ALLOWED': 6,
        'PERMISSIVE_CLEARANCE': 7,
        'PROTECTED_CLEARANCE': 8,
        'CAUTION_CONFLICTING_TRAFFIC': 9,
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
                'j2735_v2x_msgs.msg.MovementPhaseState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__movement_phase_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__movement_phase_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__movement_phase_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__movement_phase_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__movement_phase_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'DARK': cls.__constants['DARK'],
            'STOP_THEN_PROCEED': cls.__constants['STOP_THEN_PROCEED'],
            'STOP_AND_REMAIN': cls.__constants['STOP_AND_REMAIN'],
            'PRE_MOVEMENT': cls.__constants['PRE_MOVEMENT'],
            'PERMISSIVE_MOVEMENT_ALLOWED': cls.__constants['PERMISSIVE_MOVEMENT_ALLOWED'],
            'PROTECTED_MOVEMENT_ALLOWED': cls.__constants['PROTECTED_MOVEMENT_ALLOWED'],
            'PERMISSIVE_CLEARANCE': cls.__constants['PERMISSIVE_CLEARANCE'],
            'PROTECTED_CLEARANCE': cls.__constants['PROTECTED_CLEARANCE'],
            'CAUTION_CONFLICTING_TRAFFIC': cls.__constants['CAUTION_CONFLICTING_TRAFFIC'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_MovementPhaseState.__constants['UNAVAILABLE']

    @property
    def DARK(self):
        """Message constant 'DARK'."""
        return Metaclass_MovementPhaseState.__constants['DARK']

    @property
    def STOP_THEN_PROCEED(self):
        """Message constant 'STOP_THEN_PROCEED'."""
        return Metaclass_MovementPhaseState.__constants['STOP_THEN_PROCEED']

    @property
    def STOP_AND_REMAIN(self):
        """Message constant 'STOP_AND_REMAIN'."""
        return Metaclass_MovementPhaseState.__constants['STOP_AND_REMAIN']

    @property
    def PRE_MOVEMENT(self):
        """Message constant 'PRE_MOVEMENT'."""
        return Metaclass_MovementPhaseState.__constants['PRE_MOVEMENT']

    @property
    def PERMISSIVE_MOVEMENT_ALLOWED(self):
        """Message constant 'PERMISSIVE_MOVEMENT_ALLOWED'."""
        return Metaclass_MovementPhaseState.__constants['PERMISSIVE_MOVEMENT_ALLOWED']

    @property
    def PROTECTED_MOVEMENT_ALLOWED(self):
        """Message constant 'PROTECTED_MOVEMENT_ALLOWED'."""
        return Metaclass_MovementPhaseState.__constants['PROTECTED_MOVEMENT_ALLOWED']

    @property
    def PERMISSIVE_CLEARANCE(self):
        """Message constant 'PERMISSIVE_CLEARANCE'."""
        return Metaclass_MovementPhaseState.__constants['PERMISSIVE_CLEARANCE']

    @property
    def PROTECTED_CLEARANCE(self):
        """Message constant 'PROTECTED_CLEARANCE'."""
        return Metaclass_MovementPhaseState.__constants['PROTECTED_CLEARANCE']

    @property
    def CAUTION_CONFLICTING_TRAFFIC(self):
        """Message constant 'CAUTION_CONFLICTING_TRAFFIC'."""
        return Metaclass_MovementPhaseState.__constants['CAUTION_CONFLICTING_TRAFFIC']


class MovementPhaseState(metaclass=Metaclass_MovementPhaseState):
    """
    Message class 'MovementPhaseState'.

    Constants:
      UNAVAILABLE
      DARK
      STOP_THEN_PROCEED
      STOP_AND_REMAIN
      PRE_MOVEMENT
      PERMISSIVE_MOVEMENT_ALLOWED
      PROTECTED_MOVEMENT_ALLOWED
      PERMISSIVE_CLEARANCE
      PROTECTED_CLEARANCE
      CAUTION_CONFLICTING_TRAFFIC
    """

    __slots__ = [
        '_movement_phase_state',
    ]

    _fields_and_field_types = {
        'movement_phase_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.movement_phase_state = kwargs.get('movement_phase_state', int())

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
        if self.movement_phase_state != other.movement_phase_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def movement_phase_state(self):
        """Message field 'movement_phase_state'."""
        return self._movement_phase_state

    @movement_phase_state.setter
    def movement_phase_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'movement_phase_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'movement_phase_state' field must be an unsigned integer in [0, 255]"
        self._movement_phase_state = value
