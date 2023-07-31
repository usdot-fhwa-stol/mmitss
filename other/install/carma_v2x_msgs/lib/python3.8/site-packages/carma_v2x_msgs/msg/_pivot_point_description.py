# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/PivotPointDescription.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PivotPointDescription(type):
    """Metaclass of message 'PivotPointDescription'."""

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
                'carma_v2x_msgs.msg.PivotPointDescription')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pivot_point_description
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pivot_point_description
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pivot_point_description
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pivot_point_description
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pivot_point_description

            from carma_v2x_msgs.msg import Angle
            if Angle.__class__._TYPE_SUPPORT is None:
                Angle.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import OffsetB11
            if OffsetB11.__class__._TYPE_SUPPORT is None:
                OffsetB11.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import PivotingAllowed
            if PivotingAllowed.__class__._TYPE_SUPPORT is None:
                PivotingAllowed.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PivotPointDescription(metaclass=Metaclass_PivotPointDescription):
    """Message class 'PivotPointDescription'."""

    __slots__ = [
        '_pivot_offset',
        '_pivot_angle',
        '_pivots',
    ]

    _fields_and_field_types = {
        'pivot_offset': 'carma_v2x_msgs/OffsetB11',
        'pivot_angle': 'carma_v2x_msgs/Angle',
        'pivots': 'j2735_v2x_msgs/PivotingAllowed',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'OffsetB11'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'Angle'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'PivotingAllowed'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_v2x_msgs.msg import OffsetB11
        self.pivot_offset = kwargs.get('pivot_offset', OffsetB11())
        from carma_v2x_msgs.msg import Angle
        self.pivot_angle = kwargs.get('pivot_angle', Angle())
        from j2735_v2x_msgs.msg import PivotingAllowed
        self.pivots = kwargs.get('pivots', PivotingAllowed())

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
        if self.pivot_offset != other.pivot_offset:
            return False
        if self.pivot_angle != other.pivot_angle:
            return False
        if self.pivots != other.pivots:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pivot_offset(self):
        """Message field 'pivot_offset'."""
        return self._pivot_offset

    @pivot_offset.setter
    def pivot_offset(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import OffsetB11
            assert \
                isinstance(value, OffsetB11), \
                "The 'pivot_offset' field must be a sub message of type 'OffsetB11'"
        self._pivot_offset = value

    @property
    def pivot_angle(self):
        """Message field 'pivot_angle'."""
        return self._pivot_angle

    @pivot_angle.setter
    def pivot_angle(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import Angle
            assert \
                isinstance(value, Angle), \
                "The 'pivot_angle' field must be a sub message of type 'Angle'"
        self._pivot_angle = value

    @property
    def pivots(self):
        """Message field 'pivots'."""
        return self._pivots

    @pivots.setter
    def pivots(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import PivotingAllowed
            assert \
                isinstance(value, PivotingAllowed), \
                "The 'pivots' field must be a sub message of type 'PivotingAllowed'"
        self._pivots = value
