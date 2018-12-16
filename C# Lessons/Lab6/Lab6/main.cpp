//
//  main.cpp
//  Lab6
//
//  Created by Александр Ноянов on 17/10/2018.
//  Copyright © 2018 MPEI. All rights reserved.
//

//Вариант 12.
//Описать класс, реализующий шестнадцатеричный счетчик, который может увеличивать или уменьшать свое значение на единицу в заданном диапазоне.
//Предусмотреть инициализацию счетчика значениями по умолчанию и произвольными значениями. Счетчик имеет два метода: увеличения и уменьшения, — и
//свойство, позволяющее получить его текущее состояние.
//При выходе за границы диапазона выбрасываются исключения.
//Написать программу, демонстрирующую все разработанные элементы класса.
//Создать дочерний класс, который может увеличивать или уменьшать свое значение на любое введенное число в заданном диапазоне

/*                                  __________
           ______                  |     ___   \
         /  ____  \     __    __    |   |    \   \
        /  /    \  \    \ \  / /    |   |     |   |
        |  |    |  |     \ \/ /     |   |___ /   /
        |  |    |  |     / /\ \     |    _____   \
        \  \____/  /    / /  \ \    |   |      \   \
         \________/     --    --    |   |      |   |
                                    |   |_____ /   /
                                   |____________ /
 
 
 */

/*
 
 
 
 88        88 88888888888 8b        d8
 88        88 88           Y8,    ,8P
 88        88 88            `8b  d8'
 88aaaaaaaa88 88aaaaa         Y88P
 88""""""""88 88"""""         d88b
 88        88 88            ,8P  Y8,
 88        88 88           d8'    `8b
 88        88 88888888888 8P        Y8
 
 
 
  ,ad8888ba,
 d8"'    `"8b                                       ,d
 d8'                                                88
 88             ,adPPYba,  88       88 8b,dPPYba, MM88MMM ,adPPYba, 8b,dPPYba,
 88            a8"     "8a 88       88 88P'   `"8a  88   a8P_____88 88P'   "Y8
 Y8,           8b       d8 88       88 88       88  88   8PP""""""" 88
 Y8a.    .a8P  "8a,   ,a8" "8a,   ,a88 88       88  88,  "8b,   ,aa 88
  `"Y8888Y"'    `"YbbdP"'  `"YbbdP'Y8  88       88  "Y888 `"Ybbd8"' 88
 
 */




#include <iostream>
#include "drawing.hpp"
using namespace std;

class HexCounter                                                        // Класс 16-й счетчик
{
protected:                                                               // protected: Чтобы наследовались
    int min,max;                                                        // Верхний и нижний пределы счетчика
    int intValue;                                                       // Значение счетчика
    
public:
   
    HexCounter(int m,int mx,int v){                                     // Конструктор (min,max,bValue)
        min = m;
        max = mx;
        intValue = v;
    }
    HexCounter(){};
    
    HexCounter& operator ++()                                           // Оператор инкримент
    {
        if(intValue < max)
        {
           intValue++;
           return *this;
        }else{
            cout << " == Счетчик дошел до верхнего предела! ===" << endl;
            return *this;
        }
    }
    
    HexCounter& operator --()                                           // Оператор дикримент
    {
        if(intValue > min)
        {
            intValue--;
            return *this;
        }else{
            cout << " == Счетчик дошел до нижнего предела! ===" << endl;
            return *this;
        }
    }
    
    void setCounter(int mn,int mx,int bvalue);
    int getValue();
};

void HexCounter:: setCounter(int mn,int mx,int bvalue){
    
    if(mn >= mx)
    {
        cout << "ОШИБКА: Минимум счетчика <= его максимуму! " << endl;
    } else{
    min = mn;
    max = mx;
    intValue = bvalue;
    }
}

int HexCounter:: getValue()
{
    return intValue;
}

// === Наследуемый класс десятичный счетчик: ===
class DecCounter: private HexCounter{
    //int dMin,dMax,dIntValue;
public:
    DecCounter(int m,int mx,int v){                                     // Конструктор (min,max,bValue)
        min = m;
        max = mx;
        intValue = v;
    }
    
};

