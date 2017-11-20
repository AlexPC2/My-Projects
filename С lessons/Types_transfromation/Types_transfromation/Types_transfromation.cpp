// Types_transfromation.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"

/*	atoi : ïðåîáðàçîâàíèå s â öåëîå
*/
int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return n;
}

/*	lower : ïðåîáðàçîâàíèå ñ â ñòðî÷íóþ; òîëüêî äëÿ ASCI
*/
int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A'
	else
		return c;
}

//	ñ >= '0' && c <= '9' Àíàëîãè÷íî isdigit(c)


int main()
{
    return 0;
}

// Edited in browser from Alex PC #2
