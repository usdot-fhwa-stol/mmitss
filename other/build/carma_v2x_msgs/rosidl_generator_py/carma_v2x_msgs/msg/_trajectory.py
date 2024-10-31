# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_v2x_msgs:msg/Trajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trajectory(type):
    """Metaclass of message 'Trajectory'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAX_POINTS_IN_MESSAGE': 60,
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
                'carma_v2x_msgs.msg.Trajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory

            from carma_v2x_msgs.msg import LocationECEF
            if LocationECEF.__class__._TYPE_SUPPORT is None:
                LocationECEF.__class__.__import_type_support__()

            from carma_v2x_msgs.msg import LocationOffsetECEF
            if LocationOffsetECEF.__class__._TYPE_SUPPORT is None:
                LocationOffsetECEF.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAX_POINTS_IN_MESSAGE': cls.__constants['MAX_POINTS_IN_MESSAGE'],
        }

    @property
    def MAX_POINTS_IN_MESSAGE(self):
        """Message constant 'MAX_POINTS_IN_MESSAGE'."""
        return Metaclass_Trajectory.__constants['MAX_POINTS_IN_MESSAGE']


class Trajectory(metaclass=Metaclass_Trajectory):
    """
    Message class 'Trajectory'.

    Constants:
      MAX_POINTS_IN_MESSAGE
    """

    __slots__ = [
        '_location',
        '_offsets',
    ]

    _fields_and_field_types = {
        'location': 'carma_v2x_msgs/LocationECEF',
        'offsets': 'sequence<carma_v2x_msgs/LocationOffsetECEF>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'LocationECEF'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['carma_v2x_msgs', 'msg'], 'LocationOffsetECEF')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from carma_v2x_msgs.msg import LocationECEF
        self.location = kwargs.get('location', LocationECEF())
        self.offsets = kwargs.get('offsets', [])

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
        if self.location != other.location:
            return False
        if self.offsets != other.offsets:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import LocationECEF
            assert \
                isinstance(value, LocationECEF), \
                "The 'location' field must be a sub message of type 'LocationECEF'"
        self._location = value

    @property
    def offsets(self):
        """Message field 'offsets'."""
        return self._offsets

    @offsets.setter
    def offsets(self, value):
        if __debug__:
            from carma_v2x_msgs.msg import LocationOffsetECEF
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
                 all(isinstance(v, LocationOffsetECEF) for v in value) and
                 True), \
                "The 'offsets' field must be a set or sequence and each value of type 'LocationOffsetECEF'"
        self._offsets = value
