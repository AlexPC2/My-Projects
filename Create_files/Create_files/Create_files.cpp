
//	Эта программа - пример работы с файлами на c++
//	Создает файл и печатает в нем что-нибудь
// Create_files.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"		// Стандартная библиотека
#include <iostream>		// Библиотека стандартных функций
#include <fstream>		// Библиотека для  работы с файлами
#include <ctime>		// Библиотека времени
using namespace std;

int main(int argc,char* argv[])
{
	setlocale(LC_ALL,"rus");
	char buffer[128];	// Буффер для данных из файла
	time_t t = time(0);

	printf("Program working..."); // Печатаем, что программа работает

/*
	struct tm * now = localtime(&t);
	cout << (now->tm_year +1900) << '-'
		<< (now->tm_mon + 1) << '-'
		<< now->tm_mday
		<< endl;
		*/

	ofstream fout("D:\Files\Result.txt");   // Путь к файлу
	fout << "Этот текст был записан в этот файл из программы. Проект Create_files.cpp в Visual Studio \n Тест перевода строки в файле \Перевод строк работает нормально\n";
	fout << "Вывод чисел\n";

	for (int i = 0; i < 10;i++) {
		fout << i;				// << Означает вывод 
	}

	fout << "Вывод чисел работает";

	fout.close();				// Закрываем файл

	setlocale(LC_ALL, "rus");	// корректное отображение Кириллицы
	char buff[128];				// буфер промежуточного хранения считываемого из файла текста
	ifstream fin("MyFile.txt"); // открыли файл для чтения

	fin >> buff;				// считали первое слово из файла
	cout << buff << endl;	    // напечатали это слово

	fin.getline(buff, 128); // считали строку из файла
	fin.close();			// закрываем файл
	cout << buff << endl;   // напечатали эту строку

	system("pause");
    return 0;
}
// Comment from browser!
// Comment from AlexPC#2!
