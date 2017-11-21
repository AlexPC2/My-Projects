// Increments and decrements.cpp: By Alex Noyanov
//

//	Chapter 2.8 Increments and Decrements operators:

//21 11 2017

#include "stdafx.h"

#include<stdio.h>

#include<stdlib.h>


/*	squeeze: Delete all symbols looks like 'c' in string s:
*/
void squeeze(char s[], int c) 
{
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[i] = '\0';
}

int main()
{
	int x, n = 1;

	//x = n++;	X get n and then +1

	//x = ++n;	N+1 at first and then get it to x
    
    char str[] = "alazambuzlu!";
    
    printf("%s",str);               // Print string;
    printf("%s",squeeze(str,'a'));  // String without 'A' symbols

    return 0;

}

