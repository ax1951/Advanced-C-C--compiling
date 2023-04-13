.PHONY: all
TARGET_LIBS = libdefaultvisibility.so libcontrolledvisibility.so
all: ${TARGET_LIBS}

INCLUDES = $(COMMON_INCLUDES)

libdefaultvisibility.o: libdefaultvisibility.cpp
	g++ -Wall -O0 -g -fPIC $(COMMON_INCLUDES) -c $^ -o $@

libdefaultvisibility.so: libdefaultvisibility.o
	g++ -shared $^ -o $@

libcontrolledvisibility.o: libcontrolledvisibility.cpp
	g++ -Wall -O0 -g -fPIC $(COMMON_INCLUDES) -fvisibility=hidden -fvisibility-inlines-hidden -c $^ -o $@

libcontrolledvisibility.so: libcontrolledvisibility.o
	g++ -shared $^ -o $@

.PHONY: clean 
clean:
	rm -rf *.o *.so
	
