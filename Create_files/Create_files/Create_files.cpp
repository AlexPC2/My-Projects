
//	��� ��������� - ������ ������ � ������� �� c++
//	������� ���� � �������� � ��� ���-������
// Create_files.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(int argc,char* argv[])
{
	setlocale(LC_ALL,"rus");
	char buffer[128];	// ������ ��� ������ �� �����
	time_t t = time(0);
/*
	struct tm * now = localtime(&t);
	cout << (now->tm_year +1900) << '-'
		<< (now->tm_mon + 1) << '-'
		<< now->tm_mday
		<< endl;
		*/

	ofstream fout("D:\Files\Result.txt");
	fout << "���� ����� ��� ������� � ���� ���� �� ���������. ������ Create_files.cpp � Visual Studio \n ���� �������� ������ � ����� \������� ����� �������� ���������\n";
	fout << "����� �����\n";

	for (int i = 0; i < 10;i++) {
		fout << i;
	}

	fout << "����� ����� ��������";

	fout.close();

	setlocale(LC_ALL, "rus");	// ���������� ����������� ���������
	char buff[128];				// ����� �������������� �������� ������������ �� ����� ������
	ifstream fin("MyFile.txt"); // ������� ���� ��� ������

	fin >> buff;				// ������� ������ ����� �� �����
	cout << buff << endl;		 // ���������� ��� �����

	fin.getline(buff, 128); // ������� ������ �� �����
	fin.close();			// ��������� ����
	cout << buff << endl;   // ���������� ��� ������

	//system("pause");
	system("pause");
    return 0;
}

