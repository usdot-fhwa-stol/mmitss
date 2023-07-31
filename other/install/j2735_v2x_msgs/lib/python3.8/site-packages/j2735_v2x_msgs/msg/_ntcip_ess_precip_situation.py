# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/NTCIPEssPrecipSituation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NTCIPEssPrecipSituation(type):
    """Metaclass of message 'NTCIPEssPrecipSituation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OTHER': 1,
        'UNKNOWN': 2,
        'NO_PRECIPITATION': 3,
        'UNIDENTIFIED_SLIGHT': 4,
        'UNIDENTIFIED_MODERATE': 5,
        'UNIDENTIFIED_HEAVY': 6,
        'SNOW_SLIGHT': 7,
        'SNOW_MODERATE': 8,
        'SNOW_HEAVY': 9,
        'RAIN_SLIGHT': 10,
        'RAIN_MODERATE': 11,
        'RAIN_HEAVY': 12,
        'FROZEN_PRECIPITATION_SLIGHT': 13,
        'FROZEN_PRECIPITATION_MODERATE': 14,
        'FROZEN_PRECIPITATION_HEAVY': 15,
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
                'j2735_v2x_msgs.msg.NTCIPEssPrecipSituation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ntcip_ess_precip_situation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ntcip_ess_precip_situation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ntcip_ess_precip_situation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ntcip_ess_precip_situation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ntcip_ess_precip_situation

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OTHER': cls.__constants['OTHER'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'NO_PRECIPITATION': cls.__constants['NO_PRECIPITATION'],
            'UNIDENTIFIED_SLIGHT': cls.__constants['UNIDENTIFIED_SLIGHT'],
            'UNIDENTIFIED_MODERATE': cls.__constants['UNIDENTIFIED_MODERATE'],
            'UNIDENTIFIED_HEAVY': cls.__constants['UNIDENTIFIED_HEAVY'],
            'SNOW_SLIGHT': cls.__constants['SNOW_SLIGHT'],
            'SNOW_MODERATE': cls.__constants['SNOW_MODERATE'],
            'SNOW_HEAVY': cls.__constants['SNOW_HEAVY'],
            'RAIN_SLIGHT': cls.__constants['RAIN_SLIGHT'],
            'RAIN_MODERATE': cls.__constants['RAIN_MODERATE'],
            'RAIN_HEAVY': cls.__constants['RAIN_HEAVY'],
            'FROZEN_PRECIPITATION_SLIGHT': cls.__constants['FROZEN_PRECIPITATION_SLIGHT'],
            'FROZEN_PRECIPITATION_MODERATE': cls.__constants['FROZEN_PRECIPITATION_MODERATE'],
            'FROZEN_PRECIPITATION_HEAVY': cls.__constants['FROZEN_PRECIPITATION_HEAVY'],
        }

    @property
    def OTHER(self):
        """Message constant 'OTHER'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['OTHER']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['UNKNOWN']

    @property
    def NO_PRECIPITATION(self):
        """Message constant 'NO_PRECIPITATION'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['NO_PRECIPITATION']

    @property
    def UNIDENTIFIED_SLIGHT(self):
        """Message constant 'UNIDENTIFIED_SLIGHT'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['UNIDENTIFIED_SLIGHT']

    @property
    def UNIDENTIFIED_MODERATE(self):
        """Message constant 'UNIDENTIFIED_MODERATE'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['UNIDENTIFIED_MODERATE']

    @property
    def UNIDENTIFIED_HEAVY(self):
        """Message constant 'UNIDENTIFIED_HEAVY'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['UNIDENTIFIED_HEAVY']

    @property
    def SNOW_SLIGHT(self):
        """Message constant 'SNOW_SLIGHT'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['SNOW_SLIGHT']

    @property
    def SNOW_MODERATE(self):
        """Message constant 'SNOW_MODERATE'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['SNOW_MODERATE']

    @property
    def SNOW_HEAVY(self):
        """Message constant 'SNOW_HEAVY'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['SNOW_HEAVY']

    @property
    def RAIN_SLIGHT(self):
        """Message constant 'RAIN_SLIGHT'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['RAIN_SLIGHT']

    @property
    def RAIN_MODERATE(self):
        """Message constant 'RAIN_MODERATE'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['RAIN_MODERATE']

    @property
    def RAIN_HEAVY(self):
        """Message constant 'RAIN_HEAVY'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['RAIN_HEAVY']

    @property
    def FROZEN_PRECIPITATION_SLIGHT(self):
        """Message constant 'FROZEN_PRECIPITATION_SLIGHT'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['FROZEN_PRECIPITATION_SLIGHT']

    @property
    def FROZEN_PRECIPITATION_MODERATE(self):
        """Message constant 'FROZEN_PRECIPITATION_MODERATE'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['FROZEN_PRECIPITATION_MODERATE']

    @property
    def FROZEN_PRECIPITATION_HEAVY(self):
        """Message constant 'FROZEN_PRECIPITATION_HEAVY'."""
        return Metaclass_NTCIPEssPrecipSituation.__constants['FROZEN_PRECIPITATION_HEAVY']


class NTCIPEssPrecipSituation(metaclass=Metaclass_NTCIPEssPrecipSituation):
    """
    Message class 'NTCIPEssPrecipSituation'.

    Constants:
      OTHER
      UNKNOWN
      NO_PRECIPITATION
      UNIDENTIFIED_SLIGHT
      UNIDENTIFIED_MODERATE
      UNIDENTIFIED_HEAVY
      SNOW_SLIGHT
      SNOW_MODERATE
      SNOW_HEAVY
      RAIN_SLIGHT
      RAIN_MODERATE
      RAIN_HEAVY
      FROZEN_PRECIPITATION_SLIGHT
      FROZEN_PRECIPITATION_MODERATE
      FROZEN_PRECIPITATION_HEAVY
    """

    __slots__ = [
        '_ess_precip_situation',
    ]

    _fields_and_field_types = {
        'ess_precip_situation': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ess_precip_situation = kwargs.get('ess_precip_situation', int())

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
        if self.ess_precip_situation != other.ess_precip_situation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ess_precip_situation(self):
        """Message field 'ess_precip_situation'."""
        return self._ess_precip_situation

    @ess_precip_situation.setter
    def ess_precip_situation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ess_precip_situation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ess_precip_situation' field must be an unsigned integer in [0, 255]"
        self._ess_precip_situation = value
