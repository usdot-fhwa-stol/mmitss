# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/TimeConfidence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TimeConfidence(type):
    """Metaclass of message 'TimeConfidence'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'TIME_100_000': 1,
        'TIME_050_000': 2,
        'TIME_020_000': 3,
        'TIME_010_000': 4,
        'TIME_002_000': 5,
        'TIME_001_000': 6,
        'TIME_000_500': 7,
        'TIME_000_200': 8,
        'TIME_000_100': 9,
        'TIME_000_050': 10,
        'TIME_000_020': 11,
        'TIME_000_010': 12,
        'TIME_000_005': 13,
        'TIME_000_002': 14,
        'TIME_000_001': 15,
        'TIME_000_000_5': 16,
        'TIME_000_000_2': 17,
        'TIME_000_000_1': 18,
        'TIME_000_000_05': 19,
        'TIME_000_000_02': 20,
        'TIME_000_000_01': 21,
        'TIME_000_000_005': 22,
        'TIME_000_000_002': 23,
        'TIME_000_000_001': 24,
        'TIME_000_000_000_5': 25,
        'TIME_000_000_000_2': 26,
        'TIME_000_000_000_1': 27,
        'TIME_000_000_000_05': 28,
        'TIME_000_000_000_02': 29,
        'TIME_000_000_000_01': 30,
        'TIME_000_000_000_005': 31,
        'TIME_000_000_000_002': 32,
        'TIME_000_000_000_001': 33,
        'TIME_000_000_000_000_5': 34,
        'TIME_000_000_000_000_2': 35,
        'TIME_000_000_000_000_1': 36,
        'TIME_000_000_000_000_05': 37,
        'TIME_000_000_000_000_02': 38,
        'TIME_000_000_000_000_01': 39,
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
                'j2735_v2x_msgs.msg.TimeConfidence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__time_confidence
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__time_confidence
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__time_confidence
            cls._TYPE_SUPPORT = module.type_support_msg__msg__time_confidence
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__time_confidence

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'TIME_100_000': cls.__constants['TIME_100_000'],
            'TIME_050_000': cls.__constants['TIME_050_000'],
            'TIME_020_000': cls.__constants['TIME_020_000'],
            'TIME_010_000': cls.__constants['TIME_010_000'],
            'TIME_002_000': cls.__constants['TIME_002_000'],
            'TIME_001_000': cls.__constants['TIME_001_000'],
            'TIME_000_500': cls.__constants['TIME_000_500'],
            'TIME_000_200': cls.__constants['TIME_000_200'],
            'TIME_000_100': cls.__constants['TIME_000_100'],
            'TIME_000_050': cls.__constants['TIME_000_050'],
            'TIME_000_020': cls.__constants['TIME_000_020'],
            'TIME_000_010': cls.__constants['TIME_000_010'],
            'TIME_000_005': cls.__constants['TIME_000_005'],
            'TIME_000_002': cls.__constants['TIME_000_002'],
            'TIME_000_001': cls.__constants['TIME_000_001'],
            'TIME_000_000_5': cls.__constants['TIME_000_000_5'],
            'TIME_000_000_2': cls.__constants['TIME_000_000_2'],
            'TIME_000_000_1': cls.__constants['TIME_000_000_1'],
            'TIME_000_000_05': cls.__constants['TIME_000_000_05'],
            'TIME_000_000_02': cls.__constants['TIME_000_000_02'],
            'TIME_000_000_01': cls.__constants['TIME_000_000_01'],
            'TIME_000_000_005': cls.__constants['TIME_000_000_005'],
            'TIME_000_000_002': cls.__constants['TIME_000_000_002'],
            'TIME_000_000_001': cls.__constants['TIME_000_000_001'],
            'TIME_000_000_000_5': cls.__constants['TIME_000_000_000_5'],
            'TIME_000_000_000_2': cls.__constants['TIME_000_000_000_2'],
            'TIME_000_000_000_1': cls.__constants['TIME_000_000_000_1'],
            'TIME_000_000_000_05': cls.__constants['TIME_000_000_000_05'],
            'TIME_000_000_000_02': cls.__constants['TIME_000_000_000_02'],
            'TIME_000_000_000_01': cls.__constants['TIME_000_000_000_01'],
            'TIME_000_000_000_005': cls.__constants['TIME_000_000_000_005'],
            'TIME_000_000_000_002': cls.__constants['TIME_000_000_000_002'],
            'TIME_000_000_000_001': cls.__constants['TIME_000_000_000_001'],
            'TIME_000_000_000_000_5': cls.__constants['TIME_000_000_000_000_5'],
            'TIME_000_000_000_000_2': cls.__constants['TIME_000_000_000_000_2'],
            'TIME_000_000_000_000_1': cls.__constants['TIME_000_000_000_000_1'],
            'TIME_000_000_000_000_05': cls.__constants['TIME_000_000_000_000_05'],
            'TIME_000_000_000_000_02': cls.__constants['TIME_000_000_000_000_02'],
            'TIME_000_000_000_000_01': cls.__constants['TIME_000_000_000_000_01'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_TimeConfidence.__constants['UNAVAILABLE']

    @property
    def TIME_100_000(self):
        """Message constant 'TIME_100_000'."""
        return Metaclass_TimeConfidence.__constants['TIME_100_000']

    @property
    def TIME_050_000(self):
        """Message constant 'TIME_050_000'."""
        return Metaclass_TimeConfidence.__constants['TIME_050_000']

    @property
    def TIME_020_000(self):
        """Message constant 'TIME_020_000'."""
        return Metaclass_TimeConfidence.__constants['TIME_020_000']

    @property
    def TIME_010_000(self):
        """Message constant 'TIME_010_000'."""
        return Metaclass_TimeConfidence.__constants['TIME_010_000']

    @property
    def TIME_002_000(self):
        """Message constant 'TIME_002_000'."""
        return Metaclass_TimeConfidence.__constants['TIME_002_000']

    @property
    def TIME_001_000(self):
        """Message constant 'TIME_001_000'."""
        return Metaclass_TimeConfidence.__constants['TIME_001_000']

    @property
    def TIME_000_500(self):
        """Message constant 'TIME_000_500'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_500']

    @property
    def TIME_000_200(self):
        """Message constant 'TIME_000_200'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_200']

    @property
    def TIME_000_100(self):
        """Message constant 'TIME_000_100'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_100']

    @property
    def TIME_000_050(self):
        """Message constant 'TIME_000_050'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_050']

    @property
    def TIME_000_020(self):
        """Message constant 'TIME_000_020'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_020']

    @property
    def TIME_000_010(self):
        """Message constant 'TIME_000_010'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_010']

    @property
    def TIME_000_005(self):
        """Message constant 'TIME_000_005'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_005']

    @property
    def TIME_000_002(self):
        """Message constant 'TIME_000_002'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_002']

    @property
    def TIME_000_001(self):
        """Message constant 'TIME_000_001'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_001']

    @property
    def TIME_000_000_5(self):
        """Message constant 'TIME_000_000_5'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_5']

    @property
    def TIME_000_000_2(self):
        """Message constant 'TIME_000_000_2'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_2']

    @property
    def TIME_000_000_1(self):
        """Message constant 'TIME_000_000_1'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_1']

    @property
    def TIME_000_000_05(self):
        """Message constant 'TIME_000_000_05'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_05']

    @property
    def TIME_000_000_02(self):
        """Message constant 'TIME_000_000_02'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_02']

    @property
    def TIME_000_000_01(self):
        """Message constant 'TIME_000_000_01'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_01']

    @property
    def TIME_000_000_005(self):
        """Message constant 'TIME_000_000_005'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_005']

    @property
    def TIME_000_000_002(self):
        """Message constant 'TIME_000_000_002'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_002']

    @property
    def TIME_000_000_001(self):
        """Message constant 'TIME_000_000_001'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_001']

    @property
    def TIME_000_000_000_5(self):
        """Message constant 'TIME_000_000_000_5'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_5']

    @property
    def TIME_000_000_000_2(self):
        """Message constant 'TIME_000_000_000_2'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_2']

    @property
    def TIME_000_000_000_1(self):
        """Message constant 'TIME_000_000_000_1'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_1']

    @property
    def TIME_000_000_000_05(self):
        """Message constant 'TIME_000_000_000_05'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_05']

    @property
    def TIME_000_000_000_02(self):
        """Message constant 'TIME_000_000_000_02'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_02']

    @property
    def TIME_000_000_000_01(self):
        """Message constant 'TIME_000_000_000_01'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_01']

    @property
    def TIME_000_000_000_005(self):
        """Message constant 'TIME_000_000_000_005'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_005']

    @property
    def TIME_000_000_000_002(self):
        """Message constant 'TIME_000_000_000_002'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_002']

    @property
    def TIME_000_000_000_001(self):
        """Message constant 'TIME_000_000_000_001'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_001']

    @property
    def TIME_000_000_000_000_5(self):
        """Message constant 'TIME_000_000_000_000_5'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_000_5']

    @property
    def TIME_000_000_000_000_2(self):
        """Message constant 'TIME_000_000_000_000_2'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_000_2']

    @property
    def TIME_000_000_000_000_1(self):
        """Message constant 'TIME_000_000_000_000_1'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_000_1']

    @property
    def TIME_000_000_000_000_05(self):
        """Message constant 'TIME_000_000_000_000_05'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_000_05']

    @property
    def TIME_000_000_000_000_02(self):
        """Message constant 'TIME_000_000_000_000_02'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_000_02']

    @property
    def TIME_000_000_000_000_01(self):
        """Message constant 'TIME_000_000_000_000_01'."""
        return Metaclass_TimeConfidence.__constants['TIME_000_000_000_000_01']


class TimeConfidence(metaclass=Metaclass_TimeConfidence):
    """
    Message class 'TimeConfidence'.

    Constants:
      UNAVAILABLE
      TIME_100_000
      TIME_050_000
      TIME_020_000
      TIME_010_000
      TIME_002_000
      TIME_001_000
      TIME_000_500
      TIME_000_200
      TIME_000_100
      TIME_000_050
      TIME_000_020
      TIME_000_010
      TIME_000_005
      TIME_000_002
      TIME_000_001
      TIME_000_000_5
      TIME_000_000_2
      TIME_000_000_1
      TIME_000_000_05
      TIME_000_000_02
      TIME_000_000_01
      TIME_000_000_005
      TIME_000_000_002
      TIME_000_000_001
      TIME_000_000_000_5
      TIME_000_000_000_2
      TIME_000_000_000_1
      TIME_000_000_000_05
      TIME_000_000_000_02
      TIME_000_000_000_01
      TIME_000_000_000_005
      TIME_000_000_000_002
      TIME_000_000_000_001
      TIME_000_000_000_000_5
      TIME_000_000_000_000_2
      TIME_000_000_000_000_1
      TIME_000_000_000_000_05
      TIME_000_000_000_000_02
      TIME_000_000_000_000_01
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
