# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: target1 test

# runs for "make target1"
# the line below this one must be TABBED in (not spaces!)
# files DependsOn.o and main.cpp will be monitored for changes to know if it needs to be re-made
target1: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o target1

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

# runs for "make clean"
clean:
	rm target1 test