# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j3224_v2x_msgs:msg/ObjectType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectType(type):
    """Metaclass of message 'ObjectType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'VEHICLE': 1,
        'VRU': 2,
        'ANIMAL': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j3224_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j3224_v2x_msgs.msg.ObjectType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'VEHICLE': cls.__constants['VEHICLE'],
            'VRU': cls.__constants['VRU'],
            'ANIMAL': cls.__constants['ANIMAL'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_ObjectType.__constants['UNKNOWN']

    @property
    def VEHICLE(self):
        """Message constant 'VEHICLE'."""
        return Metaclass_ObjectType.__constants['VEHICLE']

    @property
    def VRU(self):
        """Message constant 'VRU'."""
        return Metaclass_ObjectType.__constants['VRU']

    @property
    def ANIMAL(self):
        """Message constant 'ANIMAL'."""
        return Metaclass_ObjectType.__constants['ANIMAL']


class ObjectType(metaclass=Metaclass_ObjectType):
    """
    Message class 'ObjectType'.

    Constants:
      UNKNOWN
      VEHICLE
      VRU
      ANIMAL
    """

    __slots__ = [
        '_object_type',
    ]

    _fields_and_field_types = {
        'object_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.object_type = kwargs.get('object_type', int())

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
        if self.object_type != other.object_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def object_type(self):
        """Message field 'object_type'."""
        return self._object_type

    @object_type.setter
    def object_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_type' field must be an unsigned integer in [0, 255]"
        self._object_type = value
