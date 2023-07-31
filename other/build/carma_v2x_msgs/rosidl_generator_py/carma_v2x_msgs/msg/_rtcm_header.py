# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/RTCMHeader.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RTCMHeader(type):
    """Metaclass of message 'RTCMHeader'."""

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
                'carma_v2x_msgs.msg.RTCMHeader')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rtcm_header
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rtcm_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rtcm_header
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rtcm_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rtcm_header

            from carma_v2x_msgs.msg import OffsetB09
            if OffsetB09.__class__._TYPE_SUPPORT is None:
                OffsetB09.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import OffsetB10
            if OffsetB10.__class__._TYPE_SUPPORT is None:
                OffsetB10.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import OffsetB12
            if OffsetB12.__class__._TYPE_SUPPORT is None:
                OffsetB12.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import GNSSStatus
            if GNSSStatus.__class__._TYPE_SUPPORT is None:
                GNSSStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RTCMHeader(metaclass=Metaclass_RTCMHeader):
    """Message class 'RTCMHeader'."""

    __slots__ = [
        '_status',
        '_ant_offset_x',
        '_ant_offset_y',
        '_ant_offset_z',
    ]

    _fields_and_field_types = {
        'status': 'j2735_v2x_msgs/GNSSStatus',
        'ant_offset_x': 'carma_v2x_msgs/OffsetB12',
        'ant_offset_y': 'carma_v2x_msgs/OffsetB09',
        'ant_offset_z': 'carma_v2x_msgs/OffsetB10',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'GNSSStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'OffsetB12'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'OffsetB09'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'OffsetB10'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from j2735_v2x_msgs.msg import GNSSStatus
        self.status = kwargs.get('status', GNSSStatus())
        from carma_v2x_msgs.msg import OffsetB12
        self.ant_offset_x = kwargs.get('ant_offset_x', OffsetB12())
        from carma_v2x_msgs.msg import OffsetB09
        self.ant_offset_y = kwargs.get('ant_offset_y', OffsetB09())
        from carma_v2x_msgs.msg import OffsetB10
        self.ant_offset_z = kwargs.get('ant_offset_z', OffsetB10())

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
        if self.status != other.status:
            return False
        if self.ant_offset_x != other.ant_offset_x:
            return False
        if self.ant_offset_y != other.ant_offset_y:
            return False
        if self.ant_offset_z != other.ant_offset_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import GNSSStatus
            assert \
                isinstance(value, GNSSStatus), \
                "The 'status' field must be a sub message of type 'GNSSStatus'"
        self._status = value

    @property
    def ant_offset_x(self):
        """Message field 'ant_offset_x'."""
        return self._ant_offset_x

    @ant_offset_x.setter
    def ant_offset_x(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import OffsetB12
            assert \
                isinstance(value, OffsetB12), \
                "The 'ant_offset_x' field must be a sub message of type 'OffsetB12'"
        self._ant_offset_x = value

    @property
    def ant_offset_y(self):
        """Message field 'ant_offset_y'."""
        return self._ant_offset_y

    @ant_offset_y.setter
    def ant_offset_y(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import OffsetB09
            assert \
                isinstance(value, OffsetB09), \
                "The 'ant_offset_y' field must be a sub message of type 'OffsetB09'"
        self._ant_offset_y = value

    @property
    def ant_offset_z(self):
        """Message field 'ant_offset_z'."""
        return self._ant_offset_z

    @ant_offset_z.setter
    def ant_offset_z(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import OffsetB10
            assert \
                isinstance(value, OffsetB10), \
                "The 'ant_offset_z' field must be a sub message of type 'OffsetB10'"
        self._ant_offset_z = value
