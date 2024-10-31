# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DisabledVehicle(type):
    """Metaclass of message 'DisabledVehicle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_LOCATION_DETAILS': 1,
        'STATUS_DETAILS_MIN': 532,
        'STATUS_DETAILS_MAX': 541,
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
                'j2735_v2x_msgs.msg.DisabledVehicle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__disabled_vehicle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__disabled_vehicle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__disabled_vehicle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__disabled_vehicle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__disabled_vehicle

            from j2735_v2x_msgs.msg import ITISGenericLocations
            if ITISGenericLocations.__class__._TYPE_SUPPORT is None:
                ITISGenericLocations.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import ITIScodes
            if ITIScodes.__class__._TYPE_SUPPORT is None:
                ITIScodes.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_LOCATION_DETAILS': cls.__constants['HAS_LOCATION_DETAILS'],
            'STATUS_DETAILS_MIN': cls.__constants['STATUS_DETAILS_MIN'],
            'STATUS_DETAILS_MAX': cls.__constants['STATUS_DETAILS_MAX'],
        }

    @property
    def HAS_LOCATION_DETAILS(self):
        """Message constant 'HAS_LOCATION_DETAILS'."""
        return Metaclass_DisabledVehicle.__constants['HAS_LOCATION_DETAILS']

    @property
    def STATUS_DETAILS_MIN(self):
        """Message constant 'STATUS_DETAILS_MIN'."""
        return Metaclass_DisabledVehicle.__constants['STATUS_DETAILS_MIN']

    @property
    def STATUS_DETAILS_MAX(self):
        """Message constant 'STATUS_DETAILS_MAX'."""
        return Metaclass_DisabledVehicle.__constants['STATUS_DETAILS_MAX']


class DisabledVehicle(metaclass=Metaclass_DisabledVehicle):
    """
    Message class 'DisabledVehicle'.

    Constants:
      HAS_LOCATION_DETAILS
      STATUS_DETAILS_MIN
      STATUS_DETAILS_MAX
    """

    __slots__ = [
        '_presence_vector',
        '_status_details',
        '_location_details',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'status_details': 'j2735_v2x_msgs/ITIScodes',
        'location_details': 'j2735_v2x_msgs/ITISGenericLocations',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ITIScodes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'ITISGenericLocations'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import ITIScodes
        self.status_details = kwargs.get('status_details', ITIScodes())
        from j2735_v2x_msgs.msg import ITISGenericLocations
        self.location_details = kwargs.get('location_details', ITISGenericLocations())

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
        if self.presence_vector != other.presence_vector:
            return False
        if self.status_details != other.status_details:
            return False
        if self.location_details != other.location_details:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def presence_vector(self):
        """Message field 'presence_vector'."""
        return self._presence_vector

    @presence_vector.setter
    def presence_vector(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'presence_vector' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'presence_vector' field must be an unsigned integer in [0, 65535]"
        self._presence_vector = value

    @property
    def status_details(self):
        """Message field 'status_details'."""
        return self._status_details

    @status_details.setter
    def status_details(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ITIScodes
            assert \
                isinstance(value, ITIScodes), \
                "The 'status_details' field must be a sub message of type 'ITIScodes'"
        self._status_details = value

    @property
    def location_details(self):
        """Message field 'location_details'."""
        return self._location_details

    @location_details.setter
    def location_details(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import ITISGenericLocations
            assert \
                isinstance(value, ITISGenericLocations), \
                "The 'location_details' field must be a sub message of type 'ITISGenericLocations'"
        self._location_details = value
