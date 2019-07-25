//
//  parser.hpp
//  csvparser
//
//

#ifndef parser_hpp
#define parser_hpp

#include <iostream>
#include <vector>

namespace csvparser {
	#define S_OK 0
	#define E_INVALID_INPUT -1
	int parseLine(std::vector<std::string>& output, std::string line, char separator=',');
}

#endif /* parser_hpp */
