// Unions_and_structures.cpp: определяет точку входа для консольного приложения.
//

// Глава 2: введение в классы: объединения, структуры и классы

#include "stdafx.h"


// Пример использования объединения для побитового вывода значения типа double в двоичном виде:

#include <iostream>

using namespace std;

union bits {			// Объединение
	bits(double n);
	void show_bits();
	double d;
	unsigned char c[sizeof(double)];
};

bits::bits(double n)
{
	d = n;
}

void bits::show_bits()
{
	int i, j;

	for (j = sizeof(double) - 1; j >= 0; j--) {
		cout << "Двоичное представление байта:" << j << ":";
		for (i = 128; i; i >>= 1)
			if (i & c[j]) cout << "1";
			else cout << "0";
			cout << "\n";
	}
}

int main()
{
	char s;

	bits ob(1991.829);

	ob.show_bits();

	cin >> s;

    return 0;
}

