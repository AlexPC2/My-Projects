// Structures.cpp: определяет точку входа для консольного приложения.
//

// Chapter 6

#include "stdafx.h"

/*	makepoint : формирует точку по компонентам x и y*/

struct point {
	int x;
	int y;
};

struct rect {
	struct point pt1;
	struct point pt2;
};

struct point makepoint(int x, int y)
{
	struct point temp;

	temp.x = x;
	temp.y = y;
	return temp;
};

struct rect screen;
struct point middle;
struct point makepoint(int,int);

screen.pt1 = makepoint( 0,0 );
screen.pt2 = makepoint( XMAX, YMAX);

middle = makepoint((screen.pt1.x + screen.pt2.x)/2,
					(screen.pt1.y+screen.pt2.y)/2);

/*	addpoint: сложение двух точек*/
struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

/* Return 1 if p in r or 0 if not*/
    int printrect( struct point p, struct rect r)
{
    return p.x >= r.pt1.x && p.x < r.pt2.x
    && p.y >= r.pt1.y && p.y < r.pt2.y;
}


// This function garante what all rects are in standart form

#define min(a, b) ( (a) < (b) ? (a) : (b))
#define max(a, b) ( (a) > (b) ? (a) : (b))


/*  canonrect: Canoniazation rect coordinates */

struct rect cannonrect(struct rect r)
{
    struct rect temp;
    
    temp.pt1.x = min(r.pt1.x, r.pt2.x);
    temp.pt1.y = min(r.pt1.y, r.pt2.y);
    
    temp.pt2.x = min(r.pt1.x, r.pt2.x);
    temp.pt2.y = max(r.pt1.y, r.pt2.y);
}


int main()
{
    
    // For big structers can be effective do not copy all structure
    //  just send some structure elements using pointers:
    
    struct point **pp;  // Pointer pp to the srtucture point
    
    struct pont origin, *pp;
    
    pp = &origin;
    printf(" Origin: ( %d, %d)\n", (*pp).x, (*pp).y);   // This (*pp) brakes means that . prioritet is higher
    
    // For short:
    // p -> structure element
    
    // structure pointer -> structure element
    // This "->" operator using to get acess to structure element
    
    printf(" Origin:(%d,%d)\n ", pp->x, pp->y);
    
    // Operators -> executing from right to left
    
    struct rect r, *rp = &r;
    
    
    // All this four declarations are equal!
    r.pt1.x
    rp -> pt1.x
    (r.pt1).x
    (rp -> pt1).x
    //
    
    
    // Operators -> have higher prioritet:
    struct {
        int len;
        char *str;
    }   *p;
    
    // Then
    ++p ->len;
    // Will +1 to len, not to pointer p
    
    // To +1 to the pointer p but not to len brakes can be used:
    (++pp) -> len;
    // Now ++ operator will be executing first
    
    return 0;
}







