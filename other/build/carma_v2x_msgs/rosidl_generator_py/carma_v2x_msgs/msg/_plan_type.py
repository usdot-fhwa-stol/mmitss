# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/PlanType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanType(type):
    """Metaclass of message 'PlanType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'CHANGE_LANE_LEFT': 1,
        'CHANGE_LANE_RIGHT': 2,
        'JOIN_PLATOON_AT_REAR': 3,
        'PLATOON_FOLLOWER_JOIN': 4,
        'JOIN_PLATOON_FROM_FRONT': 5,
        'PLATOON_FRONT_JOIN': 6,
        'CUT_IN_FROM_SIDE': 7,
        'PLATOON_CUT_IN_JOIN': 8,
        'STOP_CREATE_GAP': 9,
        'CUT_IN_FRONT_DONE': 10,
        'CUT_IN_MID_OR_REAR_DONE': 11,
        'PLATOON_DEPARTURE': 12,
        'DELETE_MEMBER': 13,
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
                'carma_v2x_msgs.msg.PlanType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plan_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plan_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plan_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plan_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plan_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'CHANGE_LANE_LEFT': cls.__constants['CHANGE_LANE_LEFT'],
            'CHANGE_LANE_RIGHT': cls.__constants['CHANGE_LANE_RIGHT'],
            'JOIN_PLATOON_AT_REAR': cls.__constants['JOIN_PLATOON_AT_REAR'],
            'PLATOON_FOLLOWER_JOIN': cls.__constants['PLATOON_FOLLOWER_JOIN'],
            'JOIN_PLATOON_FROM_FRONT': cls.__constants['JOIN_PLATOON_FROM_FRONT'],
            'PLATOON_FRONT_JOIN': cls.__constants['PLATOON_FRONT_JOIN'],
            'CUT_IN_FROM_SIDE': cls.__constants['CUT_IN_FROM_SIDE'],
            'PLATOON_CUT_IN_JOIN': cls.__constants['PLATOON_CUT_IN_JOIN'],
            'STOP_CREATE_GAP': cls.__constants['STOP_CREATE_GAP'],
            'CUT_IN_FRONT_DONE': cls.__constants['CUT_IN_FRONT_DONE'],
            'CUT_IN_MID_OR_REAR_DONE': cls.__constants['CUT_IN_MID_OR_REAR_DONE'],
            'PLATOON_DEPARTURE': cls.__constants['PLATOON_DEPARTURE'],
            'DELETE_MEMBER': cls.__constants['DELETE_MEMBER'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_PlanType.__constants['UNKNOWN']

    @property
    def CHANGE_LANE_LEFT(self):
        """Message constant 'CHANGE_LANE_LEFT'."""
        return Metaclass_PlanType.__constants['CHANGE_LANE_LEFT']

    @property
    def CHANGE_LANE_RIGHT(self):
        """Message constant 'CHANGE_LANE_RIGHT'."""
        return Metaclass_PlanType.__constants['CHANGE_LANE_RIGHT']

    @property
    def JOIN_PLATOON_AT_REAR(self):
        """Message constant 'JOIN_PLATOON_AT_REAR'."""
        return Metaclass_PlanType.__constants['JOIN_PLATOON_AT_REAR']

    @property
    def PLATOON_FOLLOWER_JOIN(self):
        """Message constant 'PLATOON_FOLLOWER_JOIN'."""
        return Metaclass_PlanType.__constants['PLATOON_FOLLOWER_JOIN']

    @property
    def JOIN_PLATOON_FROM_FRONT(self):
        """Message constant 'JOIN_PLATOON_FROM_FRONT'."""
        return Metaclass_PlanType.__constants['JOIN_PLATOON_FROM_FRONT']

    @property
    def PLATOON_FRONT_JOIN(self):
        """Message constant 'PLATOON_FRONT_JOIN'."""
        return Metaclass_PlanType.__constants['PLATOON_FRONT_JOIN']

    @property
    def CUT_IN_FROM_SIDE(self):
        """Message constant 'CUT_IN_FROM_SIDE'."""
        return Metaclass_PlanType.__constants['CUT_IN_FROM_SIDE']

    @property
    def PLATOON_CUT_IN_JOIN(self):
        """Message constant 'PLATOON_CUT_IN_JOIN'."""
        return Metaclass_PlanType.__constants['PLATOON_CUT_IN_JOIN']

    @property
    def STOP_CREATE_GAP(self):
        """Message constant 'STOP_CREATE_GAP'."""
        return Metaclass_PlanType.__constants['STOP_CREATE_GAP']

    @property
    def CUT_IN_FRONT_DONE(self):
        """Message constant 'CUT_IN_FRONT_DONE'."""
        return Metaclass_PlanType.__constants['CUT_IN_FRONT_DONE']

    @property
    def CUT_IN_MID_OR_REAR_DONE(self):
        """Message constant 'CUT_IN_MID_OR_REAR_DONE'."""
        return Metaclass_PlanType.__constants['CUT_IN_MID_OR_REAR_DONE']

    @property
    def PLATOON_DEPARTURE(self):
        """Message constant 'PLATOON_DEPARTURE'."""
        return Metaclass_PlanType.__constants['PLATOON_DEPARTURE']

    @property
    def DELETE_MEMBER(self):
        """Message constant 'DELETE_MEMBER'."""
        return Metaclass_PlanType.__constants['DELETE_MEMBER']


class PlanType(metaclass=Metaclass_PlanType):
    """
    Message class 'PlanType'.

    Constants:
      UNKNOWN
      CHANGE_LANE_LEFT
      CHANGE_LANE_RIGHT
      JOIN_PLATOON_AT_REAR
      PLATOON_FOLLOWER_JOIN
      JOIN_PLATOON_FROM_FRONT
      PLATOON_FRONT_JOIN
      CUT_IN_FROM_SIDE
      PLATOON_CUT_IN_JOIN
      STOP_CREATE_GAP
      CUT_IN_FRONT_DONE
      CUT_IN_MID_OR_REAR_DONE
      PLATOON_DEPARTURE
      DELETE_MEMBER
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
