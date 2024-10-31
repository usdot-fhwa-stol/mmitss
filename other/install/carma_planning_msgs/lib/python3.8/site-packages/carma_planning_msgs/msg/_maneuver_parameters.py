# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_planning_msgs:msg/ManeuverParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'int_valued_meta_data'
# Member 'float_valued_meta_data'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ManeuverParameters(type):
    """Metaclass of message 'ManeuverParameters'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NO_NEGOTIATION': 0,
        'GENERAL_NEGOTIATION': 1,
        'PLATOONING': 2,
        'HAS_TACTICAL_PLUGIN': 1,
        'HAS_BOOL_META_DATA': 2,
        'HAS_INT_META_DATA': 4,
        'HAS_FLOAT_META_DATA': 8,
        'HAS_STRING_META_DATA': 16,
        'HAS_TIME_META_DATA': 32,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_planning_msgs.msg.ManeuverParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__maneuver_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__maneuver_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__maneuver_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__maneuver_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__maneuver_parameters

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NO_NEGOTIATION': cls.__constants['NO_NEGOTIATION'],
            'GENERAL_NEGOTIATION': cls.__constants['GENERAL_NEGOTIATION'],
            'PLATOONING': cls.__constants['PLATOONING'],
            'HAS_TACTICAL_PLUGIN': cls.__constants['HAS_TACTICAL_PLUGIN'],
            'HAS_BOOL_META_DATA': cls.__constants['HAS_BOOL_META_DATA'],
            'HAS_INT_META_DATA': cls.__constants['HAS_INT_META_DATA'],
            'HAS_FLOAT_META_DATA': cls.__constants['HAS_FLOAT_META_DATA'],
            'HAS_STRING_META_DATA': cls.__constants['HAS_STRING_META_DATA'],
            'HAS_TIME_META_DATA': cls.__constants['HAS_TIME_META_DATA'],
        }

    @property
    def NO_NEGOTIATION(self):
        """Message constant 'NO_NEGOTIATION'."""
        return Metaclass_ManeuverParameters.__constants['NO_NEGOTIATION']

    @property
    def GENERAL_NEGOTIATION(self):
        """Message constant 'GENERAL_NEGOTIATION'."""
        return Metaclass_ManeuverParameters.__constants['GENERAL_NEGOTIATION']

    @property
    def PLATOONING(self):
        """Message constant 'PLATOONING'."""
        return Metaclass_ManeuverParameters.__constants['PLATOONING']

    @property
    def HAS_TACTICAL_PLUGIN(self):
        """Message constant 'HAS_TACTICAL_PLUGIN'."""
        return Metaclass_ManeuverParameters.__constants['HAS_TACTICAL_PLUGIN']

    @property
    def HAS_BOOL_META_DATA(self):
        """Message constant 'HAS_BOOL_META_DATA'."""
        return Metaclass_ManeuverParameters.__constants['HAS_BOOL_META_DATA']

    @property
    def HAS_INT_META_DATA(self):
        """Message constant 'HAS_INT_META_DATA'."""
        return Metaclass_ManeuverParameters.__constants['HAS_INT_META_DATA']

    @property
    def HAS_FLOAT_META_DATA(self):
        """Message constant 'HAS_FLOAT_META_DATA'."""
        return Metaclass_ManeuverParameters.__constants['HAS_FLOAT_META_DATA']

    @property
    def HAS_STRING_META_DATA(self):
        """Message constant 'HAS_STRING_META_DATA'."""
        return Metaclass_ManeuverParameters.__constants['HAS_STRING_META_DATA']

    @property
    def HAS_TIME_META_DATA(self):
        """Message constant 'HAS_TIME_META_DATA'."""
        return Metaclass_ManeuverParameters.__constants['HAS_TIME_META_DATA']


class ManeuverParameters(metaclass=Metaclass_ManeuverParameters):
    """
    Message class 'ManeuverParameters'.

    Constants:
      NO_NEGOTIATION
      GENERAL_NEGOTIATION
      PLATOONING
      HAS_TACTICAL_PLUGIN
      HAS_BOOL_META_DATA
      HAS_INT_META_DATA
      HAS_FLOAT_META_DATA
      HAS_STRING_META_DATA
      HAS_TIME_META_DATA
    """

    __slots__ = [
        '_maneuver_id',
        '_negotiation_type',
        '_planning_strategic_plugin',
        '_presence_vector',
        '_planning_tactical_plugin',
        '_bool_valued_meta_data',
        '_int_valued_meta_data',
        '_float_valued_meta_data',
        '_string_valued_meta_data',
        '_time_valued_meta_data',
    ]

    _fields_and_field_types = {
        'maneuver_id': 'string',
        'negotiation_type': 'uint8',
        'planning_strategic_plugin': 'string',
        'presence_vector': 'uint16',
        'planning_tactical_plugin': 'string',
        'bool_valued_meta_data': 'sequence<boolean>',
        'int_valued_meta_data': 'sequence<int64>',
        'float_valued_meta_data': 'sequence<double>',
        'string_valued_meta_data': 'sequence<string>',
        'time_valued_meta_data': 'sequence<builtin_interfaces/Time>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.maneuver_id = kwargs.get('maneuver_id', str())
        self.negotiation_type = kwargs.get('negotiation_type', int())
        self.planning_strategic_plugin = kwargs.get('planning_strategic_plugin', str())
        self.presence_vector = kwargs.get('presence_vector', int())
        self.planning_tactical_plugin = kwargs.get('planning_tactical_plugin', str())
        self.bool_valued_meta_data = kwargs.get('bool_valued_meta_data', [])
        self.int_valued_meta_data = array.array('q', kwargs.get('int_valued_meta_data', []))
        self.float_valued_meta_data = array.array('d', kwargs.get('float_valued_meta_data', []))
        self.string_valued_meta_data = kwargs.get('string_valued_meta_data', [])
        self.time_valued_meta_data = kwargs.get('time_valued_meta_data', [])

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
        if self.maneuver_id != other.maneuver_id:
            return False
        if self.negotiation_type != other.negotiation_type:
            return False
        if self.planning_strategic_plugin != other.planning_strategic_plugin:
            return False
        if self.presence_vector != other.presence_vector:
            return False
        if self.planning_tactical_plugin != other.planning_tactical_plugin:
            return False
        if self.bool_valued_meta_data != other.bool_valued_meta_data:
            return False
        if self.int_valued_meta_data != other.int_valued_meta_data:
            return False
        if self.float_valued_meta_data != other.float_valued_meta_data:
            return False
        if self.string_valued_meta_data != other.string_valued_meta_data:
            return False
        if self.time_valued_meta_data != other.time_valued_meta_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def maneuver_id(self):
        """Message field 'maneuver_id'."""
        return self._maneuver_id

    @maneuver_id.setter
    def maneuver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'maneuver_id' field must be of type 'str'"
        self._maneuver_id = value

    @property
    def negotiation_type(self):
        """Message field 'negotiation_type'."""
        return self._negotiation_type

    @negotiation_type.setter
    def negotiation_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'negotiation_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'negotiation_type' field must be an unsigned integer in [0, 255]"
        self._negotiation_type = value

    @property
    def planning_strategic_plugin(self):
        """Message field 'planning_strategic_plugin'."""
        return self._planning_strategic_plugin

    @planning_strategic_plugin.setter
    def planning_strategic_plugin(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planning_strategic_plugin' field must be of type 'str'"
        self._planning_strategic_plugin = value

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
    def planning_tactical_plugin(self):
        """Message field 'planning_tactical_plugin'."""
        return self._planning_tactical_plugin

    @planning_tactical_plugin.setter
    def planning_tactical_plugin(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planning_tactical_plugin' field must be of type 'str'"
        self._planning_tactical_plugin = value

    @property
    def bool_valued_meta_data(self):
        """Message field 'bool_valued_meta_data'."""
        return self._bool_valued_meta_data

    @bool_valued_meta_data.setter
    def bool_valued_meta_data(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'bool_valued_meta_data' field must be a set or sequence and each value of type 'bool'"
        self._bool_valued_meta_data = value

    @property
    def int_valued_meta_data(self):
        """Message field 'int_valued_meta_data'."""
        return self._int_valued_meta_data

    @int_valued_meta_data.setter
    def int_valued_meta_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'int_valued_meta_data' array.array() must have the type code of 'q'"
            self._int_valued_meta_data = value
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
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'int_valued_meta_data' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._int_valued_meta_data = array.array('q', value)

    @property
    def float_valued_meta_data(self):
        """Message field 'float_valued_meta_data'."""
        return self._float_valued_meta_data

    @float_valued_meta_data.setter
    def float_valued_meta_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'float_valued_meta_data' array.array() must have the type code of 'd'"
            self._float_valued_meta_data = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'float_valued_meta_data' field must be a set or sequence and each value of type 'float'"
        self._float_valued_meta_data = array.array('d', value)

    @property
    def string_valued_meta_data(self):
        """Message field 'string_valued_meta_data'."""
        return self._string_valued_meta_data

    @string_valued_meta_data.setter
    def string_valued_meta_data(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'string_valued_meta_data' field must be a set or sequence and each value of type 'str'"
        self._string_valued_meta_data = value

    @property
    def time_valued_meta_data(self):
        """Message field 'time_valued_meta_data'."""
        return self._time_valued_meta_data

    @time_valued_meta_data.setter
    def time_valued_meta_data(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
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
                 all(isinstance(v, Time) for v in value) and
                 True), \
                "The 'time_valued_meta_data' field must be a set or sequence and each value of type 'Time'"
        self._time_valued_meta_data = value
