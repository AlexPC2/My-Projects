// Conditional _expressions.cpp: определяет точку входа для консольного приложения.
//

// Chapter 2.11
// Date: 25.11.2017

#include "stdafx.h"


void main()
{
	int n;
	for (n = 0; n < 5;n++) {

		// When we've got more than 1 element print "s" in the end of the word 
		printf("You heve got %d element%s. \n", n, (n % 10 == 1 && n % 100 != 11) ? " " : ((n % 100 < 10 || n % 10 >= 20) && n % 10 >= 2 && n % 10 <= 4) ? "s" : " ");
	}
	scanf_s("%d",&n);
   // return 0;
}

