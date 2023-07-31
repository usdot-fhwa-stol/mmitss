# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TrafficControlRequestV01.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficControlRequestV01(type):
    """Metaclass of message 'TrafficControlRequestV01'."""

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
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.TrafficControlRequestV01')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_control_request_v01
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_control_request_v01
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_control_request_v01
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_control_request_v01
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_control_request_v01

            from j2735_v2x_msgs.msg import Id64b
            if Id64b.__class__._TYPE_SUPPORT is None:
                Id64b.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrafficControlBounds
            if TrafficControlBounds.__class__._TYPE_SUPPORT is None:
                TrafficControlBounds.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficControlRequestV01(metaclass=Metaclass_TrafficControlRequestV01):
    """Message class 'TrafficControlRequestV01'."""

    __slots__ = [
        '_reqid',
        '_reqseq',
        '_scale',
        '_bounds',
    ]

    _fields_and_field_types = {
        'reqid': 'j2735_v2x_msgs/Id64b',
        'reqseq': 'uint8',
        'scale': 'int8',
        'bounds': 'sequence<j2735_v2x_msgs/TrafficControlBounds>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Id64b'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrafficControlBounds')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import Id64b
        self.reqid = kwargs.get('reqid', Id64b())
        self.reqseq = kwargs.get('reqseq', int())
        self.scale = kwargs.get('scale', int())
        self.bounds = kwargs.get('bounds', [])

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
        if self.reqid != other.reqid:
            return False
        if self.reqseq != other.reqseq:
            return False
        if self.scale != other.scale:
            return False
        if self.bounds != other.bounds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def reqid(self):
        """Message field 'reqid'."""
        return self._reqid

    @reqid.setter
    def reqid(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Id64b
            assert \
                isinstance(value, Id64b), \
                "The 'reqid' field must be a sub message of type 'Id64b'"
        self._reqid = value

    @property
    def reqseq(self):
        """Message field 'reqseq'."""
        return self._reqseq

    @reqseq.setter
    def reqseq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reqseq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reqseq' field must be an unsigned integer in [0, 255]"
        self._reqseq = value

    @property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scale' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'scale' field must be an integer in [-128, 127]"
        self._scale = value

    @property
    def bounds(self):
        """Message field 'bounds'."""
        return self._bounds

    @bounds.setter
    def bounds(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrafficControlBounds
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
                 all(isinstance(v, TrafficControlBounds) for v in value) and
                 True), \
                "The 'bounds' field must be a set or sequence and each value of type 'TrafficControlBounds'"
        self._bounds = value
