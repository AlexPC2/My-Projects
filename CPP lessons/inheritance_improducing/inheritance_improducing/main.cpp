//
//  main.cpp
//  inheritance_improducing
//
//  Created by Александр Ноянов on 31.08.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

//  ==== Введение в наследование классов ====

// Наследование - один класс может наследовать функции другого

// Когда один класс наследуется другим, класс,  который наследуется называется базовым классом (base class)

// Наследующий класс называется производным классом (derived class)

#include <iostream>

using namespace std;

// Задание базового класса:
class B{
    int i;
    
public:
    void set_i(int i);
    int get_i();
};

// Теперь производный класс, наследующий этот базовый:
class D : public B{     // Класс D наследует класс В при этом public очначает, что все
                        //открытые функции базового класса будут открыты и в производном
    int j;
    
public:
    void set_j(int n);
    int mul();
};

//  ==== Пример наследования классов    =====
// Задание базового класса:
class base{
    int i;
public:
    void set_i(int n);
    int get_i();
};

// Задание производного класса:
class derived:public base{
    int j;
    
 public:
    void set_j(int n);
    int mul();
};

// Функции базового класса:
void base::set_i(int n){
    i = n;
}

int base::get_i(){
    return i;
}

// Функции производног класса:
void derived::set_j(int n){
    j = n;
}

int derived::mul(){                 // Производный класс может вызывать функции-члены базового класса
    return j * get_i();
}


int main(int argc, const char * argv[]) {
    // insert code here...
    // std::cout << "Hello, World!\n";
    
    derived ob;
    
    ob.set_i(5);        // Загрузка i в base
    ob.set_j(10);       // Загрузка j в derived
    
    cout << ob.mul() << "\n";   // Вывод числа 50
    
    return 0;
}
