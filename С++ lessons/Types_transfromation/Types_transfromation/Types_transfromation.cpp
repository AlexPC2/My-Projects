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


int main()
{
    return 0;
}

