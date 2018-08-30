//
//  main.cpp
//  Constructors_destructors_lesson
//
//  Created by Alex Noyanov on 29.08.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <mm_malloc.h>
#include <string.h>;
#include <stdlib.h>;

#include <time.h>

using namespace std;

#define SIZE 255

class strtype{
    char *p;
    int len;
    
public:
    strtype();      // Конструктор
    ~strtype();     // Деструктор
    void set(char *ptr);
    void show();
};

// Инициализация объекта строки:
strtype::strtype(){
    p = (char*) malloc(SIZE);
    if(!p) {
        cout << "Ошибка выделения памяти";
        exit(1);
    }
    *p ='\0';
    len = 0;
}
strtype::~strtype(){
    
}

// Освобождение памяти при удалении объекта строки:
void strtype::set(char *ptr)
{
    if(strlen(ptr) > SIZE){
        cout << "Строка слишком велика";
        return;
    }
    strcpy(p,ptr);
    len = strlen(p);
}

void strtype::show(){
    cout << p << " - длина:" << len;
    cout << "\n" ;
}


//      ====    Program #3:     ====

class timer
{
    clock_t start;
public:
    timer();
    ~timer();
};

timer::timer(){
    start =clock();
}

timer::~timer(){
    clock_t end;
    end = clock();
    cout << " Затраченное время : " << (end - start) / CLK_TCK << "\n";
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    cout << "===========" << "\n";
    
   /*
    strtype s1,s2;
    
    s1.set("Это проверка");
    s2.set("Я люблю С++");
    
    s1.show();
    s2.show();
    */
    timer ob;
    char c;
    // Пауза:
    cout << "Нажмите любую клавишу" << "\n";
    cin >> c;
    
    
    return 0;
}
