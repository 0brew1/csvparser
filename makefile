OUTPUT_DIR = build

csvparser: parser.o
	gcc -o build/parser parser.o
	
parser.o: parser.cpp parser.hpp
	gcc -c parcer.cpp

