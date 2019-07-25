//
//  parser.cpp
//  csvparser
//
//

#include "parser.hpp"

/*
 * Parses simple string like "FirstColumn, with comma",second,12,14
 * It ommits "" and treats everything inside as single value.
 *
 * Output: vector of tokenize values (FirstColumn, with comma), (second), (12), (14)
 */
int csvparser::parseLine(std::vector<std::string>& output, std::string line, char separator)
{
	if (line.empty()){
		return S_OK;
	}
	
	if (separator == 0){
		output.push_back(line);
	}
	
	const char *data = line.data();
	std::string token;
	if (*data==separator) {
		output.push_back("");
	}
	while (*data != '\0'){
		if (*data == separator){
			data++;
		}
		
		if (*data == '"'){
			++data;
			while(*(data) != '"' && *(data) != '\0') {
				token.push_back(*data);
				data++;
			}
			output.push_back(token);
			token.clear();
			if(*(data) == '"')
				++data;
		} else {
			while(*(data) != separator && *(data) != '\0') {
				token.push_back(*data);
				data++;
			}
			output.push_back(token);
			token.clear();
		}
	}
	return S_OK;
}

