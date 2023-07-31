# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/TrafficControlDetail.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'signal'
import array  # noqa: E402, I100

# Member 'latperm'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficControlDetail(type):
    """Metaclass of message 'TrafficControlDetail'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SIGNAL_CHOICE': 0,
        'STOP_CHOICE': 1,
        'YIELD_CHOICE': 2,
        'NOTOWING_CHOICE': 3,
        'RESTRICTED_CHOICE': 4,
        'CLOSED_CHOICE': 5,
        'CHAINS_CHOICE': 6,
        'DIRECTION_CHOICE': 7,
        'LATAFFINITY_CHOICE': 8,
        'LATPERM_CHOICE': 9,
        'PARKING_CHOICE': 10,
        'MINSPEED_CHOICE': 11,
        'MAXSPEED_CHOICE': 12,
        'MINHDWY_CHOICE': 13,
        'MAXVEHMASS_CHOICE': 14,
        'MAXVEHHEIGHT_CHOICE': 15,
        'MAXVEHWIDTH_CHOICE': 16,
        'MAXVEHLENGTH_CHOICE': 17,
        'MAXVEHAXLES_CHOICE': 18,
        'MINVEHOCC_CHOICE': 19,
        'MAXPLATOONSIZE_CHOICE': 20,
        'MINPLATOONHDWY_CHOICE': 21,
        'OPEN': 0,
        'CLOSED': 1,
        'TAPERLEFT': 2,
        'TAPERRIGHT': 3,
        'OPENLEFT': 4,
        'OPENRIGHT': 5,
        'NO': 0,
        'PERMITTED': 1,
        'REQUIRED': 2,
        'FORWARD': 0,
        'REVERSE': 1,
        'LEFT': 0,
        'RIGHT': 1,
        'NONE': 0,
        'PASSINGONLY': 2,
        'EMERGENCYONLY': 3,
        'PARALLEL': 1,
        'ANGLED': 2,
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
                'carma_v2x_msgs.msg.TrafficControlDetail')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_control_detail
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_control_detail
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_control_detail
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_control_detail
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_control_detail

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SIGNAL_CHOICE': cls.__constants['SIGNAL_CHOICE'],
            'STOP_CHOICE': cls.__constants['STOP_CHOICE'],
            'YIELD_CHOICE': cls.__constants['YIELD_CHOICE'],
            'NOTOWING_CHOICE': cls.__constants['NOTOWING_CHOICE'],
            'RESTRICTED_CHOICE': cls.__constants['RESTRICTED_CHOICE'],
            'CLOSED_CHOICE': cls.__constants['CLOSED_CHOICE'],
            'CHAINS_CHOICE': cls.__constants['CHAINS_CHOICE'],
            'DIRECTION_CHOICE': cls.__constants['DIRECTION_CHOICE'],
            'LATAFFINITY_CHOICE': cls.__constants['LATAFFINITY_CHOICE'],
            'LATPERM_CHOICE': cls.__constants['LATPERM_CHOICE'],
            'PARKING_CHOICE': cls.__constants['PARKING_CHOICE'],
            'MINSPEED_CHOICE': cls.__constants['MINSPEED_CHOICE'],
            'MAXSPEED_CHOICE': cls.__constants['MAXSPEED_CHOICE'],
            'MINHDWY_CHOICE': cls.__constants['MINHDWY_CHOICE'],
            'MAXVEHMASS_CHOICE': cls.__constants['MAXVEHMASS_CHOICE'],
            'MAXVEHHEIGHT_CHOICE': cls.__constants['MAXVEHHEIGHT_CHOICE'],
            'MAXVEHWIDTH_CHOICE': cls.__constants['MAXVEHWIDTH_CHOICE'],
            'MAXVEHLENGTH_CHOICE': cls.__constants['MAXVEHLENGTH_CHOICE'],
            'MAXVEHAXLES_CHOICE': cls.__constants['MAXVEHAXLES_CHOICE'],
            'MINVEHOCC_CHOICE': cls.__constants['MINVEHOCC_CHOICE'],
            'MAXPLATOONSIZE_CHOICE': cls.__constants['MAXPLATOONSIZE_CHOICE'],
            'MINPLATOONHDWY_CHOICE': cls.__constants['MINPLATOONHDWY_CHOICE'],
            'OPEN': cls.__constants['OPEN'],
            'CLOSED': cls.__constants['CLOSED'],
            'TAPERLEFT': cls.__constants['TAPERLEFT'],
            'TAPERRIGHT': cls.__constants['TAPERRIGHT'],
            'OPENLEFT': cls.__constants['OPENLEFT'],
            'OPENRIGHT': cls.__constants['OPENRIGHT'],
            'NO': cls.__constants['NO'],
            'PERMITTED': cls.__constants['PERMITTED'],
            'REQUIRED': cls.__constants['REQUIRED'],
            'FORWARD': cls.__constants['FORWARD'],
            'REVERSE': cls.__constants['REVERSE'],
            'LEFT': cls.__constants['LEFT'],
            'RIGHT': cls.__constants['RIGHT'],
            'NONE': cls.__constants['NONE'],
            'PASSINGONLY': cls.__constants['PASSINGONLY'],
            'EMERGENCYONLY': cls.__constants['EMERGENCYONLY'],
            'PARALLEL': cls.__constants['PARALLEL'],
            'ANGLED': cls.__constants['ANGLED'],
        }

    @property
    def SIGNAL_CHOICE(self):
        """Message constant 'SIGNAL_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['SIGNAL_CHOICE']

    @property
    def STOP_CHOICE(self):
        """Message constant 'STOP_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['STOP_CHOICE']

    @property
    def YIELD_CHOICE(self):
        """Message constant 'YIELD_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['YIELD_CHOICE']

    @property
    def NOTOWING_CHOICE(self):
        """Message constant 'NOTOWING_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['NOTOWING_CHOICE']

    @property
    def RESTRICTED_CHOICE(self):
        """Message constant 'RESTRICTED_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['RESTRICTED_CHOICE']

    @property
    def CLOSED_CHOICE(self):
        """Message constant 'CLOSED_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['CLOSED_CHOICE']

    @property
    def CHAINS_CHOICE(self):
        """Message constant 'CHAINS_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['CHAINS_CHOICE']

    @property
    def DIRECTION_CHOICE(self):
        """Message constant 'DIRECTION_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['DIRECTION_CHOICE']

    @property
    def LATAFFINITY_CHOICE(self):
        """Message constant 'LATAFFINITY_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['LATAFFINITY_CHOICE']

    @property
    def LATPERM_CHOICE(self):
        """Message constant 'LATPERM_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['LATPERM_CHOICE']

    @property
    def PARKING_CHOICE(self):
        """Message constant 'PARKING_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['PARKING_CHOICE']

    @property
    def MINSPEED_CHOICE(self):
        """Message constant 'MINSPEED_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MINSPEED_CHOICE']

    @property
    def MAXSPEED_CHOICE(self):
        """Message constant 'MAXSPEED_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MAXSPEED_CHOICE']

    @property
    def MINHDWY_CHOICE(self):
        """Message constant 'MINHDWY_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MINHDWY_CHOICE']

    @property
    def MAXVEHMASS_CHOICE(self):
        """Message constant 'MAXVEHMASS_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MAXVEHMASS_CHOICE']

    @property
    def MAXVEHHEIGHT_CHOICE(self):
        """Message constant 'MAXVEHHEIGHT_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MAXVEHHEIGHT_CHOICE']

    @property
    def MAXVEHWIDTH_CHOICE(self):
        """Message constant 'MAXVEHWIDTH_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MAXVEHWIDTH_CHOICE']

    @property
    def MAXVEHLENGTH_CHOICE(self):
        """Message constant 'MAXVEHLENGTH_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MAXVEHLENGTH_CHOICE']

    @property
    def MAXVEHAXLES_CHOICE(self):
        """Message constant 'MAXVEHAXLES_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MAXVEHAXLES_CHOICE']

    @property
    def MINVEHOCC_CHOICE(self):
        """Message constant 'MINVEHOCC_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MINVEHOCC_CHOICE']

    @property
    def MAXPLATOONSIZE_CHOICE(self):
        """Message constant 'MAXPLATOONSIZE_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MAXPLATOONSIZE_CHOICE']

    @property
    def MINPLATOONHDWY_CHOICE(self):
        """Message constant 'MINPLATOONHDWY_CHOICE'."""
        return Metaclass_TrafficControlDetail.__constants['MINPLATOONHDWY_CHOICE']

    @property
    def OPEN(self):
        """Message constant 'OPEN'."""
        return Metaclass_TrafficControlDetail.__constants['OPEN']

    @property
    def CLOSED(self):
        """Message constant 'CLOSED'."""
        return Metaclass_TrafficControlDetail.__constants['CLOSED']

    @property
    def TAPERLEFT(self):
        """Message constant 'TAPERLEFT'."""
        return Metaclass_TrafficControlDetail.__constants['TAPERLEFT']

    @property
    def TAPERRIGHT(self):
        """Message constant 'TAPERRIGHT'."""
        return Metaclass_TrafficControlDetail.__constants['TAPERRIGHT']

    @property
    def OPENLEFT(self):
        """Message constant 'OPENLEFT'."""
        return Metaclass_TrafficControlDetail.__constants['OPENLEFT']

    @property
    def OPENRIGHT(self):
        """Message constant 'OPENRIGHT'."""
        return Metaclass_TrafficControlDetail.__constants['OPENRIGHT']

    @property
    def NO(self):
        """Message constant 'NO'."""
        return Metaclass_TrafficControlDetail.__constants['NO']

    @property
    def PERMITTED(self):
        """Message constant 'PERMITTED'."""
        return Metaclass_TrafficControlDetail.__constants['PERMITTED']

    @property
    def REQUIRED(self):
        """Message constant 'REQUIRED'."""
        return Metaclass_TrafficControlDetail.__constants['REQUIRED']

    @property
    def FORWARD(self):
        """Message constant 'FORWARD'."""
        return Metaclass_TrafficControlDetail.__constants['FORWARD']

    @property
    def REVERSE(self):
        """Message constant 'REVERSE'."""
        return Metaclass_TrafficControlDetail.__constants['REVERSE']

    @property
    def LEFT(self):
        """Message constant 'LEFT'."""
        return Metaclass_TrafficControlDetail.__constants['LEFT']

    @property
    def RIGHT(self):
        """Message constant 'RIGHT'."""
        return Metaclass_TrafficControlDetail.__constants['RIGHT']

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_TrafficControlDetail.__constants['NONE']

    @property
    def PASSINGONLY(self):
        """Message constant 'PASSINGONLY'."""
        return Metaclass_TrafficControlDetail.__constants['PASSINGONLY']

    @property
    def EMERGENCYONLY(self):
        """Message constant 'EMERGENCYONLY'."""
        return Metaclass_TrafficControlDetail.__constants['EMERGENCYONLY']

    @property
    def PARALLEL(self):
        """Message constant 'PARALLEL'."""
        return Metaclass_TrafficControlDetail.__constants['PARALLEL']

    @property
    def ANGLED(self):
        """Message constant 'ANGLED'."""
        return Metaclass_TrafficControlDetail.__constants['ANGLED']


