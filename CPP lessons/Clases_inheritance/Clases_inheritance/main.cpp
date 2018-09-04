//
//  main.cpp
//  Clases_inheritance
//
//  Created by Александр Ноянов on 03.09.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

// Наследование классов

#include <iostream>
#include <string.h>

using namespace std;

enum yn {no,yes};   // Пользовательский перечисляемый тип enumiration
enum color {red,yellow,green,orange};

void out(enum yn x);

char *c[] = {"red","yellow","orange"};

// Исходный класс фруктов
class fruit{
    // В этом базовом классе все элементы открыты
public:
    enum yn annual;
    enum yn perennial;
    enum yn tree;
    enum yn tropical;
    enum color clr;
    char name[32];
};

// Производный класс яблок:
class Apple: public fruit{
    enum yn cooking;
    enum yn chunchy;
    enum yn eating;
public:
    //void seto(char *n,enum color c, enum yn ck,);
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    
    
    return 0;
}
