// Types_transfromation.cpp:
//

#include "stdafx.h"

#include<ctype.h>	//	Library with helpful functions

#include<math.h>	//	Library with mathematical functions 

/*	atoi : Transforming 's' in integer
*/
int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return n;
}

/*	lower : Transforming 'c' in small 'c' ; Only for ASCII
*/
int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

//	c >= '0' && c <= '9' Alternative form : isdigit(c)


// Pseudorandom generator function:
unsigned long int next = 1;

/*	rand:  return pseudorandom number 0...32767
*/

int rand()
{
	next = next * 1103515245 + 12345;

	return (unsigned int)(next/65536) % 32768;
}
/*	srand: get "seed" for rand()
*/
void srand(unsigned int seed)
{
	next = seed;
}


//	#Exercise 2.3
//	Write your function htol(s) 
//	for transforming HEX to DEC numbers:
int htol(char s[]) {
	int i,n;
	n = 0;

	
	for (i = 2; s[i] >= '0' && s[i] <= 'F'; i++)
		n = 16 * n + (s[i] - '0');

	return n;
}


int main()
{

	// This is how we can transform types:
	int i;
	char c = 'a';
	
	i = c;	// Transforming int to the char type
	c = i;	// Transforming char to the int

	//	sqrt((double) n);	// 'n' Will be transformed to "double" when get to the function
	// Test htol function:
	
	printf("%d", htol(x0fff));

    return 0;
}

// Edited in browser from Alex PC #2

// Changed by AlexMacBookPro

<<<<<<< HEAD
// comment!
=======
>>>>>>> 20099cad1a605768131f5505aff52b552c8c7e01
