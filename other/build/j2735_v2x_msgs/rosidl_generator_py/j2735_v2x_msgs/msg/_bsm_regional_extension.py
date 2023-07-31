# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/BSMRegionalExtension.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BSMRegionalExtension(type):
    """Metaclass of message 'BSMRegionalExtension'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROUTE_DESTINATIONS': 1,
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
                'j2735_v2x_msgs.msg.BSMRegionalExtension')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bsm_regional_extension
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bsm_regional_extension
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bsm_regional_extension
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bsm_regional_extension
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bsm_regional_extension

            from j2735_v2x_msgs.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROUTE_DESTINATIONS': cls.__constants['ROUTE_DESTINATIONS'],
        }

    @property
    def ROUTE_DESTINATIONS(self):
        """Message constant 'ROUTE_DESTINATIONS'."""
        return Metaclass_BSMRegionalExtension.__constants['ROUTE_DESTINATIONS']


class BSMRegionalExtension(metaclass=Metaclass_BSMRegionalExtension):
    """
    Message class 'BSMRegionalExtension'.

    Constants:
      ROUTE_DESTINATIONS
    """

    __slots__ = [
        '_regional_extension_id',
        '_route_destination_points',
    ]

    _fields_and_field_types = {
        'regional_extension_id': 'uint16',
        'route_destination_points': 'sequence<j2735_v2x_msgs/Position3D>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['j2735_v2x_msgs', 'msg'], 'Position3D')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.regional_extension_id = kwargs.get('regional_extension_id', int())
        self.route_destination_points = kwargs.get('route_destination_points', [])

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
        if self.regional_extension_id != other.regional_extension_id:
            return False
        if self.route_destination_points != other.route_destination_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def regional_extension_id(self):
        """Message field 'regional_extension_id'."""
        return self._regional_extension_id

    @regional_extension_id.setter
    def regional_extension_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'regional_extension_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'regional_extension_id' field must be an unsigned integer in [0, 65535]"
        self._regional_extension_id = value

    @property
    def route_destination_points(self):
        """Message field 'route_destination_points'."""
        return self._route_destination_points

    @route_destination_points.setter
    def route_destination_points(self, value):
        if __debug__:
            from j2735_v2x_msgs.msg import Position3D
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
                 all(isinstance(v, Position3D) for v in value) and
                 True), \
                "The 'route_destination_points' field must be a set or sequence and each value of type 'Position3D'"
        self._route_destination_points = value
