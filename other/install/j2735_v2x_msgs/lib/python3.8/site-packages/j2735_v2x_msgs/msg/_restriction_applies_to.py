# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/RestrictionAppliesTo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RestrictionAppliesTo(type):
    """Metaclass of message 'RestrictionAppliesTo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'EQUIPPEDTRANSIT': 1,
        'EQUIPPEDTAXIS': 2,
        'EQUIPPEDOTHER': 3,
        'EMISSIONCOMPLIANT': 4,
        'EQUIPPEDBICYCLE': 5,
        'WEIGHTCOMPLIANT': 6,
        'HEIGHTCOMPLIANT': 7,
        'PEDESTRIANS': 8,
        'SLOWMOVINGPERSONS': 9,
        'WHEELCHAIRUSERS': 10,
        'VISUALDISABILITIES': 11,
        'AUDIODISABILITIES': 12,
        'OTHERUNKNOWNDISABILITIES': 13,
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
                'j2735_v2x_msgs.msg.RestrictionAppliesTo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__restriction_applies_to
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__restriction_applies_to
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__restriction_applies_to
            cls._TYPE_SUPPORT = module.type_support_msg__msg__restriction_applies_to
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__restriction_applies_to

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'EQUIPPEDTRANSIT': cls.__constants['EQUIPPEDTRANSIT'],
            'EQUIPPEDTAXIS': cls.__constants['EQUIPPEDTAXIS'],
            'EQUIPPEDOTHER': cls.__constants['EQUIPPEDOTHER'],
            'EMISSIONCOMPLIANT': cls.__constants['EMISSIONCOMPLIANT'],
            'EQUIPPEDBICYCLE': cls.__constants['EQUIPPEDBICYCLE'],
            'WEIGHTCOMPLIANT': cls.__constants['WEIGHTCOMPLIANT'],
            'HEIGHTCOMPLIANT': cls.__constants['HEIGHTCOMPLIANT'],
            'PEDESTRIANS': cls.__constants['PEDESTRIANS'],
            'SLOWMOVINGPERSONS': cls.__constants['SLOWMOVINGPERSONS'],
            'WHEELCHAIRUSERS': cls.__constants['WHEELCHAIRUSERS'],
            'VISUALDISABILITIES': cls.__constants['VISUALDISABILITIES'],
            'AUDIODISABILITIES': cls.__constants['AUDIODISABILITIES'],
            'OTHERUNKNOWNDISABILITIES': cls.__constants['OTHERUNKNOWNDISABILITIES'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_RestrictionAppliesTo.__constants['NONE']

    @property
    def EQUIPPEDTRANSIT(self):
        """Message constant 'EQUIPPEDTRANSIT'."""
        return Metaclass_RestrictionAppliesTo.__constants['EQUIPPEDTRANSIT']

    @property
    def EQUIPPEDTAXIS(self):
        """Message constant 'EQUIPPEDTAXIS'."""
        return Metaclass_RestrictionAppliesTo.__constants['EQUIPPEDTAXIS']

    @property
    def EQUIPPEDOTHER(self):
        """Message constant 'EQUIPPEDOTHER'."""
        return Metaclass_RestrictionAppliesTo.__constants['EQUIPPEDOTHER']

    @property
    def EMISSIONCOMPLIANT(self):
        """Message constant 'EMISSIONCOMPLIANT'."""
        return Metaclass_RestrictionAppliesTo.__constants['EMISSIONCOMPLIANT']

    @property
    def EQUIPPEDBICYCLE(self):
        """Message constant 'EQUIPPEDBICYCLE'."""
        return Metaclass_RestrictionAppliesTo.__constants['EQUIPPEDBICYCLE']

    @property
    def WEIGHTCOMPLIANT(self):
        """Message constant 'WEIGHTCOMPLIANT'."""
        return Metaclass_RestrictionAppliesTo.__constants['WEIGHTCOMPLIANT']

    @property
    def HEIGHTCOMPLIANT(self):
        """Message constant 'HEIGHTCOMPLIANT'."""
        return Metaclass_RestrictionAppliesTo.__constants['HEIGHTCOMPLIANT']

    @property
    def PEDESTRIANS(self):
        """Message constant 'PEDESTRIANS'."""
        return Metaclass_RestrictionAppliesTo.__constants['PEDESTRIANS']

    @property
    def SLOWMOVINGPERSONS(self):
        """Message constant 'SLOWMOVINGPERSONS'."""
        return Metaclass_RestrictionAppliesTo.__constants['SLOWMOVINGPERSONS']

    @property
    def WHEELCHAIRUSERS(self):
        """Message constant 'WHEELCHAIRUSERS'."""
        return Metaclass_RestrictionAppliesTo.__constants['WHEELCHAIRUSERS']

    @property
    def VISUALDISABILITIES(self):
        """Message constant 'VISUALDISABILITIES'."""
        return Metaclass_RestrictionAppliesTo.__constants['VISUALDISABILITIES']

    @property
    def AUDIODISABILITIES(self):
        """Message constant 'AUDIODISABILITIES'."""
        return Metaclass_RestrictionAppliesTo.__constants['AUDIODISABILITIES']

    @property
    def OTHERUNKNOWNDISABILITIES(self):
        """Message constant 'OTHERUNKNOWNDISABILITIES'."""
        return Metaclass_RestrictionAppliesTo.__constants['OTHERUNKNOWNDISABILITIES']


class RestrictionAppliesTo(metaclass=Metaclass_RestrictionAppliesTo):
    """
    Message class 'RestrictionAppliesTo'.

    Constants:
      NONE
      EQUIPPEDTRANSIT
      EQUIPPEDTAXIS
      EQUIPPEDOTHER
      EMISSIONCOMPLIANT
      EQUIPPEDBICYCLE
      WEIGHTCOMPLIANT
      HEIGHTCOMPLIANT
      PEDESTRIANS
      SLOWMOVINGPERSONS
      WHEELCHAIRUSERS
      VISUALDISABILITIES
      AUDIODISABILITIES
      OTHERUNKNOWNDISABILITIES
    """

    __slots__ = [
        '_restriction_applies_to',
    ]

    _fields_and_field_types = {
        'restriction_applies_to': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.restriction_applies_to = kwargs.get('restriction_applies_to', int())

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
        if self.restriction_applies_to != other.restriction_applies_to:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def restriction_applies_to(self):
        """Message field 'restriction_applies_to'."""
        return self._restriction_applies_to

    @restriction_applies_to.setter
    def restriction_applies_to(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'restriction_applies_to' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'restriction_applies_to' field must be an unsigned integer in [0, 255]"
        self._restriction_applies_to = value
