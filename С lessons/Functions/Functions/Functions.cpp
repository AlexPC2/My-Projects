// Functions.cpp: определяет точку входа для консольного приложения.
//

// The 29th of November

// Chapter 4.1

#include "stdafx.h"

#include<stdio.h>
#define MAXLINE 1000

int getline(char line[],int max);
int strindex(char source[]);


char pattern[] = "ould"; /* letters for finding*/

/* Finding all strings with this letters */
int main()
{

	char line[MAXLINE];
	int found = 0;

	while (getline(line, MAXLINE) > 0)
		if (strindex(line, pattern)) {
			printf("s", line);
		}

    return found;
}

/* getline: reading string in s and return length*/
int getline(char s[],int lim) {
	int c, i;
	i = 0;
	while (-lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		c[i++] = c;
	s[i] = '\0';
	return i;
}

	/* strindex: comping place t in s or return -1 if t is not in s*/
int strindex(char s[], char t[]) {

	int i, j, k;

	for (i = 0; s[i] != '\0'; i++) {
		for (j = i; k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}

	return -1;
}