class TrafficControlDetail(metaclass=Metaclass_TrafficControlDetail):
    """
    Message class 'TrafficControlDetail'.

    Constants:
      SIGNAL_CHOICE
      STOP_CHOICE
      YIELD_CHOICE
      NOTOWING_CHOICE
      RESTRICTED_CHOICE
      CLOSED_CHOICE
      CHAINS_CHOICE
      DIRECTION_CHOICE
      LATAFFINITY_CHOICE
      LATPERM_CHOICE
      PARKING_CHOICE
      MINSPEED_CHOICE
      MAXSPEED_CHOICE
      MINHDWY_CHOICE
      MAXVEHMASS_CHOICE
      MAXVEHHEIGHT_CHOICE
      MAXVEHWIDTH_CHOICE
      MAXVEHLENGTH_CHOICE
      MAXVEHAXLES_CHOICE
      MINVEHOCC_CHOICE
      MAXPLATOONSIZE_CHOICE
      MINPLATOONHDWY_CHOICE
      OPEN
      CLOSED
      TAPERLEFT
      TAPERRIGHT
      OPENLEFT
      OPENRIGHT
      NO
      PERMITTED
      REQUIRED
      FORWARD
      REVERSE
      LEFT
      RIGHT
      NONE
      PASSINGONLY
      EMERGENCYONLY
      PARALLEL
      ANGLED
    """

    __slots__ = [
        '_choice',
        '_signal',
        '_closed',
        '_chains',
        '_direction',
        '_lataffinity',
        '_latperm',
        '_parking',
        '_minspeed',
        '_maxspeed',
        '_minhdwy',
        '_maxvehmass',
        '_maxvehheight',
        '_maxvehwidth',
        '_maxvehlength',
        '_maxvehaxles',
        '_minvehocc',
        '_maxplatoonsize',
        '_minplatoonhdwy',
    ]

    _fields_and_field_types = {
        'choice': 'uint8',
        'signal': 'sequence<uint8>',
        'closed': 'uint8',
        'chains': 'uint8',
        'direction': 'uint8',
        'lataffinity': 'uint8',
        'latperm': 'uint8[2]',
        'parking': 'uint8',
        'minspeed': 'double',
        'maxspeed': 'double',
        'minhdwy': 'double',
        'maxvehmass': 'double',
        'maxvehheight': 'double',
        'maxvehwidth': 'double',
        'maxvehlength': 'double',
        'maxvehaxles': 'uint8',
        'minvehocc': 'uint8',
        'maxplatoonsize': 'uint8',
        'minplatoonhdwy': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.choice = kwargs.get('choice', int())
        self.signal = array.array('B', kwargs.get('signal', []))
        self.closed = kwargs.get('closed', int())
        self.chains = kwargs.get('chains', int())
        self.direction = kwargs.get('direction', int())
        self.lataffinity = kwargs.get('lataffinity', int())
        if 'latperm' not in kwargs:
            self.latperm = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.latperm = numpy.array(kwargs.get('latperm'), dtype=numpy.uint8)
            assert self.latperm.shape == (2, )
        self.parking = kwargs.get('parking', int())
        self.minspeed = kwargs.get('minspeed', float())
        self.maxspeed = kwargs.get('maxspeed', float())
        self.minhdwy = kwargs.get('minhdwy', float())
        self.maxvehmass = kwargs.get('maxvehmass', float())
        self.maxvehheight = kwargs.get('maxvehheight', float())
        self.maxvehwidth = kwargs.get('maxvehwidth', float())
        self.maxvehlength = kwargs.get('maxvehlength', float())
        self.maxvehaxles = kwargs.get('maxvehaxles', int())
        self.minvehocc = kwargs.get('minvehocc', int())
        self.maxplatoonsize = kwargs.get('maxplatoonsize', int())
        self.minplatoonhdwy = kwargs.get('minplatoonhdwy', float())

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
        if self.choice != other.choice:
            return False
        if self.signal != other.signal:
            return False
        if self.closed != other.closed:
            return False
        if self.chains != other.chains:
            return False
        if self.direction != other.direction:
            return False
        if self.lataffinity != other.lataffinity:
            return False
        if all(self.latperm != other.latperm):
            return False
        if self.parking != other.parking:
            return False
        if self.minspeed != other.minspeed:
            return False
        if self.maxspeed != other.maxspeed:
            return False
        if self.minhdwy != other.minhdwy:
            return False
        if self.maxvehmass != other.maxvehmass:
            return False
        if self.maxvehheight != other.maxvehheight:
            return False
        if self.maxvehwidth != other.maxvehwidth:
            return False
        if self.maxvehlength != other.maxvehlength:
            return False
        if self.maxvehaxles != other.maxvehaxles:
            return False
        if self.minvehocc != other.minvehocc:
            return False
        if self.maxplatoonsize != other.maxplatoonsize:
            return False
        if self.minplatoonhdwy != other.minplatoonhdwy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def choice(self):
        """Message field 'choice'."""
        return self._choice

    @choice.setter
    def choice(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'choice' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'choice' field must be an unsigned integer in [0, 255]"
        self._choice = value

    @property
    def signal(self):
        """Message field 'signal'."""
        return self._signal

    @signal.setter
    def signal(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'signal' array.array() must have the type code of 'B'"
            self._signal = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'signal' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._signal = array.array('B', value)

    @property
    def closed(self):
        """Message field 'closed'."""
        return self._closed

    @closed.setter
    def closed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'closed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'closed' field must be an unsigned integer in [0, 255]"
        self._closed = value

    @property
    def chains(self):
        """Message field 'chains'."""
        return self._chains

    @chains.setter
    def chains(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chains' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chains' field must be an unsigned integer in [0, 255]"
        self._chains = value

    @property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'direction' field must be an unsigned integer in [0, 255]"
        self._direction = value

    @property
    def lataffinity(self):
        """Message field 'lataffinity'."""
        return self._lataffinity

    @lataffinity.setter
    def lataffinity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lataffinity' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lataffinity' field must be an unsigned integer in [0, 255]"
        self._lataffinity = value

    @property
    def latperm(self):
        """Message field 'latperm'."""
        return self._latperm

    @latperm.setter
    def latperm(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'latperm' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'latperm' numpy.ndarray() must have a size of 2"
            self._latperm = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'latperm' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._latperm = numpy.array(value, dtype=numpy.uint8)

    @property
    def parking(self):
        """Message field 'parking'."""
        return self._parking

    @parking.setter
    def parking(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parking' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'parking' field must be an unsigned integer in [0, 255]"
        self._parking = value

    @property
    def minspeed(self):
        """Message field 'minspeed'."""
        return self._minspeed

    @minspeed.setter
    def minspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'minspeed' field must be of type 'float'"
        self._minspeed = value

    @property
    def maxspeed(self):
        """Message field 'maxspeed'."""
        return self._maxspeed

    @maxspeed.setter
    def maxspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'maxspeed' field must be of type 'float'"
        self._maxspeed = value

    @property
    def minhdwy(self):
        """Message field 'minhdwy'."""
        return self._minhdwy

    @minhdwy.setter
    def minhdwy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'minhdwy' field must be of type 'float'"
        self._minhdwy = value

    @property
    def maxvehmass(self):
        """Message field 'maxvehmass'."""
        return self._maxvehmass

    @maxvehmass.setter
    def maxvehmass(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'maxvehmass' field must be of type 'float'"
        self._maxvehmass = value

    @property
    def maxvehheight(self):
        """Message field 'maxvehheight'."""
        return self._maxvehheight

    @maxvehheight.setter
    def maxvehheight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'maxvehheight' field must be of type 'float'"
        self._maxvehheight = value

    @property
    def maxvehwidth(self):
        """Message field 'maxvehwidth'."""
        return self._maxvehwidth

    @maxvehwidth.setter
    def maxvehwidth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'maxvehwidth' field must be of type 'float'"
        self._maxvehwidth = value

    @property
    def maxvehlength(self):
        """Message field 'maxvehlength'."""
        return self._maxvehlength

    @maxvehlength.setter
    def maxvehlength(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'maxvehlength' field must be of type 'float'"
        self._maxvehlength = value

    @property
    def maxvehaxles(self):
        """Message field 'maxvehaxles'."""
        return self._maxvehaxles

    @maxvehaxles.setter
    def maxvehaxles(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maxvehaxles' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'maxvehaxles' field must be an unsigned integer in [0, 255]"
        self._maxvehaxles = value

    @property
    def minvehocc(self):
        """Message field 'minvehocc'."""
        return self._minvehocc

    @minvehocc.setter
    def minvehocc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'minvehocc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'minvehocc' field must be an unsigned integer in [0, 255]"
        self._minvehocc = value

    @property
    def maxplatoonsize(self):
        """Message field 'maxplatoonsize'."""
        return self._maxplatoonsize

    @maxplatoonsize.setter
    def maxplatoonsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maxplatoonsize' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'maxplatoonsize' field must be an unsigned integer in [0, 255]"
        self._maxplatoonsize = value

    @property
    def minplatoonhdwy(self):
        """Message field 'minplatoonhdwy'."""
        return self._minplatoonhdwy

    @minplatoonhdwy.setter
    def minplatoonhdwy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'minplatoonhdwy' field must be of type 'float'"
        self._minplatoonhdwy = value
