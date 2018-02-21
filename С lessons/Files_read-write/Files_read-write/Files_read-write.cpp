// Files_read-write.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>		// Библиотека стандартных функций
#include <fstream>		// Библиотека для  работы с файлами
#include <ctime>		// Библиотека времени

using namespace std;

int main()
{

	setlocale(LC_ALL, "rus");
	char buffer[128];	// Буффер для данных из файла
	time_t t = time(0);

	printf("Program working..."); // Печатаем, что программа работает

    return 0;
}

