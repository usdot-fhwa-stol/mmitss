# Message Encoder Makefile 
BUILD_ROOT=../../../..
MAKE_ROOT :=$(BUILD_ROOT)/make
include $(MAKE_ROOT)/newheader.mk

INCLUDES    := -I$(J2735_INCL)  -I$(COMMON_INCL) -I$(BUILD_ROOT)/3rdparty/ -I$(MAPENGINE_INCL) -I/opt/ros/noetic/include # tell the compiler where to find the include directories
#LDFLAGS     := -Wl,-rpath=$(J2735_SO_DIR) # tell the linker to add a path to the json shared lib 
#-Wl is used to pass the option(rpath) to the linker --- we probably want to move this into a default rather than a hard coded location
#tell the linker where to find the libraries
LIBS        := -L$(J2735_LIB) -L$(MMITSS_COMMON_LIB) -L$(MAPENGINE_LIB) -llocAware -ldsrc -lasn -lmmitss-common -L/opt/ros/noetic/lib -lroscpp -lrostime -lrosconsole -lroscpp_serialization


#cpp's go here
SRC += carma-msg-decoder.cpp  carma-inbound-listener.cpp carma-outbound-listener.cpp carma-transceiver-decoder.cpp
#the name of the executable goes here
TARGET = M_CarmaMsgDecoder 

# list the .o's corresponding to .cpp's
# see: https://www.gnu.org/software/make/manual/html_node/Text-Functions.html
OBJECTS = $(patsubst %.cpp, %.o, $(SRC))

include $(MAKE_ROOT)/newrules.mk

