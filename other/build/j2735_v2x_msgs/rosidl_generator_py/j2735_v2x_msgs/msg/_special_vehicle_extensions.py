# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/SpecialVehicleExtensions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpecialVehicleExtensions(type):
    """Metaclass of message 'SpecialVehicleExtensions'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_VEHICLE_ALERTS': 1,
        'HAS_DESCRIPTION': 2,
        'HAS_TRAILERS': 4,
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
                'j2735_v2x_msgs.msg.SpecialVehicleExtensions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__special_vehicle_extensions
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__special_vehicle_extensions
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__special_vehicle_extensions
            cls._TYPE_SUPPORT = module.type_support_msg__msg__special_vehicle_extensions
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__special_vehicle_extensions

            from j2735_v2x_msgs.msg import EmergencyDetails
            if EmergencyDetails.__class__._TYPE_SUPPORT is None:
                EmergencyDetails.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import EventDescription
            if EventDescription.__class__._TYPE_SUPPORT is None:
                EventDescription.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import TrailerData
            if TrailerData.__class__._TYPE_SUPPORT is None:
                TrailerData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_VEHICLE_ALERTS': cls.__constants['HAS_VEHICLE_ALERTS'],
            'HAS_DESCRIPTION': cls.__constants['HAS_DESCRIPTION'],
            'HAS_TRAILERS': cls.__constants['HAS_TRAILERS'],
        }

    @property
    def HAS_VEHICLE_ALERTS(self):
        """Message constant 'HAS_VEHICLE_ALERTS'."""
        return Metaclass_SpecialVehicleExtensions.__constants['HAS_VEHICLE_ALERTS']

    @property
    def HAS_DESCRIPTION(self):
        """Message constant 'HAS_DESCRIPTION'."""
        return Metaclass_SpecialVehicleExtensions.__constants['HAS_DESCRIPTION']

    @property
    def HAS_TRAILERS(self):
        """Message constant 'HAS_TRAILERS'."""
        return Metaclass_SpecialVehicleExtensions.__constants['HAS_TRAILERS']


class SpecialVehicleExtensions(metaclass=Metaclass_SpecialVehicleExtensions):
    """
    Message class 'SpecialVehicleExtensions'.

    Constants:
      HAS_VEHICLE_ALERTS
      HAS_DESCRIPTION
      HAS_TRAILERS
    """

    __slots__ = [
        '_presence_vector',
        '_vehicle_alerts',
        '_description',
        '_trailers',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint16',
        'vehicle_alerts': 'j2735_v2x_msgs/EmergencyDetails',
        'description': 'j2735_v2x_msgs/EventDescription',
        'trailers': 'j2735_v2x_msgs/TrailerData',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'EmergencyDetails'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'EventDescription'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'TrailerData'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import EmergencyDetails
        self.vehicle_alerts = kwargs.get('vehicle_alerts', EmergencyDetails())
        from j2735_v2x_msgs.msg import EventDescription
        self.description = kwargs.get('description', EventDescription())
        from j2735_v2x_msgs.msg import TrailerData
        self.trailers = kwargs.get('trailers', TrailerData())

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
        if self.vehicle_alerts != other.vehicle_alerts:
            return False
        if self.description != other.description:
            return False
        if self.trailers != other.trailers:
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
    def vehicle_alerts(self):
        """Message field 'vehicle_alerts'."""
        return self._vehicle_alerts

    @vehicle_alerts.setter
    def vehicle_alerts(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import EmergencyDetails
            assert \
                isinstance(value, EmergencyDetails), \
                "The 'vehicle_alerts' field must be a sub message of type 'EmergencyDetails'"
        self._vehicle_alerts = value

    @property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import EventDescription
            assert \
                isinstance(value, EventDescription), \
                "The 'description' field must be a sub message of type 'EventDescription'"
        self._description = value

    @property
    def trailers(self):
        """Message field 'trailers'."""
        return self._trailers

    @trailers.setter
    def trailers(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import TrailerData
            assert \
                isinstance(value, TrailerData), \
                "The 'trailers' field must be a sub message of type 'TrailerData'"
        self._trailers = value
