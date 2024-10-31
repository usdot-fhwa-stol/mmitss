# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/ElevationConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ElevationConfidence(type):
    """Metaclass of message 'ElevationConfidence'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'ELEV_500_00': 1,
        'ELEV_200_00': 2,
        'ELEV_100_00': 3,
        'ELEV_050_00': 4,
        'ELEV_020_00': 5,
        'ELEV_010_00': 6,
        'ELEV_005_00': 7,
        'ELEV_002_00': 8,
        'ELEV_001_00': 9,
        'ELEV_000_50': 10,
        'ELEV_000_20': 11,
        'ELEV_000_10': 12,
        'ELEV_000_05': 13,
        'ELEV_000_02': 14,
        'ELEV_000_01': 15,
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
                'j2735_v2x_msgs.msg.ElevationConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__elevation_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__elevation_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__elevation_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__elevation_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__elevation_confidence

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'ELEV_500_00': cls.__constants['ELEV_500_00'],
            'ELEV_200_00': cls.__constants['ELEV_200_00'],
            'ELEV_100_00': cls.__constants['ELEV_100_00'],
            'ELEV_050_00': cls.__constants['ELEV_050_00'],
            'ELEV_020_00': cls.__constants['ELEV_020_00'],
            'ELEV_010_00': cls.__constants['ELEV_010_00'],
            'ELEV_005_00': cls.__constants['ELEV_005_00'],
            'ELEV_002_00': cls.__constants['ELEV_002_00'],
            'ELEV_001_00': cls.__constants['ELEV_001_00'],
            'ELEV_000_50': cls.__constants['ELEV_000_50'],
            'ELEV_000_20': cls.__constants['ELEV_000_20'],
            'ELEV_000_10': cls.__constants['ELEV_000_10'],
            'ELEV_000_05': cls.__constants['ELEV_000_05'],
            'ELEV_000_02': cls.__constants['ELEV_000_02'],
            'ELEV_000_01': cls.__constants['ELEV_000_01'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_ElevationConfidence.__constants['UNAVAILABLE']

    @property
    def ELEV_500_00(self):
        """Message constant 'ELEV_500_00'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_500_00']

    @property
    def ELEV_200_00(self):
        """Message constant 'ELEV_200_00'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_200_00']

    @property
    def ELEV_100_00(self):
        """Message constant 'ELEV_100_00'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_100_00']

    @property
    def ELEV_050_00(self):
        """Message constant 'ELEV_050_00'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_050_00']

    @property
    def ELEV_020_00(self):
        """Message constant 'ELEV_020_00'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_020_00']

    @property
    def ELEV_010_00(self):
        """Message constant 'ELEV_010_00'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_010_00']

    @property
    def ELEV_005_00(self):
        """Message constant 'ELEV_005_00'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_005_00']

    @property
    def ELEV_002_00(self):
        """Message constant 'ELEV_002_00'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_002_00']

    @property
    def ELEV_001_00(self):
        """Message constant 'ELEV_001_00'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_001_00']

    @property
    def ELEV_000_50(self):
        """Message constant 'ELEV_000_50'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_000_50']

    @property
    def ELEV_000_20(self):
        """Message constant 'ELEV_000_20'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_000_20']

    @property
    def ELEV_000_10(self):
        """Message constant 'ELEV_000_10'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_000_10']

    @property
    def ELEV_000_05(self):
        """Message constant 'ELEV_000_05'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_000_05']

    @property
    def ELEV_000_02(self):
        """Message constant 'ELEV_000_02'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_000_02']

    @property
    def ELEV_000_01(self):
        """Message constant 'ELEV_000_01'."""
        return Metaclass_ElevationConfidence.__constants['ELEV_000_01']


class ElevationConfidence(metaclass=Metaclass_ElevationConfidence):
    """
    Message class 'ElevationConfidence'.

    Constants:
      UNAVAILABLE
      ELEV_500_00
      ELEV_200_00
      ELEV_100_00
      ELEV_050_00
      ELEV_020_00
      ELEV_010_00
      ELEV_005_00
      ELEV_002_00
      ELEV_001_00
      ELEV_000_50
      ELEV_000_20
      ELEV_000_10
      ELEV_000_05
      ELEV_000_02
      ELEV_000_01
    """

    __slots__ = [
        '_confidence',
    ]

    _fields_and_field_types = {
        'confidence': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.confidence = kwargs.get('confidence', int())

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
        if self.confidence != other.confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confidence' field must be an unsigned integer in [0, 255]"
        self._confidence = value
