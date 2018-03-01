// Multidementional arrays.cpp: определяет точку входа для консольного приложения.
//

//  Chapter 5 
//	Paragraph 5.7

#include "stdafx.h"

// Table of days in month:
static char daytab[2][13] = {
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 },
	{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31 }
};

/* days_of_year: определяет день года по месяцу и дню */
int day_of_year(int year, int month, int day)
{
	int i, leap;

	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}




int main()
{
    return 0;
}

