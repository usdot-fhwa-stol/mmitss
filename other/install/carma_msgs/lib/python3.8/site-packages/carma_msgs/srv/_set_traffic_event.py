# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_msgs:srv/SetTrafficEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetTrafficEvent_Request(type):
    """Metaclass of message 'SetTrafficEvent_Request'."""

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
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.srv.SetTrafficEvent_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_traffic_event__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_traffic_event__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_traffic_event__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_traffic_event__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_traffic_event__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTrafficEvent_Request(metaclass=Metaclass_SetTrafficEvent_Request):
    """Message class 'SetTrafficEvent_Request'."""

    __slots__ = [
        '_up_track',
        '_down_track',
        '_minimum_gap',
        '_advisory_speed',
    ]

    _fields_and_field_types = {
        'up_track': 'double',
        'down_track': 'double',
        'minimum_gap': 'double',
        'advisory_speed': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.up_track = kwargs.get('up_track', float())
        self.down_track = kwargs.get('down_track', float())
        self.minimum_gap = kwargs.get('minimum_gap', float())
        self.advisory_speed = kwargs.get('advisory_speed', float())

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
        if self.up_track != other.up_track:
            return False
        if self.down_track != other.down_track:
            return False
        if self.minimum_gap != other.minimum_gap:
            return False
        if self.advisory_speed != other.advisory_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def up_track(self):
        """Message field 'up_track'."""
        return self._up_track

    @up_track.setter
    def up_track(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'up_track' field must be of type 'float'"
        self._up_track = value

    @property
    def down_track(self):
        """Message field 'down_track'."""
        return self._down_track

    @down_track.setter
    def down_track(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'down_track' field must be of type 'float'"
        self._down_track = value

    @property
    def minimum_gap(self):
        """Message field 'minimum_gap'."""
        return self._minimum_gap

    @minimum_gap.setter
    def minimum_gap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'minimum_gap' field must be of type 'float'"
        self._minimum_gap = value

    @property
    def advisory_speed(self):
        """Message field 'advisory_speed'."""
        return self._advisory_speed

    @advisory_speed.setter
    def advisory_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'advisory_speed' field must be of type 'float'"
        self._advisory_speed = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetTrafficEvent_Response(type):
    """Metaclass of message 'SetTrafficEvent_Response'."""

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
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.srv.SetTrafficEvent_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_traffic_event__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_traffic_event__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_traffic_event__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_traffic_event__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_traffic_event__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTrafficEvent_Response(metaclass=Metaclass_SetTrafficEvent_Response):
    """Message class 'SetTrafficEvent_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SetTrafficEvent(type):
    """Metaclass of service 'SetTrafficEvent'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_msgs.srv.SetTrafficEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_traffic_event

            from carma_msgs.srv import _set_traffic_event
            if _set_traffic_event.Metaclass_SetTrafficEvent_Request._TYPE_SUPPORT is None:
                _set_traffic_event.Metaclass_SetTrafficEvent_Request.__import_type_support__()
            if _set_traffic_event.Metaclass_SetTrafficEvent_Response._TYPE_SUPPORT is None:
                _set_traffic_event.Metaclass_SetTrafficEvent_Response.__import_type_support__()


class SetTrafficEvent(metaclass=Metaclass_SetTrafficEvent):
    from carma_msgs.srv._set_traffic_event import SetTrafficEvent_Request as Request
    from carma_msgs.srv._set_traffic_event import SetTrafficEvent_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
