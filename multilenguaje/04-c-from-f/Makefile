.PHONY: default help object executable all clean
CC = gcc
FC = gfortran

LD = $(CC)

SOURCE_C = $(wildcard *.c)
SOURCE_F = $(wildcard *.f90)
OBJECTS_C = $(patsubst %.c, %_c.o, $(SOURCE_C))
OBJECTS_F = $(patsubst %.f90, %_f90.o, $(SOURCE_F))

EXECUTABLE = f-main.e

default: help

help:
	@echo "\
Options:\n\n\
  make objects:       compiler makes objects for every *.c and *.f90\n\
  make executable:    compiler makes executable\n\
  make all:           build all previous\n\
  make clean:         delete output files\n\
  make help:          display this help"

objects: $(OBJECTS_C) $(OBJECTS_F)

executable: $(EXECUTABLE)

all: objects executable

%_c.o: %.c
	$(CC) -c $^ -o $@

%_f90.o: %.f90
	$(FC) -c $^ -o $@

%.e: $(OBJECTS_C) $(OBJECTS_F)
	$(FC) $^ -o $@

clean:
	rm -rfv $(OBJECTS_C) $(OBJECTS_F) $(EXECUTABLE)
