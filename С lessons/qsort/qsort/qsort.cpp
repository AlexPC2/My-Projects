// qsort.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>

/* qsort: сортирует v[left]..v[right]* по возрастанию */
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[],int i,int j);

	if (left >= right)	/* Ничего не делается,если */
		return;			/* В массиве менее двух элементов */
	swap(v,left,(left+right)/2);	/* делящий элемент */
	last = left;					/* переносится в v[0]*/
	for (i = left + 1; i <= right; i++)/* деление на части*/
		if (v[i] < v[left])
			swap(v,++last,i);
	swap(v,left,last);	/*перезапомним делящий элемент*/
	qsort(v,left,last-1);
	qsort(v,last+1,right);
}

/*swap: поменять местами v[i] и v[j] */
void swap(int v[],int i,int j) 
{
	int temp;
	temp = v[i];
	v[i] = v[j]; 
	v[j] = temp;
}



int main()
{

	/* Проверим работоспособность функции сортировки: */
	int a[10];
	int i;
	/* Ввод массива а:*/
	printf("	=== Input matrix A: ===");
	for (i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}

	/* Сортировка массива А:*/
	qsort(a,0,10);	// Сортируем массив а от 0 до 10 по возрастанию

	/* печатаем отсортированный массив а:*/
	printf("");
	printf("	=== Sorted matrix A: ===");
	for (i = 0; i < 10; i++) {
		printf("%d", a[i]);
	}

    return 0;
}

