# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/NodeAttributeXY.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeAttributeXY(type):
    """Metaclass of message 'NodeAttributeXY'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESERVED': 0,
        'STOPLINE': 1,
        'ROUNDEDCAPSTYLEA': 2,
        'ROUNDEDCAPSTYLEB': 3,
        'MERGEPOINT': 4,
        'DIVERGEPOINT': 5,
        'DOWNSTREAMSTOPLINE': 6,
        'DOWNSTREAMSTARTNODE': 7,
        'CLOSEDTOTRAFFIC': 8,
        'SAFEISLAND': 9,
        'CURBPRESENTATSTEPOFF': 10,
        'HYDRANTPRESENT': 11,
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
                'j2735_v2x_msgs.msg.NodeAttributeXY')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_attribute_xy
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_attribute_xy
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_attribute_xy
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_attribute_xy
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_attribute_xy

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESERVED': cls.__constants['RESERVED'],
            'STOPLINE': cls.__constants['STOPLINE'],
            'ROUNDEDCAPSTYLEA': cls.__constants['ROUNDEDCAPSTYLEA'],
            'ROUNDEDCAPSTYLEB': cls.__constants['ROUNDEDCAPSTYLEB'],
            'MERGEPOINT': cls.__constants['MERGEPOINT'],
            'DIVERGEPOINT': cls.__constants['DIVERGEPOINT'],
            'DOWNSTREAMSTOPLINE': cls.__constants['DOWNSTREAMSTOPLINE'],
            'DOWNSTREAMSTARTNODE': cls.__constants['DOWNSTREAMSTARTNODE'],
            'CLOSEDTOTRAFFIC': cls.__constants['CLOSEDTOTRAFFIC'],
            'SAFEISLAND': cls.__constants['SAFEISLAND'],
            'CURBPRESENTATSTEPOFF': cls.__constants['CURBPRESENTATSTEPOFF'],
            'HYDRANTPRESENT': cls.__constants['HYDRANTPRESENT'],
        }

    @property
    def RESERVED(self):
        """Message constant 'RESERVED'."""
        return Metaclass_NodeAttributeXY.__constants['RESERVED']

    @property
    def STOPLINE(self):
        """Message constant 'STOPLINE'."""
        return Metaclass_NodeAttributeXY.__constants['STOPLINE']

    @property
    def ROUNDEDCAPSTYLEA(self):
        """Message constant 'ROUNDEDCAPSTYLEA'."""
        return Metaclass_NodeAttributeXY.__constants['ROUNDEDCAPSTYLEA']

    @property
    def ROUNDEDCAPSTYLEB(self):
        """Message constant 'ROUNDEDCAPSTYLEB'."""
        return Metaclass_NodeAttributeXY.__constants['ROUNDEDCAPSTYLEB']

    @property
    def MERGEPOINT(self):
        """Message constant 'MERGEPOINT'."""
        return Metaclass_NodeAttributeXY.__constants['MERGEPOINT']

    @property
    def DIVERGEPOINT(self):
        """Message constant 'DIVERGEPOINT'."""
        return Metaclass_NodeAttributeXY.__constants['DIVERGEPOINT']

    @property
    def DOWNSTREAMSTOPLINE(self):
        """Message constant 'DOWNSTREAMSTOPLINE'."""
        return Metaclass_NodeAttributeXY.__constants['DOWNSTREAMSTOPLINE']

    @property
    def DOWNSTREAMSTARTNODE(self):
        """Message constant 'DOWNSTREAMSTARTNODE'."""
        return Metaclass_NodeAttributeXY.__constants['DOWNSTREAMSTARTNODE']

    @property
    def CLOSEDTOTRAFFIC(self):
        """Message constant 'CLOSEDTOTRAFFIC'."""
        return Metaclass_NodeAttributeXY.__constants['CLOSEDTOTRAFFIC']

    @property
    def SAFEISLAND(self):
        """Message constant 'SAFEISLAND'."""
        return Metaclass_NodeAttributeXY.__constants['SAFEISLAND']

    @property
    def CURBPRESENTATSTEPOFF(self):
        """Message constant 'CURBPRESENTATSTEPOFF'."""
        return Metaclass_NodeAttributeXY.__constants['CURBPRESENTATSTEPOFF']

    @property
    def HYDRANTPRESENT(self):
        """Message constant 'HYDRANTPRESENT'."""
        return Metaclass_NodeAttributeXY.__constants['HYDRANTPRESENT']


class NodeAttributeXY(metaclass=Metaclass_NodeAttributeXY):
    """
    Message class 'NodeAttributeXY'.

    Constants:
      RESERVED
      STOPLINE
      ROUNDEDCAPSTYLEA
      ROUNDEDCAPSTYLEB
      MERGEPOINT
      DIVERGEPOINT
      DOWNSTREAMSTOPLINE
      DOWNSTREAMSTARTNODE
      CLOSEDTOTRAFFIC
      SAFEISLAND
      CURBPRESENTATSTEPOFF
      HYDRANTPRESENT
    """

    __slots__ = [
        '_node_attribute_xy',
    ]

    _fields_and_field_types = {
        'node_attribute_xy': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node_attribute_xy = kwargs.get('node_attribute_xy', int())

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
        if self.node_attribute_xy != other.node_attribute_xy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def node_attribute_xy(self):
        """Message field 'node_attribute_xy'."""
        return self._node_attribute_xy

    @node_attribute_xy.setter
    def node_attribute_xy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_attribute_xy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'node_attribute_xy' field must be an unsigned integer in [0, 255]"
        self._node_attribute_xy = value
