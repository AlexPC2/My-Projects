//
//  main.cpp
//  Functions_overloading
//
//  Created by Александр Ноянов on 24.08.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

// Перегрузка функций - создание нескольких функций, возвращающих или принимающих разные типы, но имеющие одинаковое имя
// Перезагрузка позволяет создавать универсальные одноименные функции, принимающие или возвращающие разные типы данных

// Пример перегрузки функций:
void f1(int a);     // Одинаковые функции, но принимают разные параметры
void f1 (char b);

// При вызове перегруженной функции компилятор сам разбирается, какую из них использовать

// А тут компилятор уже выдаст ошибку:
 /*
int f2(char s);
void f2(char s);
 
 ОШИБКА: Functions that differ only in their return type cannot be overloaded
 */

//                                   === Упражнения ===
// 1) Создать перегруженную функцию sroot(), которая возвращает квадратный корень своего аргумента:
int sroot(int x){
    return sqrt(x);
}

double sroot(double x){
    return sqrt(x);
}

float sroot(float x){
    return sqrt(x);
}


// 3) Создать функцию min, возвращающую меньшее из принимаемых значений
int min(int a, int b){
    if(a < b)
        return a;
    else
        return b;
}

float min(float a, float b){
    if(a < b)
        return a;
    else
        return b;
}
double min(double a, double b){
    if(a < b)
        return a;
    else
        return b;
}

char min(char a,char b){
    if(a < b)
        return a;
    else
        return b;
}



// 4) Функция задержки sleep
void sleep(int seconds){
    
}
/*
void Sleep(BYTE time)
{
    return Sleep((DWORD)time*1000);
}
void sleep(string seconds){
    
}*/

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
