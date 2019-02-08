// Switch.cpp: определяет точку входа для консольного приложения.
//

//
// Chapter 3.4
// Using Switch()

#include "stdafx.h"

/*
		=== How it works: ===
		switch(explanation){
			case const-t expl-n: instructions
				break;							    // To get out  
			...
			case const-t expl-n: instructions
				break;
			default const-t expl-n : instruction	// Default instruction when other don't work
				break;
			}
*/

// Exercise 3.2:
/*
void escape(int s, int t) {
	switch (s)
	{
	case '\n': t = '\n';
	case '\t': t = '\t';
	default:
		t = s;
		break;
	}
}
*/

int main()/* Counting numbers, letters and other symbols */
{
	int c, i, nwhite, nother, ndigit[10];

	int str = 0;

	nwhite = nother = 0;

	for (i = 0; i < 10; i++) 
		ndigit[i] = 0;
	while ((c = getchar()) != '\n') {

	// escape(c,str);

		switch (c) {
		case '0': case '1': case '2': case '3': case '4': case'5': case '6': case'7':case'8':case'9':
			ndigit[c - '0']++;
			break;

		case' ':
		case'\n':
		case'\t':
			nwhite++;
			break;
		default: 
			nother++;
			break;
		}

		
	}

	printf("Numbers = ");
	for (i = 0; i < 10; i++)
		printf(" %d",ndigit[i]);

	printf(" ,Space symbols = %d , other = %d \n",nwhite,nother);

	scanf_s("%d",&i);	// For stop rterminal window 

	
	/*while (str != '0') {
		putchar(str);
	}
	*/
    return 0;
}

<<<<<<< HEAD
// Master branch commit!
=======
//  Branch master merged to AlexMacbookPro

>>>>>>> origin/AlexMacBookPro
