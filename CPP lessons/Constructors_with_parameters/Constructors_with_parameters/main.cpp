//
//  main.cpp
//  Constructors_with_parameters
//
//  Created by Александр Ноянов on 29.08.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

// Lesson about classes constructors with parameters

#include <iostream>

#define SIZE 255

using namespace std;

class myclass{
    int a;
public:
    myclass(int x);         // Конструктор класса, который принимает параметры
    ~myclass();             // Деструктор же не может принимать никаких параметров
    void show();
};

myclass:: myclass(int x){   // В конструктор можно передавать параметры, чтобы при создании класса заполнить его поля
    cout << "В конструкторе" << "\n";
    a = x;
}

void myclass::show(){
    cout << "Переменная а = " << a << "\n";
}


//      ====   Версия стека, где конструктор принимает параметры    =====
class stack{
    char stck[SIZE];    // Данные стека
    int tos;            // Вершина стека
    char who;           // Идентификатор стека
    
public:
    stack(char c);      // Конструктор стека принимает
    void push(char ch); // Помещает символ в стек
    char pop();         // Выталкивает символ из стека
};

stack::stack(char c){
    cout << "В конструкторе" << "\n";
    who = c;
}

void stack::push(char ch){
    if(tos == SIZE){
        cout << "Стек полон!" << "\n";
        return;
    }
    tos++;
    stck[tos] = ch;
}

char stack::pop(){
    if(tos == 0){
        cout << "Стек пуст!" << "\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

//  ===== Новый класс strtype, в котором используется конструктор с параметрами =====
 

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    myclass ob(4);          // Таким образом при создании класса можно сразу определять его поля
    //  ^
    //( |  Эта запись аналогична такой форме: myclass ob = myclass(4); )
    ob.show();
    
    
    // ====   Пример со стеком  ====
    stack s1('A'), s2('B');         // Создали два объекта стека с индентификаторами А и В
    
    int i;
    
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2.push('d');
    s2.push('e');
    s2.push('f');
    
    // Это вызывет сообщение об ошибке:
    //for(i = 0; i < 3; i++ ) cout << "Символ из стека А" << s1.pop(); << "\n";
     //for(i = 0; i < 3; i++ ) cout << "Символ из стека В" << s2.pop(); << "\n";
    
    return 0;
}
