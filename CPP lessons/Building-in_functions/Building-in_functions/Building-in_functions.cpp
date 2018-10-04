// Building-in_functions.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

// Встраиваемые функции (in-line)

// Недостаток встраиваемых функций - объем
#include <iostream>

using namespace std;

inline int even(int x)	// Возвращает истину при четном аргументе
{		
	return x!(x % 2);	// Является ли х четным или нет
}
int main()
{
	if (even(10)) << cout " 10 Является четным числом \n";
	if (even(11)) << cout " 11 Является четным числом \n";

    return 0;
}

