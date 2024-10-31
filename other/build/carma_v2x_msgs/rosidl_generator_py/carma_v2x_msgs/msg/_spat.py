# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/SPAT.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SPAT(type):
    """Metaclass of message 'SPAT'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'carma_v2x_msgs.msg.SPAT')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__spat
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__spat
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__spat
            cls._TYPE_SUPPORT = module.type_support_msg__msg__spat
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__spat

            from carma_v2x_msgs.msg import IntersectionState
            if IntersectionState.__class__._TYPE_SUPPORT is None:
                IntersectionState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SPAT(metaclass=Metaclass_SPAT):
    """Message class 'SPAT'."""

    __slots__ = [
        '_time_stamp',
        '_time_stamp_exists',
        '_name',
        '_name_exists',
        '_intersection_state_list',
    ]

    _fields_and_field_types = {
        'time_stamp': 'uint32',
        'time_stamp_exists': 'boolean',
        'name': 'string',
        'name_exists': 'boolean',
        'intersection_state_list': 'sequence<carma_v2x_msgs/IntersectionState>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'IntersectionState')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_stamp = kwargs.get('time_stamp', int())
        self.time_stamp_exists = kwargs.get('time_stamp_exists', bool())
        self.name = kwargs.get('name', str())
        self.name_exists = kwargs.get('name_exists', bool())
        self.intersection_state_list = kwargs.get('intersection_state_list', [])

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
        if self.time_stamp != other.time_stamp:
            return False
        if self.time_stamp_exists != other.time_stamp_exists:
            return False
        if self.name != other.name:
            return False
        if self.name_exists != other.name_exists:
            return False
        if self.intersection_state_list != other.intersection_state_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_stamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_stamp' field must be an unsigned integer in [0, 4294967295]"
        self._time_stamp = value

    @property
    def time_stamp_exists(self):
        """Message field 'time_stamp_exists'."""
        return self._time_stamp_exists

    @time_stamp_exists.setter
    def time_stamp_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'time_stamp_exists' field must be of type 'bool'"
        self._time_stamp_exists = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def name_exists(self):
        """Message field 'name_exists'."""
        return self._name_exists

    @name_exists.setter
    def name_exists(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'name_exists' field must be of type 'bool'"
        self._name_exists = value

    @property
    def intersection_state_list(self):
        """Message field 'intersection_state_list'."""
        return self._intersection_state_list

    @intersection_state_list.setter
    def intersection_state_list(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import IntersectionState
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, IntersectionState) for v in value) and
                 True), \
                "The 'intersection_state_list' field must be a set or sequence and each value of type 'IntersectionState'"
        self._intersection_state_list = value
