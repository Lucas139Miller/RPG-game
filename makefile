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
${BIN}/${TARGET}: ${BUILD}/main.o ${BUILD}/App.o ${BUILD}/KeyState.o ${BUILD}/Player.o ${BUILD}/GameSettings.o ${BUILD}/Entity.o ${BUILD}/EntityStatus.o
	${CC} ${BUILD}/*.o -o ${BIN}/${TARGET} ${SDL}

#COMPILING
${BUILD}/main.o: ${SRC}/main.cpp
	${CC} -c -I${INCLUDE} ${SRC}/main.cpp -o ${BUILD}/main.o ${SDL}
${BUILD}/App.o: ${SRC}/App.cpp
	${CC} -c -I${INCLUDE} ${SRC}/App.cpp -o ${BUILD}/App.o ${SDL}
${BUILD}/KeyState.o: ${SRC}/KeyState.cpp
	${CC} -c -I${INCLUDE} ${SRC}/KeyState.cpp -o ${BUILD}/KeyState.o
${BUILD}/Player.o: ${SRC}/Player.cpp
	${CC} -c -I${INCLUDE} ${SRC}/Player.cpp -o ${BUILD}/Player.o
${BUILD}/GameSettings.o: ${SRC}/GameSettings.cpp
	${CC} -c -I${INCLUDE} ${SRC}/GameSettings.cpp -o ${BUILD}/GameSettings.o
${BUILD}/Entity.o: ${SRC}/Entity.cpp
	${CC} -c -I${INCLUDE} ${SRC}/Entity.cpp -o ${BUILD}/Entity.o
${BUILD}/EntityStatus.o: ${SRC}/EntityStatus.cpp
	${CC} -c -I${INCLUDE} ${SRC}/EntityStatus.cpp -o ${BUILD}/EntityStatus.o


#PRE CONFIGURATION
setup:
	mkdir -p ${BUILD}
	mkdir -p ${BIN}

run:
	${BIN}/${TARGET}
	cd ../
