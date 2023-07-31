# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/WeatherProbe.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WeatherProbe(type):
    """Metaclass of message 'WeatherProbe'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_AIR_TEMP': 1,
        'HAS_AIR_PRESSURE': 2,
        'HAS_RAIN_RATES': 4,
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
                'j2735_v2x_msgs.msg.WeatherProbe')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__weather_probe
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__weather_probe
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__weather_probe
            cls._TYPE_SUPPORT = module.type_support_msg__msg__weather_probe
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__weather_probe

            from j2735_v2x_msgs.msg import AmbientAirPressure
            if AmbientAirPressure.__class__._TYPE_SUPPORT is None:
                AmbientAirPressure.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import AmbientAirTemperature
            if AmbientAirTemperature.__class__._TYPE_SUPPORT is None:
                AmbientAirTemperature.__class__.__import_type_support__()

            from j2735_v2x_msgs.msg import WiperSet
            if WiperSet.__class__._TYPE_SUPPORT is None:
                WiperSet.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_AIR_TEMP': cls.__constants['HAS_AIR_TEMP'],
            'HAS_AIR_PRESSURE': cls.__constants['HAS_AIR_PRESSURE'],
            'HAS_RAIN_RATES': cls.__constants['HAS_RAIN_RATES'],
        }

    @property
    def HAS_AIR_TEMP(self):
        """Message constant 'HAS_AIR_TEMP'."""
        return Metaclass_WeatherProbe.__constants['HAS_AIR_TEMP']

    @property
    def HAS_AIR_PRESSURE(self):
        """Message constant 'HAS_AIR_PRESSURE'."""
        return Metaclass_WeatherProbe.__constants['HAS_AIR_PRESSURE']

    @property
    def HAS_RAIN_RATES(self):
        """Message constant 'HAS_RAIN_RATES'."""
        return Metaclass_WeatherProbe.__constants['HAS_RAIN_RATES']


class WeatherProbe(metaclass=Metaclass_WeatherProbe):
    """
    Message class 'WeatherProbe'.

    Constants:
      HAS_AIR_TEMP
      HAS_AIR_PRESSURE
      HAS_RAIN_RATES
    """

    __slots__ = [
        '_presence_vector',
        '_air_temp',
        '_air_pressure',
        '_rain_rates',
    ]

    _fields_and_field_types = {
        'presence_vector': 'uint32',
        'air_temp': 'j2735_v2x_msgs/AmbientAirTemperature',
        'air_pressure': 'j2735_v2x_msgs/AmbientAirPressure',
        'rain_rates': 'j2735_v2x_msgs/WiperSet',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AmbientAirTemperature'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'AmbientAirPressure'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'WiperSet'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.presence_vector = kwargs.get('presence_vector', int())
        from j2735_v2x_msgs.msg import AmbientAirTemperature
        self.air_temp = kwargs.get('air_temp', AmbientAirTemperature())
        from j2735_v2x_msgs.msg import AmbientAirPressure
        self.air_pressure = kwargs.get('air_pressure', AmbientAirPressure())
        from j2735_v2x_msgs.msg import WiperSet
        self.rain_rates = kwargs.get('rain_rates', WiperSet())

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
        if self.air_temp != other.air_temp:
            return False
        if self.air_pressure != other.air_pressure:
            return False
        if self.rain_rates != other.rain_rates:
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
            assert value >= 0 and value < 4294967296, \
                "The 'presence_vector' field must be an unsigned integer in [0, 4294967295]"
        self._presence_vector = value

    @property
    def air_temp(self):
        """Message field 'air_temp'."""
        return self._air_temp

    @air_temp.setter
    def air_temp(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AmbientAirTemperature
            assert \
                isinstance(value, AmbientAirTemperature), \
                "The 'air_temp' field must be a sub message of type 'AmbientAirTemperature'"
        self._air_temp = value

    @property
    def air_pressure(self):
        """Message field 'air_pressure'."""
        return self._air_pressure

    @air_pressure.setter
    def air_pressure(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import AmbientAirPressure
            assert \
                isinstance(value, AmbientAirPressure), \
                "The 'air_pressure' field must be a sub message of type 'AmbientAirPressure'"
        self._air_pressure = value

    @property
    def rain_rates(self):
        """Message field 'rain_rates'."""
        return self._rain_rates

    @rain_rates.setter
    def rain_rates(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import WiperSet
            assert \
                isinstance(value, WiperSet), \
                "The 'rain_rates' field must be a sub message of type 'WiperSet'"
        self._rain_rates = value
