# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/TrafficControlParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficControlParams(type):
    """Metaclass of message 'TrafficControlParams'."""

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
                'carma_v2x_msgs.msg.TrafficControlParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_control_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_control_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_control_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_control_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_control_params

            from carma_v2x_msgs.msg import TrafficControlDetail
            if TrafficControlDetail.__class__._TYPE_SUPPORT is None:
                TrafficControlDetail.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import TrafficControlSchedule
            if TrafficControlSchedule.__class__._TYPE_SUPPORT is None:
                TrafficControlSchedule.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrafficControlVehClass
            if TrafficControlVehClass.__class__._TYPE_SUPPORT is None:
                TrafficControlVehClass.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficControlParams(metaclass=Metaclass_TrafficControlParams):
    """Message class 'TrafficControlParams'."""

    __slots__ = [
        '_vclasses',
        '_schedule',
        '_regulatory',
        '_detail',
    ]

    _fields_and_field_types = {
        'vclasses': 'sequence<j2735_v2x_msgs/TrafficControlVehClass>',
        'schedule': 'carma_v2x_msgs/TrafficControlSchedule',
        'regulatory': 'boolean',
        'detail': 'carma_v2x_msgs/TrafficControlDetail',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrafficControlVehClass')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'TrafficControlSchedule'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'TrafficControlDetail'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vclasses = kwargs.get('vclasses', [])
        from carma_v2x_msgs.msg import TrafficControlSchedule
        self.schedule = kwargs.get('schedule', TrafficControlSchedule())
        self.regulatory = kwargs.get('regulatory', bool())
        from carma_v2x_msgs.msg import TrafficControlDetail
        self.detail = kwargs.get('detail', TrafficControlDetail())

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
        if self.vclasses != other.vclasses:
            return False
        if self.schedule != other.schedule:
            return False
        if self.regulatory != other.regulatory:
            return False
        if self.detail != other.detail:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def vclasses(self):
        """Message field 'vclasses'."""
        return self._vclasses

    @vclasses.setter
    def vclasses(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrafficControlVehClass
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
                 all(isinstance(v, TrafficControlVehClass) for v in value) and
                 True), \
                "The 'vclasses' field must be a set or sequence and each value of type 'TrafficControlVehClass'"
        self._vclasses = value

    @property
    def schedule(self):
        """Message field 'schedule'."""
        return self._schedule

    @schedule.setter
    def schedule(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import TrafficControlSchedule
            assert \
                isinstance(value, TrafficControlSchedule), \
                "The 'schedule' field must be a sub message of type 'TrafficControlSchedule'"
        self._schedule = value

    @property
    def regulatory(self):
        """Message field 'regulatory'."""
        return self._regulatory

    @regulatory.setter
    def regulatory(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'regulatory' field must be of type 'bool'"
        self._regulatory = value

    @property
    def detail(self):
        """Message field 'detail'."""
        return self._detail

    @detail.setter
    def detail(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import TrafficControlDetail
            assert \
                isinstance(value, TrafficControlDetail), \
                "The 'detail' field must be a sub message of type 'TrafficControlDetail'"
        self._detail = value