HexCounter Tests()
{
    cout << "-> Проведем тесты со счетчиком" << endl;
    cout << " Создаем счетчик с минимумом 1 и максимумом 9 и начальным значением 2" << endl;

    HexCounter tHex(1,9,2);
    cout << "   Проверяем значение:" << tHex.getValue() << endl;
    cout << "Применяем ++:" << endl;
    ++tHex;
    cout << "Значение счетчика:" << tHex.getValue() << endl;
    
    cout << "Применяем --:" << endl;
    --tHex;
    cout << "Значение счетчика:" << tHex.getValue() << endl;
    
    cout << "Пробуем создать счетчик с минимумом >= максимума :" << endl;
    tHex.setCounter(9, 1, 2);
    cout << "При этом значение счетчика:" <<  tHex.getValue() << endl;
    return tHex;
}
//DecCounter DecTest()
//{
//    cout << "-> Проведем тесты со счетчиком" << endl;
//    cout << " Создаем счетчик с минимумом 1 и максимумом 9 и начальным значением 2" << endl;
//
//    DecCounter tDex(1,9,2);
//    cout << "   Проверяем значение:" << tDex.getValue() << endl;
//    cout << "Применяем ++:" << endl;
//    ++tDex;
//    cout << "Значение счетчика:" << tDex.getValue() << endl;
//
//    cout << "Применяем --:" << endl;
//    --tDex;
//    cout << "Значение счетчика:" << tDex.getValue() << endl;
//
//    cout << "Пробуем создать счетчик с минимумом >= максимума :" << endl;
//    tDex.setCounter(9, 1, 2);
//    cout << "При этом значение счетчика:" <<  tDex.getValue() << endl;
//    return tDex;
//}


int main(int argc, const char * argv[]) {

    char s;
    
    int beginV,minV,maxV;
    string menu = "=== Варианты действий: ==== \n >Провести тесты - 't' \n >Создать свой счетчик 'c' \n >Операция '+' \n >Операция '-'\n >Значение счетчика 'v' \n > \n >Выход 'e' ";
    drawLogo();
    //cout << "   ==== Lab #6 ====" << endl;
    //cout << "Выбирите тип счетчика: \n > 'h' - 16-й \n > 'd' - Десятичный" << endl;
    
    
    cout << menu << endl;                                                       // Выводим меню
    cout << endl;
    cout << " Введите команду:" << endl;
    
    cin >> s;                                                                   // Получаем вариант от пользователя
    
    HexCounter myCounter(1,2,3);                                                  // 16-й счетчик
    DecCounter myDec(1,2,3);                                                      // 10-й счетчик
    
    //myDec().SetValue(1,2,3);
    while(s != 'e')
    {
    switch (s) {
        case 't':
        {
            myCounter = Tests();
            break;
        }
        case 'c':
        {
            cout << "-> Создание своего счетчика:" << endl;
            cout << " Введите минимум счетчика (В 16-й): " << endl;
            cin >> hex >> minV;
            cout << " Введите максимум счетчика (В 16-й): " << endl;
            cin >> hex >> maxV;
            if(maxV <= minV)
            {
                cout << "ОШИБКА: Минимум счетчика <= его максимуму! Введите повторно:" << endl;
                while(maxV <= minV)
                     cin >> hex >> maxV;
                cout << "Отлично! Теперь максимум верный, продолжим.." << endl;
            }
            cout << "Начальное значение счетчика:"<< endl;
            cin >> hex >> beginV;
            if((beginV < minV) || (beginV > maxV))
            {
                cout << " ОШИБКА: Начальное значение за диапазоном! Введите снова:" << endl;
                while((beginV < minV) || (beginV > maxV))
                    cin >> hex >> beginV;
            }
            myCounter.setCounter(minV, maxV, beginV);
            cout << "Счетчик создан" << endl;
            break;
        }
            
        case '+':
        {
            {
            ++myCounter;
                cout << "Значение счетчика:" << myCounter.getValue();
            break;
            }
        }
        case '-':
        {
            {
            --myCounter;
            cout << "Значение счетчика:" << myCounter.getValue();
            break;
            }
        }
            
        case 'v':
        {
            cout << "Значение счетчика = " << myCounter.getValue() << endl;
            break;
        }
        default:
        {
            cout << "Неизвестная команда, попробуйтеснова:" << endl;
            //cin >> s;
            break;
        }
     }
        cout << endl;
        cout << " Введите команду:" << endl;
        cin >> s;
   }

    cout << endl;
    cout << "Выход.. Завершение программы" << endl;
    
    return 0;
}
