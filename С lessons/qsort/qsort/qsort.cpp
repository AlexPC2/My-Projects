// qsort.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <stdio.h>

/* qsort: ��������� v[left]..v[right]* �� ����������� */
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[],int i,int j);

	if (left >= right)	/* ������ �� ��������,���� */
		return;			/* � ������� ����� ���� ��������� */
	swap(v,left,(left+right)/2);	/* ������� ������� */
	last = left;					/* ����������� � v[0]*/
	for (i = left + 1; i <= right; i++)/* ������� �� �����*/
		if (v[i] < v[left])
			swap(v,++last,i);
	swap(v,left,last);	/*������������ ������� �������*/
	qsort(v,left,last-1);
	qsort(v,last+1,right);
}

/*swap: �������� ������� v[i] � v[j] */
void swap(int v[],int i,int j) 
{
	int temp;
	temp = v[i];
	v[i] = v[j]; 
	v[j] = temp;
}



int main()
{

	/* �������� ����������������� ������� ����������: */
	int a[10];
	int i;
	/* ���� ������� �:*/
	printf("	=== Input matrix A: ===");
	for (i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}

	/* ���������� ������� �:*/
	qsort(a,0,10);	// ��������� ������ � �� 0 �� 10 �� �����������

	/* �������� ��������������� ������ �:*/
	printf("");
	printf("	=== Sorted matrix A: ===");
	for (i = 0; i < 10; i++) {
		printf("%d", a[i]);
	}

    return 0;
}

