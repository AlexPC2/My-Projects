// Types_transfromation.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

/*	atoi : преобразование s в целое
*/
int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return n;
}

/*	lower : преобразование с в строчную; только для ASCI
*/
int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A'
	else
		return c;
}

//	с >= '0' && c <= '9' Аналогично isdigit(c)


int main()
{
    return 0;
}

