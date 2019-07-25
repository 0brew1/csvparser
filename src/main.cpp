//
//  main.cpp
//  csvparser
//

#include <iostream>
#include "parser.hpp"

void printVector(std::vector<std::string>& vec){
    for(auto t: vec) {
        std::cout<<t<<std::endl;
    }
}


int main(int argc, const char * argv[]) {
    /*std::string line("\"This, is\",12,14");
    std::string line(",\"This, is\",12,14,\"\",end");
    std::string line("Bengaluru,25,32,12,14");*/
    std::string line("a,b,c");
    std::vector<std::string> output;
    csvparser::parseLine(output, line);
	printVector(output);
    return 0;
}
