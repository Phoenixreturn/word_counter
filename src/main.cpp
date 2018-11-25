#include <iostream>
#include <exception>
#include "WordCounterUtils.h"
using namespace std;

#define CUR_LOCALE "Russian"

int main(void)
{
	WordCounterUtils *counterUtils;
	string path;
	setlocale(LC_ALL, CUR_LOCALE);
	cout << "Введите полный путь до файла: " << endl;
	getline(cin, path);
	try {
		counterUtils = new WordCounterUtils(path);
	}
	catch (OpenFileException& myEx) {
		cout << myEx.what() << endl;
		int i;
		cin >> i;
		return EXIT_FAILURE;
	}

	if (counterUtils != NULL) {
		counterUtils->PrintMap();
	}

	int i;
	cin >> i;
	delete counterUtils;
	return EXIT_SUCCESS;
}
