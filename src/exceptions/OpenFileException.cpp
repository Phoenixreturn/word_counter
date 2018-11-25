#include <iostream>
#include <exception>
using namespace std;

class  OpenFileException : public exception
{
public:
	virtual const char* what() const throw()
	{
		return "Ошибка чтения файла";
	}
};