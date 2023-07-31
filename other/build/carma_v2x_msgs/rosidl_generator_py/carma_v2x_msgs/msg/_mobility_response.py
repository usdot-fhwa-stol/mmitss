# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/MobilityResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MobilityResponse(type):
    """Metaclass of message 'MobilityResponse'."""

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
                'carma_v2x_msgs.msg.MobilityResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mobility_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mobility_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mobility_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mobility_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mobility_response

            from carma_v2x_msgs.msg import MobilityHeader
            if MobilityHeader.__class__._TYPE_SUPPORT is None:
                MobilityHeader.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import MobilityReason
            if MobilityReason.__class__._TYPE_SUPPORT is None:
                MobilityReason.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import MobilityRepeat
            if MobilityRepeat.__class__._TYPE_SUPPORT is None:
                MobilityRepeat.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import PlanType
            if PlanType.__class__._TYPE_SUPPORT is None:
                PlanType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MobilityResponse(metaclass=Metaclass_MobilityResponse):
    """Message class 'MobilityResponse'."""

    __slots__ = [
        '_m_header',
        '_urgency',
        '_is_accepted',
        '_plan_type',
        '_reason',
        '_repeat',
    ]

    _fields_and_field_types = {
        'm_header': 'carma_v2x_msgs/MobilityHeader',
        'urgency': 'uint16',
        'is_accepted': 'boolean',
        'plan_type': 'carma_v2x_msgs/PlanType',
        'reason': 'carma_v2x_msgs/MobilityReason',
        'repeat': 'carma_v2x_msgs/MobilityRepeat',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'MobilityHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'PlanType'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'MobilityReason'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'MobilityRepeat'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_v2x_msgs.msg import MobilityHeader
        self.m_header = kwargs.get('m_header', MobilityHeader())
        self.urgency = kwargs.get('urgency', int())
        self.is_accepted = kwargs.get('is_accepted', bool())
        from carma_v2x_msgs.msg import PlanType
        self.plan_type = kwargs.get('plan_type', PlanType())
        from carma_v2x_msgs.msg import MobilityReason
        self.reason = kwargs.get('reason', MobilityReason())
        from carma_v2x_msgs.msg import MobilityRepeat
        self.repeat = kwargs.get('repeat', MobilityRepeat())

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
        if self.m_header != other.m_header:
            return False
        if self.urgency != other.urgency:
            return False
        if self.is_accepted != other.is_accepted:
            return False
        if self.plan_type != other.plan_type:
            return False
        if self.reason != other.reason:
            return False
        if self.repeat != other.repeat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def m_header(self):
        """Message field 'm_header'."""
        return self._m_header

    @m_header.setter
    def m_header(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import MobilityHeader
            assert \
                isinstance(value, MobilityHeader), \
                "The 'm_header' field must be a sub message of type 'MobilityHeader'"
        self._m_header = value

    @property
    def urgency(self):
        """Message field 'urgency'."""
        return self._urgency

    @urgency.setter
    def urgency(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'urgency' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'urgency' field must be an unsigned integer in [0, 65535]"
        self._urgency = value

    @property
    def is_accepted(self):
        """Message field 'is_accepted'."""
        return self._is_accepted

    @is_accepted.setter
    def is_accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_accepted' field must be of type 'bool'"
        self._is_accepted = value

    @property
    def plan_type(self):
        """Message field 'plan_type'."""
        return self._plan_type

    @plan_type.setter
    def plan_type(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import PlanType
            assert \
                isinstance(value, PlanType), \
                "The 'plan_type' field must be a sub message of type 'PlanType'"
        self._plan_type = value

    @property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import MobilityReason
            assert \
                isinstance(value, MobilityReason), \
                "The 'reason' field must be a sub message of type 'MobilityReason'"
        self._reason = value

    @property
    def repeat(self):
        """Message field 'repeat'."""
        return self._repeat

    @repeat.setter
    def repeat(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import MobilityRepeat
            assert \
                isinstance(value, MobilityRepeat), \
                "The 'repeat' field must be a sub message of type 'MobilityRepeat'"
        self._repeat = value
