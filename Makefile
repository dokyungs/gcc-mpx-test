CXX:=g++
CPPFLAGS=-g -O2
MPXFLAGS=-fcheck-pointer-bounds -mmpx
LDFLAGS=

CC_FILES=$(wildcard *.cc)
OBJ_FILES=$(CC_FILES:.cc=.o)
MPX_OBJ_FILES=$(CC_FILES:.cc=.mpx.o)

all: compile

%.o: %.cc
	$(CXX) $(CPPFLAGS) -c $^ -o $@

%.mpx.o: %.cc
	$(CXX) $(CPPFLAGS) $(MPXFLAGS) -c $^ -o $@

compile: $(OBJ_FILES) $(MPX_OBJ_FILES)

.PHONY: clean

clean:
	$(RM) *.o
