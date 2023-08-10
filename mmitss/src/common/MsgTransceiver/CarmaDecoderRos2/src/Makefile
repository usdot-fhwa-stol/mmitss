# Message Encoder Makefile 
BUILD_ROOT=../../../../..
OTHER_ROOT=../../../../../../other
MAKE_ROOT :=$(BUILD_ROOT)/make
include $(MAKE_ROOT)/newheader.mk

INCLUDES    := -I$(J2735_INCL)  -I$(COMMON_INCL) -I$(BUILD_ROOT)/3rdparty/ -I$(MAPENGINE_INCL) -I/opt/ros/foxy/include -I/opt/ros/foxy/lib -I${OTHER_ROOT}/install/carma_driver_msgs/include # tell the compiler where to find the include directories
#-Wl is used to pass the option(rpath) to the linker --- we probably want to move this into a default rather than a hard coded location
#tell the linker where to find the libraries
LIBS        := -L$(J2735_LIB) -L$(MMITSS_COMMON_LIB) -L$(MAPENGINE_LIB) -lmmitss-common -llocAware -ldsrc -lasn -L${OTHER_ROOT}/install/carma_driver_msgs/lib   -L/opt/ros/foxy/lib -lament_index_cpp -lrclcpp -lrmw -lrcutils -lrcl -ltracetools -llibstatistics_collector\
  -lcarma_driver_msgs__rosidl_typesupport_cpp -lstatistics_msgs__rosidl_typesupport_cpp

# LDFLAGS     := -Wl,-rpath,/usr/local/lib/mmitss
# LDLIBS      := -llocAware -ldsrc -lasn -lmmitss-common # tell the linker to add a path to the json shared lib 


#cpp's go here
SRC += carma-msg-decoder.cpp  carma-inbound-listener.cpp carma-outbound-listener.cpp carma-transceiver-decoder.cpp
#the name of the executable goes here
TARGET = M_CarmaMsgDecoder 

# list the .o's corresponding to .cpp's
# see: https://www.gnu.org/software/make/manual/html_node/Text-Functions.html
OBJECTS = $(patsubst %.cpp, %.o, $(SRC))

include $(MAKE_ROOT)/newrules.mk

