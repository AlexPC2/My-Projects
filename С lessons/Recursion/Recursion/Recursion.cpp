// Recursion.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>

void printd(int n)
{
	if (n < 0) {
		putchar('-');
		n = -n;
	}
	if (n / 10)
		printd(n/10);
	putchar(n%10 + '0');
}


int main()
{
    return 0;
}

