//
//  main.cpp
//  Friendly functions
//
//  Created by Александр Ноянов on 01.10.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

//
// Дружественные функции С++
// Они необходимы для получения доступа к закрытым полям класса
// при этом не являясь частью этого класса
//

#include <iostream>

using namespace std;

class myclass{
    int n,d;
    
public:
    myclass(int i,int j) {n = i; d = j;}
    
    // Объявление дружественной для myclass функции:
    friend int isfactor(myclass ob);                    // Прототип дружественной функции
};

// Описание дружественной функции может быть вне класса
int isfactor(myclass ob){
    if(!(ob.n % ob.d)) return 1;
    else
        return 0;
}

// ВАЖНО: Дружественная фунекция не является членом класса, для которого она дружественна
// Так что нельзя вызывать дружественную функцию, как метод класса

// НЕЛЬЗЯ ТАК: ob1.isfactor();

// Так что дружественная функция вызывается как обычная функция 

int main(int argc, const char * argv[]) {
    
    myclass ob1(10,2),ob2(13,3);                        // Создаем два класса
    
    // Проверяем раоботу функций:
    if(isfactor(ob1)) cout << "10 без остатка делится на 2" << endl;
    else cout << "10 без остатка не делится на 2" << endl;
    
    if(isfactor(ob2)) cout << "13 без остатка делится на 3" << endl;
    else cout << "13 без остатка не делится на 3" << endl;
    
    
    
    return 0;
}
