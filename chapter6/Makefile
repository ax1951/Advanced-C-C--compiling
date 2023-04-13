INCLUDES = $(COMMON_INCLUDES)
DEBUG_CFLAGS = -Wall -g -O0 -shared
RELEASE_CFLAGS = -Wall -O2 -shared
VISIBILITY_FLAGS = -fvisibility=hidden -fvisibility-inlines-hidden

ifeq ($(DEBUG), 1)
	CFLAGS = $(DEBUG_CFLAGS) -fPIC $(INCLUDES)
else
	CFLAGS = $(RELEASE_CFLAGS) -fPIC $(INCLUDES)
endif

COMPILE_NORMAL = g++ $(CFLAGS)

COMPILE = g++ $(CFLAGS) $(VISIBILITY_FLAGS)

TARGET_LIBS = libdefaultvisibility.so libcontrolledvisibility.so
all: ${TARGET_LIBS}
SRCS = libdefaultvisibility.cpp libcontrolledvisibility.cpp

.PHONY: all

libdefaultvisibility.so: libdefaultvisibility.o
	$(COMPILE_NORMAL) $^ -o libdefaultvisibility.so

libcontrolledvisibility.so: libcontrolledvisibility.o
	$(COMPILE) $^ -o libcontrolledvisibility.so

libdefaultvisibility.o: libdefaultvisibility.cpp
	g++ -c $^ -o libdefaultvisibility.o
	
libcontrolledvisibility.o: libcontrolledvisibility.cpp
	$(COMPILE) $^ -o libcontrolledvisibility.o
