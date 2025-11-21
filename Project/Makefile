#	Compiler	and	flags
CXX	=	g++
CXXFLAGS	=	-Wall	-Iinclude

#	Target	executable
TARGET	=	hello_app

#	Source	and	object	files
SRC	=	src/main.cpp	src/hello.cpp
OBJ	=	$(SRC:.cpp=.o)

#	Default	rule
all:	$(TARGET)

#	Linking	step
$(TARGET):	$(OBJ)
				$(CXX)	$(OBJ)	-o	$(TARGET)

#	Compilation	step	(pattern	rule)
src/%.o:	src/%.cpp	include/%.hpp
				$(CXX)	$(CXXFLAGS)	-c	$<	-o	$@

#	Clean	up	build	artifacts
clean:
				rm	-f	src/*.o	$(TARGET)
