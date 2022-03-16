CXX		:= gcc

BIN		:= bin
SRC		:= src

EXECUTABLE	:= main

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.c
	$(CXX) $^ -o $@ 

clean:
	-rm $(BIN)/*
