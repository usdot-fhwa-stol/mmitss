# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/BSM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BSM(type):
    """Metaclass of message 'BSM'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAS_PART_II': 1,
        'HAS_REGIONAL': 2,
        'PART_II_MIN_SIZE': 1,
        'PART_II_MAX_SIZE': 8,
        'REGIONAL_MIN_SIZE': 1,
        'REGIONAL_MAX_SIZE': 4,
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
                'carma_v2x_msgs.msg.BSM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bsm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bsm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bsm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bsm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bsm

            from carma_v2x_msgs.msg import BSMCoreData
            if BSMCoreData.__class__._TYPE_SUPPORT is None:
                BSMCoreData.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import BSMPartIIExtension
            if BSMPartIIExtension.__class__._TYPE_SUPPORT is None:
                BSMPartIIExtension.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import BSMRegionalExtension
            if BSMRegionalExtension.__class__._TYPE_SUPPORT is None:
                BSMRegionalExtension.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAS_PART_II': cls.__constants['HAS_PART_II'],
            'HAS_REGIONAL': cls.__constants['HAS_REGIONAL'],
            'PART_II_MIN_SIZE': cls.__constants['PART_II_MIN_SIZE'],
            'PART_II_MAX_SIZE': cls.__constants['PART_II_MAX_SIZE'],
            'REGIONAL_MIN_SIZE': cls.__constants['REGIONAL_MIN_SIZE'],
            'REGIONAL_MAX_SIZE': cls.__constants['REGIONAL_MAX_SIZE'],
        }

    @property
    def HAS_PART_II(self):
        """Message constant 'HAS_PART_II'."""
        return Metaclass_BSM.__constants['HAS_PART_II']

    @property
    def HAS_REGIONAL(self):
        """Message constant 'HAS_REGIONAL'."""
        return Metaclass_BSM.__constants['HAS_REGIONAL']

    @property
    def PART_II_MIN_SIZE(self):
        """Message constant 'PART_II_MIN_SIZE'."""
        return Metaclass_BSM.__constants['PART_II_MIN_SIZE']

    @property
    def PART_II_MAX_SIZE(self):
        """Message constant 'PART_II_MAX_SIZE'."""
        return Metaclass_BSM.__constants['PART_II_MAX_SIZE']

    @property
    def REGIONAL_MIN_SIZE(self):
        """Message constant 'REGIONAL_MIN_SIZE'."""
        return Metaclass_BSM.__constants['REGIONAL_MIN_SIZE']

    @property
    def REGIONAL_MAX_SIZE(self):
        """Message constant 'REGIONAL_MAX_SIZE'."""
        return Metaclass_BSM.__constants['REGIONAL_MAX_SIZE']


class BSM(metaclass=Metaclass_BSM):
    """
    Message class 'BSM'.

    Constants:
      HAS_PART_II
      HAS_REGIONAL
      PART_II_MIN_SIZE
      PART_II_MAX_SIZE
      REGIONAL_MIN_SIZE
      REGIONAL_MAX_SIZE
    """

    __slots__ = [
        '_header',
        '_core_data',
        '_presence_vector',
        '_part_ii',
        '_regional',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'core_data': 'carma_v2x_msgs/BSMCoreData',
        'presence_vector': 'uint8',
        'part_ii': 'sequence<carma_v2x_msgs/BSMPartIIExtension>',
        'regional': 'sequence<carma_v2x_msgs/BSMRegionalExtension>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'BSMCoreData'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'BSMPartIIExtension')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'BSMRegionalExtension')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from carma_v2x_msgs.msg import BSMCoreData
        self.core_data = kwargs.get('core_data', BSMCoreData())
        self.presence_vector = kwargs.get('presence_vector', int())
        self.part_ii = kwargs.get('part_ii', [])
        self.regional = kwargs.get('regional', [])

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
        if self.header != other.header:
            return False
        if self.core_data != other.core_data:
            return False
        if self.presence_vector != other.presence_vector:
            return False
        if self.part_ii != other.part_ii:
            return False
        if self.regional != other.regional:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def core_data(self):
        """Message field 'core_data'."""
        return self._core_data

    @core_data.setter
    def core_data(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import BSMCoreData
            assert \
                isinstance(value, BSMCoreData), \
                "The 'core_data' field must be a sub message of type 'BSMCoreData'"
        self._core_data = value

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
            assert value >= 0 and value < 256, \
                "The 'presence_vector' field must be an unsigned integer in [0, 255]"
        self._presence_vector = value

    @property
    def part_ii(self):
        """Message field 'part_ii'."""
        return self._part_ii

    @part_ii.setter
    def part_ii(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import BSMPartIIExtension
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
                 all(isinstance(v, BSMPartIIExtension) for v in value) and
                 True), \
                "The 'part_ii' field must be a set or sequence and each value of type 'BSMPartIIExtension'"
        self._part_ii = value

    @property
    def regional(self):
        """Message field 'regional'."""
        return self._regional

    @regional.setter
    def regional(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import BSMRegionalExtension
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
                 all(isinstance(v, BSMRegionalExtension) for v in value) and
                 True), \
                "The 'regional' field must be a set or sequence and each value of type 'BSMRegionalExtension'"
        self._regional = value
