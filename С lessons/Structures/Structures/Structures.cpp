// Structures.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

/*	makepoint : ��������� ����� �� ����������� x � y*/

struct point {
	int x;
	int y;
};

struct rect {
	point pt1;
	point pt2;
};

point makepoint(int x, int y)
{
	struct point temp;

	temp.x = x;
	temp.y = y;
	return temp;
};

rect screen;
struct point middle;
struct point makepoint(int,int);


/*	addpoint: �������� ���� �����*/
struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;

	//	��� ������� ��������� � ���������� ��������� point
}

/*	prinrect: ���������� 1, ���� p � r, � 0 � ��������� ������	*/
int prinrect(struct point p, struct rect r)
{
	
}


int main()
{
	screen.pt1 = makepoint(0, 0);
	screen.pt2 = makepoint(XMAX, YMAX);

	middle = makepoint((screen.pt1.x + screen.pt2.x) / 2,
		(screen.pt1.y + screen.pt2.y) / 2);
	
	return 0;
}

