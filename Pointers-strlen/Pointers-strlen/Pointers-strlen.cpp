// Pointers-strlen.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <cstdlib>


/*	strlen: ���������� ����� ������*/
int Mystrlen(char *s)						// ��������� ����� ���������� �������� �������
{
	int n;

	for (n = 0; *s != '\0'; s++)		// ���� �� ����� ������
		n++;							// ������� ����� ������

	return n;							// ���������� ����� ������
}

char password[10];
bool isPasswordOk;


int main()
{
	for (int i = 0; i < sizeof(password); i++)
		password[i] = 0;
	isPasswordOk = false;

	scanf("%s", &password[0]);
	printf("password len=%d\n", )

	if (isPasswordOk) {
		printf("Password is ok\n");
	}
	else {
		printf("Password is requred\n");
	}
	isPasswordOk = strstr(password, "1234");




	double* pa = (double*)malloc(200 * sizeof(double));
	free(pa);

	double* p = new double[100];
	delete[] p;
	char myArray[100] = { 0 };	// ������ �������� �� 100 ���������

	int a;

	// ���������� ���� �������:
	printf("%d\n%d\n%d\n", Mystrlen(""), Mystrlen( "Hello, world!"), Mystrlen(myArray));

	scanf("%d",&a);

    return 0;
}

