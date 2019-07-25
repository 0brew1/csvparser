CC      = /usr/bin/g++
CFLAGS = -std=gnu++14

SRC = src
BUILD = build

parser: parser.o main.o
	$(CC) $(CFLAGS) $(BUILD)/*.o -o $(BUILD)/parser.out

parser.o: $(SRC)/parser.cpp $(SRC)/parser.hpp
	$(CC) $(CFLAGS) -c $(SRC)/parser.cpp -o $(BUILD)/parser.o

main.o: $(SRC)/main.cpp $(SRC)/parser.hpp
	$(CC) $(CFLAGS) -c $(SRC)/main.cpp -o $(BUILD)/main.o

clean:
	rm $(BUILD)/*
