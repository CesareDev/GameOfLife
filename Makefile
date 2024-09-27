CC = g++
SRC_DIR = ./GameOfLife/src/
OBJ_DIR = ./obj/
LIBS_DIR = ./dep/lib/
INCLUDE_DIR = ./dep/include/
BIN_DIR = ./bin/

BIN_NAME = GoL
LIBS = -lraylib -lm
OBJ_FILES = $(OBJ_DIR)main.o $(OBJ_DIR)World.o $(OBJ_DIR)Cell.o $(OBJ_DIR)pch.o

MKDIR_OBJ = mkdir -p $(OBJ_DIR) 
MKDIR_BIN = mkdir -p $(BIN_DIR)

$(shell $(MKDIR_OBJ))
$(shell $(MKDIR_BIN))

all: $(BIN_DIR)$(BIN_NAME)

$(BIN_DIR)$(BIN_NAME): $(OBJ_FILES)
	g++ $(OBJ_FILES) -L$(LIBS_DIR) $(LIBS) -o $(BIN_DIR)$(BIN_NAME)

$(OBJ_DIR)main.o: $(SRC_DIR)main.cpp
	g++ -c $(SRC_DIR)main.cpp -I$(INCLUDE_DIR) -o $(OBJ_DIR)main.o

$(OBJ_DIR)Cell.o: $(SRC_DIR)Cell.cpp
	g++ -c $(SRC_DIR)Cell.cpp -I$(INCLUDE_DIR) -o $(OBJ_DIR)Cell.o

$(OBJ_DIR)World.o: $(SRC_DIR)World.cpp
	g++ -c $(SRC_DIR)World.cpp -I$(INCLUDE_DIR) -o $(OBJ_DIR)World.o

$(OBJ_DIR)pch.o: $(SRC_DIR)pch.cpp
	g++ -c $(SRC_DIR)pch.cpp -I$(INCLUDE_DIR) -o $(OBJ_DIR)pch.o

clean:
	rm -r $(BIN_DIR)
	rm -r $(OBJ_DIR)
