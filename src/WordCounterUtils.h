#include <map> 
#include <fstream>
#include <exception>
#include <string>
#include <iostream>
#include "exceptions/OpenFileException.cpp"

class WordCounterUtils
{
private:
	// коллекция содержащая подсчет
	std::map<std::string, unsigned int> wordsCount;
	std::string path;
public:
	WordCounterUtils(std::string path) throw();

	// печать результатов подсчета
	void PrintMap();	
	int wordCount();
};

