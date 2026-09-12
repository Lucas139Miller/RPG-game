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
${BIN}/${TARGET}: ${BUILD}/main.o ${BUILD}/App.o ${BUILD}/KeyState.o ${BUILD}/Player.o ${BUILD}/GameSettings.o ${BUILD}/Entity.o ${BUILD}/LivingEntity.o ${BUILD}/GameTypes.o ${BUILD}/Collider.o ${BUILD}/ColliderRec.o
	${CC} $^ -o $@ ${SDL}

#COMPILING
${BUILD}/main.o: ${SRC}/main.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/main.cpp -o ${BUILD}/main.o ${SDL}
${BUILD}/App.o: ${SRC}/App.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/App.cpp -o ${BUILD}/App.o ${SDL}
${BUILD}/KeyState.o: ${SRC}/KeyState.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/KeyState.cpp -o ${BUILD}/KeyState.o
${BUILD}/Player.o: ${SRC}/Player.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/Player.cpp -o ${BUILD}/Player.o
${BUILD}/GameSettings.o: ${SRC}/GameSettings.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/GameSettings.cpp -o ${BUILD}/GameSettings.o
${BUILD}/Entity.o: ${SRC}/Entity.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/Entity.cpp -o ${BUILD}/Entity.o
${BUILD}/LivingEntity.o: ${SRC}/LivingEntity.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/LivingEntity.cpp -o ${BUILD}/LivingEntity.o
${BUILD}/GameTypes.o: ${SRC}/GameTypes.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/GameTypes.cpp -o ${BUILD}/GameTypes.o
${BUILD}/Collider.o: ${SRC}/Collider.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/Collider.cpp -o ${BUILD}/Collider.o
${BUILD}/ColliderRec.o: ${SRC}/ColliderRec.cpp
	${CC} -MMD -MP -c -I${INCLUDE} ${SRC}/ColliderRec.cpp -o ${BUILD}/ColliderRec.o

#PRE CONFIGURATION
setup:
	mkdir -p ${BUILD}
	mkdir -p ${BIN}

run:
	${BIN}/${TARGET}
	cd ../

clear:
	rm -f ${BUILD}/*.o ${BUILD}/*.d

# AUTOMATIC DEPENDENCIES
-include $(wildcard $(BUILD)/*.d)
