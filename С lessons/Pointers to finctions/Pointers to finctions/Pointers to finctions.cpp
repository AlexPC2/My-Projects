// Pointers to finctions.cpp: ���������� ����� ����� ��� ����������� ����������.
//


//	Chapter 5.11

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 5000		/*������������ ����� �����*/
char *lineptr[MAXLINES];	/*��������� �� ������ ������*/

int readlines(char *lineptr[], int nlines);
void writeliness(char *lineptr[], int nlines);

void qsort(void *lineptr[], int left,int right,int (*comp)(void *,void *));

int numcpm(char *, char *);

/*	���������� �����*/
int main(int argc, char *argv[])	// ��������� ��������� ������
{
	int nlines;			// ���������� ������������ �����
	int numeric = 0;	// 1, ���� ����. �� ����. ����.

	if (argc > 1 && strcmp(argv[1], "-n") == 0)
		numeric = 1;
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{
		qsort((void**) lineptr,0,nlines-1,
			(int (*)(void*,void*))(numeric ? numcpm : strcmp));
		writeliness(lineptr,nlines);
		return 0;
	}
	else {
		printf("������� ������� ����� �����!");
	}
    return 0;
}

/*	qsort: ��������� v[left]..v[right] �� ����������� */
void qsotr(void *v[], int left,int right, 
	int (*comp)(void *, void *))
{
	int i, last;
	void swap(void *v[], int, int);

	if (left >= right) 		/*������ �� ��������*/
		return;				/*���� � ������� ����� ���� ���������*/
	
	swap(v,left,(left+right)/2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if ((*comp)(v[i], v[left]) < 0)
			swap(v,++last,i);

	swap(v,left,last);

	qsort(v,left,last-1,comp);
	qsort(v,last+1,right,comp);
}


/*	numcmp: ���������� s1 � s2 ��� ����� */
int numcmp(char *s1, char *s2)
{
	double v1, v2;

	v1 = atof(s1);
	v2 = atof(s2);

	if (v1 < v2)
		return -1;
	else if (v1 > v2)
		return 1;
	else 
		return 0;
}

/* swap: ������ ������� ��� ���������*/
void swap(void *v[],int i, int j) {
	void  *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}