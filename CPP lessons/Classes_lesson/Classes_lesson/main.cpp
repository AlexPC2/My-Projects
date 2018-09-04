//
//  main.cpp
//  Classes_lesson
//
//  Created by Александр Ноянов on 28.08.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include <iostream>

#define SIZE 10

using namespace std;

// Объявление класса stack для символов
class stack{
    char stck[SIZE];    // Содержит  тек
    int tos;            // Индекс вершины стека
public:
    stack();            // Конструктор
    void push(char s);  // Помещает в стек символ
    char pop();         // Выталкивает из стека символ
};


// Инициализация стека:
stack::stack(){
    cout << "Работа конструктора стека";
    tos = 0;
}

// Помещение в стек символа
void stack::push(char s){
    if(tos == SIZE){
       cout << "Стек полон!";
       return;
    }
    stck[tos] = s;
    tos++;
}

char stack::pop(){
    if(tos == 0)
    {
        cout << "Стек пуст!";
        return 0;
    }
    tos--;
    return stck[tos];
}

// Класс:
class myclass{
private:        // Тут все недоступно
    int a;      // а Нельзя просто так вызвать, ведь а private
public:         // А этим можно пользоваться, вызывая
    void show();
    myclass();      // Конструктор класса
    ~myclass();     // Диструктор класса
    
};
myclass::myclass(){
    
}

myclass::~myclass(){
    
}

int main(int argc, const char * argv[]) {
    
    myclass className;  //  Создаем объект класса
    
    stack myStack;      // Создали стек!

    int i;
    myStack.push('H');
    myStack.push('e');
    myStack.push('l');
    myStack.push('l');
    myStack.push('o');
    myStack.push('!');

    for(i = 0; i < 7; i++){
        cout << "Символ из стека myStack: " << myStack.pop() << "\n";
    }
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


