//
//  main.c
//  Structures
//
//  Created by Александр Ноянов on 05.03.18.
//  Copyright © 2018 ANLab. All rights reserved.
//



#include <stdio.h>

//  Creating structure:
struct point{
    int x;
    int y;
};

//struct {...} x, y, z;

struct point pt;    // Initialize the variable

struct point maxpt = {320,200};

// To print something:
//  printf("%d , %d",pt.x, pt.y);

//  How to find path from point (0,0) to the point Z(x,y)
double dist, sqrt(double);

dist = sqrt((double)pt.x*pt.x + (double)pt.y*pt.y);

// Structures can be included one in another:
struct rect{
    struct point pt1;
    struct point pt2;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
