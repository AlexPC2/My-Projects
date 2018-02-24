// Pointers-exercises.cpp: определяет точку входа для консольного приложения.
//

//	Chapter 5
//	Paragraph 5.5

// The 24th of Febraury

#include "stdafx.h"

//char *message1 = "Hello, world";	// First symbols array 
//char *message2 = "Hello, world!";	// Second symbols array

// This functioncan copy string t in the end of string s
void strcat(char *s, char *t)
{
	while (*s++)
		;
	while (*s++ = *t++) 
		;
}

// Copy elements into the pointer's array
void strcpy(char* s, char* t)
{
	while (*s++ = *t++)
		;
}

	// If string t situated in the end of s function reatrned 1 
	// and 0 if not
int strend(char *t, char *s)
{
	for (; *s == '\0';*s++ ) {
		if ((*s == *t) && (*s != '\0'))
			return 1;
	}
	return 0;
}

int main()
{
	char message1[256];
	char message2[256];

	strcpy(message1, "message1");
	strcpy(message2, "message2");

	strcat(message1, message2);	

	printf("%s",message1);
	getchar();

    return 0;
}