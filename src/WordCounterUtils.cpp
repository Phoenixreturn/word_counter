#include "WordCounterUtils.h"

WordCounterUtils::WordCounterUtils(std::string path) throw() {
	this->path = path;
	OpenFileException openFileException;

	std::ifstream fileStream(this->path);
	
	if (fileStream.is_open())
		while (fileStream.good())
		{			
			std::string word;
			fileStream >> word;
			if (wordsCount.find(word) == wordsCount.end()) 
				wordsCount[word] = 1; 
			else 
				wordsCount[word]++; 
		}
	else 
	{
		throw openFileException;
	}
}

void WordCounterUtils::PrintMap()
{
	typedef std::map<std::string, unsigned int>::iterator iterator;
	for (iterator p = wordsCount.begin(); p != wordsCount.end(); p++)
		std::cout << p->first << " - " << p->second << std::endl;
}

int WordCounterUtils::wordOccurency(string word)
{
	if (wordsCount.count(word)) {
		return wordsCount[word];
	}
	else {
		return -1;
	}
}

int WordCounterUtils::wordCount() {
	return wordsCount.size();
}