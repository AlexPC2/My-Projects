//
//  main.cpp
//  Lab8
//
//  Created by Александр Ноянов on 07.04.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

// Двумя методами:
//  1) Метод деления отрезка пополам
//  2) метод Ньютона (касательных)

//  Функция 14:
//  (2/3)*acos(sqrt(x/2)) + 0.577*log(x+1) + cbrt(0.01) - x
//  1,13175

//  Функция 17:
//  sqrt(log(7.9)+exp(-x) - (x*x)/11) - x

// для N значений точности E (0,1; 0,01; 0,001; ...1e-N, 1≤N≤10) вычислить значение корня на отрезке [A, B] = (0,2).
// Перед поиском корня обязательно проверять наличие корня на отрезке [A, B]
// (разные знаки значения функции на концах отрезка), и в случае отсутствия выдать сообщение «Корня на отрезке AB нет».
// При вводе значений анализировать аномалии: A,B,N – числа и 0<A<B<2, 1≤N≤10.


// Добавить знак
// Метод половинного деления
//1.45
//1.46
#include <math.h>
#include <stdio.h>
//#include "stdafx.h"

// Функция 14:
double f14(double x)
{
	return (2.0 / 3.0)*acos(sqrt(x / 2)) + 0.577*log(x + 1) + cbrt(0.01) - x;
}

// Функция 17:
double f17(double x)
{
	return sqrt(log(7.9) + exp(-x) - (x*x) / 11) - x;
}

// метод половинного деления
double ComputeDicho(int *k, double A, double B, double E, double(*f)(double))
{
	(*k) = 0;
	while (B - A > E)
	{
		double C = (A + B) / 2;
		if (f(B) * f(C) < 0)
			A = C;
		else
			B = C;

		(*k)++;
	}
	return (A + B) / 2.0;
}



// Производная:
double CalcProizv(double(*f)(double), double x, double dx)
{
	return (f(x + dx / 2) - f(x - dx / 2)) / dx;
}

double Newton(int *k, double A, double B, double E, double(*f)(double))
{
	(*k) = 0;
	double x1, x2;
	x1 = (A + B) / 2.0;
	x2 = x1 - f(x1) / CalcProizv(f, x1, E);
	(*k)++;
	while (fabs(x2 - x1) >= E)
	{
		x1 = x2;
		x2 = x1 - f(x1) / CalcProizv(f, x1, E);
		(*k)++;
	}
	return x2;
}

void Compute(double A, double B, double(*f)(double), int N, double x0, const char* name)
{
	double EX, x1, x2;
	int k1, k2;
	double AX = f(A);
	double BX = f(B);
	if ((AX < 0 && BX < 0) || (AX > 0 && BX > 0)) {
		printf("У Функции %s корня на отрезке AB нет\n", name);
		return;
	}
	printf("Функция %s\n", name);
	printf("f(%.6lf)= %.6lf\n", x0, f(x0));
	printf(" Функция %s  |   Метод половинного деления       |          Метод Ньютона            |\n", name);
	printf("  Погрешность |      Корень     |     Итерации    |      Корень     |    Итерации     |\n");
	for (int i = 1; i <= N; i++)
	{
		EX = 1 / pow(10, i);
		x1 = ComputeDicho(&k1, A, B, EX, f);
		x2 = Newton(&k2, A, B, EX, f);
		for (int j = 0; j<11 - i; j++) printf(" "); printf("%*.*lf |", i + 1, i + 1, EX);
		for (int j = 0; j<14 - i; j++) printf(" "); printf("%*.*lf |        %2d       |", i + 1, i, x1, k1);
		for (int j = 0; j<14 - i; j++) printf(" "); printf("%*.*lf |        %2d       |\n", i + 1, i, x2, k2);
	}
	printf("--------------------------------------------------------------------------------------|\n");
}

int main(int argc, const char * argv[])
{
	const double AMIN = 0;
	const double AMAX = 2;
	const double BMIN = 0;
	const double BMAX = 2;
	int N;
	double a, b;

	printf("");

	do {
		printf("N= \n");
		scanf("%d", &N);
		if (N < 1 || N > 10)
			printf("N должен быть от 1 до 10!\n");

	} while (N < 1 || N > 10);


	do {
		printf("введите отрезок (A,B)\u2208(0,2) \n");
		printf("A: ");
		scanf("%lf", &a);
		printf("B:  ");
		scanf("%lf", &b);
		if (a >= BMAX || a <= AMIN)
			printf("Введены некорректные значения - должно А\u2208(0,2)\n"); // \u2208 - character of 'Element Of'
		if (b >= BMAX || b <= BMIN)
			printf("Введены некорректные значения B\u2208(0,2)\n"); // \u2208 - character of 'Element Of'
		if (a >= b)
			printf("Введены некорректные значения - A<B\n");
	} while (a >= AMAX || a <= AMIN || b >= BMAX || b <= BMIN || a >= b);


	Compute(a, b, f14, N, 1.13175, "#14");
	Compute(a, b, f17, N, 1.45229, "#17");

	return 0;
}