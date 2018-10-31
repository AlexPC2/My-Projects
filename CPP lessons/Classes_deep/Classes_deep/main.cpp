//
//  main.cpp
//  Classes_deep
//
//  Created by Alex Noyanov on 16.09.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

// Chapter 3: Подробное изучение классов

#include <iostream>

using namespace std;

class widget {      // Класс
    int x,y;
public:
    widget();      // Конструктор класса    (Вызывается при создании объектов класса)
    ~widget();     // Деструктор класса     (Вызывается при удалении объектов класса автоматически)
};

// === Наслдеование классов: ===
class planet{       // Базовый класс - планеты
    int moons;
    double dist_from_sun;
    double diameter;
    double mass;
public:
    // ...
};

class Mars: public planet{  // Класс Mars -  производный от базового класса planet
    int distance_from_Eath;
public:
    // ...
};

// === Встраиваемые функции: ===
class myClass{
    int i,j;
public:
    int sum(int a,int b){  // Встраиваемая функция может быть реализована прямо внутри тела класса
        return a+b;
    }
    void show(){ cout << i << "  " << j;}
};


// Chapter 3.1:
//  === Присваивание объектов друг другу: ===
class myclass {
    int a,b;
public:
    void set(int i,int j){
        a = i;
        b = j;
    }
    void show(){
        cout << a << " " << b << "\n";
    }
    
};

//  Присваивание классов другу другу:
void Example1(){
    myclass o1,o2;  // Два объекта класса myclass
    
    o1.set(10, 4);  // Задали значени первому объекту
    
    o2 = o1;       // Присвоили один объект другому
    
    o1.show();      // Смотрим значения обоих объектов
    o2.show();
    //При запуске видим следующее:
    /*
     10 4
     10 4
     */
    
    // Присваивание двух объектов просто делает одинаковым данные двух объектов
    // При этом сами объекты остаюся независимыми
    
    // При этом нельзя присваивать друг другу объеткы разных типов
}

#define SIZE 10

// Объявление класса stack для символов:
class stack{
    char stck[SIZE];
    int tos;
public:
    stack();
    void push(char s);
    char pop();
};

stack::stack(){
    cout << "Работа конструктора" << "\n";
    tos = 0;
}

void stack::push(char s){
    if(tos == SIZE){
        cout << "Стек полон!" << "\n";
        return;
    }
    stck[tos] = s;
    tos++;
}

char stack::pop(){
    if(tos == 0){
        cout << "Стек пуст!" << "\n";
        return 0;
    }
    tos --;
    return stck[tos];
}

void Example2_Stack(){
    stack s1,s2;
    
    s1.push('a');
    s1.push('b');
    s1.push('c');
    
    // Копирование s1 в s2
    s2 = s1;    // теперь s2 и s1 идентичны
    
    int i;
    
    for(i = 0; i<3 ;i++) cout << "Символ из s1:" << s1.pop() << "\n";
    for(i = 0; i<3 ;i++) cout << "Символ из s2:" << s2.pop() << "\n";
    
    // Что получаем на выходе:
    /*
     Работа конструктора
     Работа конструктора
     Символ из s1:c
     Символ из s1:b
     Символ из s1:a
     Символ из s2:c
     Символ из s2:b
     Символ из s2:a
     */
}

int main(int argc, const char * argv[]) {
    

    
    return 0;
}
