# PRS Makefile 
BUILD_ROOT=../../..
MAKE_ROOT :=$(BUILD_ROOT)/make
include $(MAKE_ROOT)/newheader.mk


INCLUDES    := -I$(J2735_INCL) -I$(JSONCPP_INCL) -I$(COMMON_INCL) -I$(BUILD_ROOT)/3rdparty/ -I$(MAPENGINE_INCL) -I/opt/carma/include/  # tell the compiler where to find theinclude directories
CPPFLAGS	:= $(CPPFLAGS) -fPIC -std=c++17 -DLOGGING
LDFLAGS     := -L/opt/carma/lib

#LDFLAGS     := -fPIC -Wl,-rpath=$(J2735_SO_DIR) # tell the linker to add a path to the j2735 shared lib 
#LDFLAGS     := -Wl,-rpath=$(J2735_SO_DIR) # tell the linker to add a path to the j2735 shared lib 
#-Wl is used to pass the option(rpath) to the linker --- we probably want to move this into a default rather than a hard coded location
LIBS        := -L$(J2735_LIB) -L$(MMITSS_COMMON_LIB) -L$(MAPENGINE_LIB) -L$(NETSNMP_LIB) -llocAware -ldsrc -lasn -lmmitss-common -lnetsnmp -lcarma-clock -ludp-socket -ludp_time_sync   #tell the linker where to find the libraries

#cpp's go here
SRC += priority-request-server-main.cpp  PriorityRequestServer.cpp 
#the name of the executable goes here
TARGET = M_PriorityRequestServer

# list the .o's corresponding to .cpp's
# see: https://www.gnu.org/software/make/manual/html_node/Text-Functions.html
OBJECTS = $(patsubst %.cpp, %.o, $(SRC))

include $(MAKE_ROOT)/newrules.mk


