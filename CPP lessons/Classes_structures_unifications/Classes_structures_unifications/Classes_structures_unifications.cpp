// Classes_structures_unifications.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


// ������, ��������� � ����������� � ����� �++

// ������������ ������� ����� ���������� � ������� �������� ��, ��� � ������ ��� ����� ��
// ��������� �������, � � ��������� �������

/*
	struct <���_����> {
	// �������� �������-����� � ������-�����
	private:
	// �������� �������-����� � ������-�����

	} ������ ��������
*/

// � �++ struct � class ������� ����� ���� ������

// private - �������� �����������, �� ��������� �� ��� ����� �������� ��������� ��� ����� ������

// ����������� � ������ ������ ��� �� ������!

//  ����������� ���������� ��������� ����� ���� ������, � ������� ��� ������ ���������� ����� ������
//	����� ������ ��������, ��������� ������

// ������: �������� ���������, ������������ struct ��� �������� ������:


#include <iostream>
#include <string.h>

using namespace std;

// ������������� ��������� ��� ����������� ���� ������:
struct st_type {					// ���������
	st_type(double b,char *n);		// ���, ��� �� ptivate, �� �������
	void show();
private:							// �������� ���� ���������
	double balance;
	char name[32];
};

st_type::st_type(double b, char *n) {
	balance = b;
	strcpy(name,n);
}


void st_type::show() {
	cout << " ���:"<< name;
	cout << ":$" << balance;
	if (balance < 0.0) cout << "***";
	cout << "\n";
}

// ��������� �� �� �����, �� � �������������� ������:
clsss sl_type{
	double balance;
	char name[40];
public:
	sl_type(double b, char*n);
	void show();
};

int main()
{

	//	==== ������ � �������������� ���������, ������ ������	====
	st_type			acc1(100.12, "Johnson");
	st_type			acc2(-12.34, "Hedricks");

	acc1.show();
	acc2.show();

	// ==== �� �� �����, �� � �������������� ������		====

    return 0;
}

