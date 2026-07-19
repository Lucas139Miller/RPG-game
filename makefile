#VARIABLES
CC = g++

#EXECUTABLE NAME
TARGET = app

#FOLDERS
SRC = src
INCLUDE = include
BUILD = build
BIN = bin
SDL = `pkg-config --cflags --libs sdl2`

all: setup ${BIN}/${TARGET}

#LINKING
${BIN}/${TARGET}: ${BUILD}/main.o ${BUILD}/App.o ${BUILD}/KeyState.o
	${CC} ${BUILD}/*.o -o ${BIN}/${TARGET} ${SDL}

#COMPILING
${BUILD}/main.o: ${SRC}/main.cpp
	${CC} -c -I${INCLUDE} ${SRC}/main.cpp -o ${BUILD}/main.o ${SDL}
${BUILD}/App.o: ${SRC}/App.cpp
	${CC} -c -I${INCLUDE} ${SRC}/App.cpp -o ${BUILD}/App.o
${BUILD}/KeyState.o: ${SRC}/KeyState.cpp
	${CC} -c -I${INCLUDE} ${SRC}/KeyState.cpp -o ${BUILD}/KeyState.o

#PRE CONFIGURATION
setup:
	mkdir -p ${BUILD}
	mkdir -p ${BIN}

run:
	${BIN}/${TARGET}
	cd ../
