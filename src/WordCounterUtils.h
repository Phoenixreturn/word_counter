#include <map> 
#include <fstream>
#include <exception>
#include <string>
#include <iostream>
#include "exceptions/OpenFileException.cpp"

class WordCounterUtils
{
private:
	// ��������� ���������� �������
	std::map<std::string, unsigned int> wordsCount;
	std::string path;
public:
	WordCounterUtils(std::string path) throw();

	// ������ ����������� ��������
	void PrintMap();	
	int wordCount();
};

