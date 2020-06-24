DIR_BIN = ./bin
DIR_BUILD = ./build
DIR_SRC = ./src

all: $(DIR_BIN)/main

$(DIR_BIN)/main: $(DIR_BUILD)/main.o $(DIR_BUILD)/board.o $(DIR_BUILD)/board_print_plain.o
	g++ -Wall -o $(DIR_BIN)/main $(DIR_BUILD)/main.o $(DIR_BUILD)/board.o $(DIR_BUILD)/board_print_plain.o
$(DIR_BUILD)/main.o: $(DIR_SRC)/main.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/main.o -c $(DIR_SRC)/main.cpp 
$(DIR_BUILD)/board.o: $(DIR_SRC)/board.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/board.o -c $(DIR_SRC)/board.cpp    
$(DIR_BUILD)/board_print_plain.o: $(DIR_SRC)/board_print_plain.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/board_print_plain.o -c $(DIR_SRC)/board_print_plain.cpp

.PHONY: clean

clean:
	rm -f $(DIR_BIN)/main
	rm -f $(DIR_BUILD)/*.o