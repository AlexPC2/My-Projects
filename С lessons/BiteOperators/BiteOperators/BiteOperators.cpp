// BiteOperators.cpp: î
//
//	22th os November 2017


/*	
	Bite operators:

	&	 AND
	|	 OR
	^	 EXCEPTED AND
	<<	 STEP LEFT
	>>   STEP RIGHT 
*/


/*	getbits: get 'n' bites  from position 'p'
*/
unsigned getbits(unsigned x,int p,int n)
{
	return(x >> (p+1-n) & ~(~0 << n));
}

#include "stdafx.h"
int main()
{
	int x = getbits(11001, 2, 3);
	printf("%d", x);
    return 0;
}

