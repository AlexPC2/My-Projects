// Building-in_functions.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

// ������������ ������� (in-line)

// ���������� ������������ ������� - �����
#include <iostream>

using namespace std;

inline int even(int x)	// ���������� ������ ��� ������ ���������
{		
	return x!(x % 2);	// �������� �� � ������ ��� ���
}
int main()
{
	if (even(10)) << cout " 10 �������� ������ ������ \n";
	if (even(11)) << cout " 11 �������� ������ ������ \n";

    return 0;
}

