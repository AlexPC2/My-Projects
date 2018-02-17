//
//  main.c
//  Pointers and Arrays - Adress Ariphmetics
//
//  Created by Александр Ноянов on 17.02.18.
//  Copyright © 2018 ANLab. All rights reserved.
//

#include <stdio.h>

#define ALLOCSIZE 10000 /* Размер доступного пространства */

static char allocbuf[ALLOCSIZE];    // Память для allocbuf
static char *allocp = allocbuf;     // Указатель на свободное место

char *alloc(int n)                  // Возвращает указатель на n символов
{
    if(allocbuf + ALLOCSIZE - allocp >= n)
    {
        allocp += n;                // Пространство есть
        return allocp - n;          // Старое р
    }   else
        return 0;                   // Пространства нет
}

void afree(char *p)
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
