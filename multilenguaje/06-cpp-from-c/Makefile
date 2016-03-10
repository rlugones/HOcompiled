.PHONY: default help object executable all clean
CC = gcc
CXXC = g++

LD = $(CC)

SOURCE_C = $(wildcard *.c)
SOURCE_CXX = $(wildcard *.cpp)
OBJECTS_C = $(patsubst %.c, %_c.o, $(SOURCE_C))
OBJECTS_CXX = $(patsubst %.cpp, %_cpp.o, $(SOURCE_CXX))

EXECUTABLE = c-main.e

default: help

help:
	@echo "\
Options:\n\n\
  make objects:       compiler makes objects for every *.c and *.cpp\n\
  make executable:    compiler makes executable\n\
  make all:           build all previous\n\
  make clean:         delete output files\n\
  make help:          display this help"

objects: $(OBJECTS_C) $(OBJECTS_CXX)

executable: $(EXECUTABLE)

all: objects executable

%_c.o: %.c
	$(CC) -c $^ -o $@

%_cpp.o: %.cpp
	$(CXXC) -c $^ -o $@

%.e: $(OBJECTS_C) $(OBJECTS_CXX)
	$(CC) $^ -o $@

clean:
	rm -rfv $(OBJECTS_C) $(OBJECTS_CXX) $(EXECUTABLE)
