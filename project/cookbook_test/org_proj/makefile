SRC_FILE =  ./src/main.cpp
SRC_FILE += ./src/global.cpp
CPPFLAGs = -Wall
INCLUDE = -I./inc/ 
CC = g++

all: main
main: ${SRC_FILE} 
	${CC} ${CFLAGS} -o $@ ${SRC_FILE} ${LIBS} ${INCLUDE}
.cpp.o:
	   ${CC} ${CFLAGS} -c $<
