// Types_transfromation.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

/*	atoi : �������������� s � �����
*/
int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return n;
}

/*	lower : �������������� � � ��������; ������ ��� ASCI
*/
int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A'
	else
		return c;
}

//	� >= '0' && c <= '9' ���������� isdigit(c)


int main()
{
    return 0;
}

