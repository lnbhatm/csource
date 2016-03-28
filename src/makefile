# Project: Test
# Makefile created by Dev-C++ 4.9.9.2

CPP  = g++.exe
CC   = gcc.exe
WINDRES = windres.exe
RES  = 
OBJ  = srctest.o $(RES)
LINKOBJ  = srctest.o $(RES)
LIBS =   
INCS = 
CXXINCS = 
BIN  = Test.exe
CXXFLAGS = $(CXXINCS)  
CFLAGS = $(INCS)  
RM = rm -f

.PHONY: all all-before all-after clean clean-custom

all: all-before Test.exe all-after


clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o "Test.exe" $(LIBS)

srctest.o: srctest.c
	$(CC) -c srctest.c -o srctest.o $(CFLAGS)
