// Multidementional arrays.cpp: определ€ет точку входа дл€ консольного приложени€.
//

//  Chapter 5 
//	Paragraph 5.7

#include "stdafx.h"

// Table of days in month:
static char daytab[2][13] = {
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 },
	{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31 }
};

//	Two dementional array example:
/*	array[i][k];				*/
//	But:
/*	array[i,k]	-	IS WRONG!	*/


/* days_of_year: определ€ет день года по мес€цу и дню */
int day_of_year(int year, int month, int day)
{
	int i, leap;

	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}


/*	month_day: определ€ет мес€ц и днеь по дню года	*/
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;

	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	for (i = 0; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	*pmonth = i;
	*pday = yearday;
}



int main()
{
    return 0;
}

