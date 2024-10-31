# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/TrafficControlBounds.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficControlBounds(type):
    """Metaclass of message 'TrafficControlBounds'."""

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
                'carma_v2x_msgs.msg.TrafficControlBounds')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_control_bounds
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_control_bounds
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_control_bounds
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_control_bounds
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_control_bounds

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import OffsetPoint
            if OffsetPoint.__class__._TYPE_SUPPORT is None:
                OffsetPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficControlBounds(metaclass=Metaclass_TrafficControlBounds):
    """Message class 'TrafficControlBounds'."""

    __slots__ = [
        '_oldest',
        '_reflon',
        '_reflat',
        '_offsets',
    ]

    _fields_and_field_types = {
        'oldest': 'builtin_interfaces/Time',
        'reflon': 'double',
        'reflat': 'double',
        'offsets': 'carma_v2x_msgs/OffsetPoint[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'OffsetPoint'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.oldest = kwargs.get('oldest', Time())
        self.reflon = kwargs.get('reflon', float())
        self.reflat = kwargs.get('reflat', float())
        from carma_v2x_msgs.msg import OffsetPoint
        self.offsets = kwargs.get(
            'offsets',
            [OffsetPoint() for x in range(3)]
        )

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
        if self.oldest != other.oldest:
            return False
        if self.reflon != other.reflon:
            return False
        if self.reflat != other.reflat:
            return False
        if self.offsets != other.offsets:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def oldest(self):
        """Message field 'oldest'."""
        return self._oldest

    @oldest.setter
    def oldest(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'oldest' field must be a sub message of type 'Time'"
        self._oldest = value

    @property
    def reflon(self):
        """Message field 'reflon'."""
        return self._reflon

    @reflon.setter
    def reflon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reflon' field must be of type 'float'"
        self._reflon = value

    @property
    def reflat(self):
        """Message field 'reflat'."""
        return self._reflat

    @reflat.setter
    def reflat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reflat' field must be of type 'float'"
        self._reflat = value

    @property
    def offsets(self):
        """Message field 'offsets'."""
        return self._offsets

    @offsets.setter
    def offsets(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import OffsetPoint
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
                 len(value) == 3 and
                 all(isinstance(v, OffsetPoint) for v in value) and
                 True), \
                "The 'offsets' field must be a set or sequence with length 3 and each value of type 'OffsetPoint'"
        self._offsets = value
