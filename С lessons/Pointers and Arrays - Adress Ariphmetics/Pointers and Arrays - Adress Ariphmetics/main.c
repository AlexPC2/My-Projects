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


//  В общем случае указатель можно инициализировать, но только такими осмысленными значениями,
//  как нуль или выражение, приводящее к адресу ранее определенных данных соответсвующего типа:
//  static char * allocp = allocbuf;


// Над указателями можно проводить следующие действия:
//  -Присваивание одного указателя другому, такого же типа
//  -Сложение и вычитание указателя и целого
//  -Вычитание и сравнение двух указателей, указывающих на элементы одного типа
//  -Присваивание нулю и сравнение с ним

int main(int argc, const char * argv[]) {
    
    return 0;
}
