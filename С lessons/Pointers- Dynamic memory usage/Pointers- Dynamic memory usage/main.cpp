//
//  main.cpp
//  Pointers- Dynamic memory usage
//
//  Created by Александр Ноянов on 18.02.18.
//  Copyright © 2018 ANLab. All rights reserved.
//

#include <iostream>
#include "vector.h"


double* p;  // указатель на double
int size;   // размер выделенного массива
int count;  // сколько элементов массива занято


void createArray()  // создать массив размером 100
{
    size = 100;
    p = new double[size];
    count = 0;
}

void deleteArray()  // удалить массив
{
    delete[] p;
    p = NULL;
    size = 0;
    count = 0;
}

void push_back(double v)    //
{
    if(count >= size) {
        int size2 = size*2;
        double* pp = new double(size2);
        for(int i = 0; i < count; i++) {
            pp[i] = p[i];
        }
        p = pp;
        size = size2;
    }
    p[count++] = v;
}

double get(int index)       // получить значение в массиве
{
//    if(index < 0 || index >= count)
//        return
    return p[index];
}

int getCount()
{
    return count;
}

void GetIn(double v)
{
    
}

int main(int argc, const char * argv[])
{
    noyanov::vector a;
    for(double v = 1; v < 1000; v = v + 0.5) {
        a.push_back(v);
    }
    for(int i = 0 ; i < a.getCount(); i++) {
        printf("%lf\n", a.get(i));
    }
    
    noyanov::vector b;
    

//
//    createArray();
//    for(double v = 1; v < 1000; v = v + 0.5) {
//        push_back(v);
//    }
//    for(int i = 0 ; i < getCount(); i++) {
//        printf("%lf\n", get(i));
//    }
//
//    deleteArray();
    return 0;
}
