//
//  main.cpp
//  Functions_overloading
//
//  Created by Александр Ноянов on 24.08.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include <iostream>

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
    return x*x;
}

double sroot(double x){
    return x*x;
}

float sroot(float x){
    return x*x;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
