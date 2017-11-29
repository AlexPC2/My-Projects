// Operators_and_equivalent.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

/*B	bitcount: this function count "1" in X 
*/
int bitcount(insigned x)
{
	int b;
	for (b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	return b;
}
int main()
{
    return 0;
}

