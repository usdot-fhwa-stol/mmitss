# generated from rosidl_generator_py/resource/_idl.py.em
# with input from carma_debug_ros2_msgs:msg/LaneletIdRegulatoryElementPair.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneletIdRegulatoryElementPair(type):
    """Metaclass of message 'LaneletIdRegulatoryElementPair'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('carma_debug_ros2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'carma_debug_ros2_msgs.msg.LaneletIdRegulatoryElementPair')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lanelet_id_regulatory_element_pair
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lanelet_id_regulatory_element_pair
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lanelet_id_regulatory_element_pair
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lanelet_id_regulatory_element_pair
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lanelet_id_regulatory_element_pair

            from carma_debug_ros2_msgs.msg import RegulatoryElement
            if RegulatoryElement.__class__._TYPE_SUPPORT is None:
                RegulatoryElement.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneletIdRegulatoryElementPair(metaclass=Metaclass_LaneletIdRegulatoryElementPair):
    """Message class 'LaneletIdRegulatoryElementPair'."""

    __slots__ = [
        '_lanelet_id',
        '_element',
    ]

    _fields_and_field_types = {
        'lanelet_id': 'uint64',
        'element': 'carma_debug_ros2_msgs/RegulatoryElement',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['carma_debug_ros2_msgs', 'msg'], 'RegulatoryElement'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lanelet_id = kwargs.get('lanelet_id', int())
        from carma_debug_ros2_msgs.msg import RegulatoryElement
        self.element = kwargs.get('element', RegulatoryElement())

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
        if self.lanelet_id != other.lanelet_id:
            return False
        if self.element != other.element:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lanelet_id(self):
        """Message field 'lanelet_id'."""
        return self._lanelet_id

    @lanelet_id.setter
    def lanelet_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanelet_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'lanelet_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._lanelet_id = value

    @property
    def element(self):
        """Message field 'element'."""
        return self._element

    @element.setter
    def element(self, value):
        if __debug__:
            from carma_debug_ros2_msgs.msg import RegulatoryElement
            assert \
                isinstance(value, RegulatoryElement), \
                "The 'element' field must be a sub message of type 'RegulatoryElement'"
        self._element = value
