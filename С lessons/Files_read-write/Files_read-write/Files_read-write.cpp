// Files_read-write.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>		// ���������� ����������� �������
#include <fstream>		// ���������� ���  ������ � �������
#include <ctime>		// ���������� �������

using namespace std;

int main()
{

	setlocale(LC_ALL, "rus");
	char buffer[128];	// ������ ��� ������ �� �����
	time_t t = time(0);

	printf("Program working..."); // ��������, ��� ��������� ��������

    return 0;
}

