//
//  main.cpp
//  Lab5
//
//  Created by Александр Ноянов on 24.09.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

/*                ___
                  \  \
                   \  \
                    \  \
                     \__\
           __________
          | ________ |
           __________
      __  | ________ |   __
     |  |  __________   |  |
     |  | | ________ |  |  |
     |  |_______________|  |
      ---------------------
 
        _____    ___________   _______       _____       _     _
       / / \_\  /___   ____/  / ____  |     / ____|     | |   / /
       | |          | |      / /    | |    / /         | |  / /
        \ \        | |      / /_____| |    | |         | |/ /
         \ \       | |     / _______  |    | |         | |\ \
     __   | |     | |     / /       | |    \ \____    | |   \ \
     \ \_/ /      |_|    /_/        |_|     \_____|   |_|    \_\
       --
 
 */



// Лабораторная №5
// Вариант 12
/*
 Задание 1. Унарная операция
 Создать класс целых чисел (long). Определить оператор --, как функцию-член и ++ как дружественную функцию.
 
 Задание 2. Бинарная операция
 Создать объект стек, с перегруженными операциями +, -, =, +=, и для вытаскивания из стека --. () - выдает под-стек.
 */


#include <iostream>
#include <stack>

#define SIZE 10

using namespace std;

template <typename T>
class myStack : public stack<T>
{
public:
    // return substack or empty stack
    myStack<T> operator () (const myStack<T>& st2) const
    {
        myStack<T> resStack;

        myStack<T> stack = *this;

        while(!stack.empty()) {
            myStack<T> substack = st2;
            while(!substack.empty()) {
                T valuseSt2 = substack.top();
                substack.pop();
                T valuseSt1 = stack.top();
                stack.pop();
                if(valuseSt1 == valuseSt2) {
                    resStack.push(valuseSt1);
                } else
                    break;
            }
            if(substack.empty())
                break; // we have found end of substack -> so the task is over!
            else
                resStack = myStack<T>();
        }
        
        return resStack;
    }

};

typedef myStack<int> stackint;


// Для вывода стека:
void showstack(stackint s)
{
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}

//class myStack{
//    stackint st;
//public:
//    void pushStack(int x);
//    int popStack();
//};

class myLong{                                       // Свой тип long
    long value;                                     // Значение
    
public:
    myLong(){}                                      // Конструктор
    myLong(long v){                                  // Перегруженный конструктор
        value = v;
    }
    long show() const {                               // Узнать значение
        return value;
    }

    myLong& operator -- () {                         // Перегружаем оператор дикримента -- для работы с собственным классом
        value--;                                    // Для этого меняем значение
        return *this;                                // И возвращаем новый myLong с уменьшенным значением
    }
    
    myLong& operator++ () {                         // Перегруженный префиксный  оператор инкремента для myLong используя дружественную функцию
        value++;
        return *this;
    }
    friend myLong operator++ (myLong& l, int ) {    // Перегруженный постфиксный оператор инкремента для myLong используя дружественную функцию
                                                    // Увеличиваем значение value в классе
        myLong l2 = myLong(l.value);
        ++l.value;
        return l2;
    }
    
    friend ostream& operator << (ostream& os, const myLong& l) {
        os << l.value;
        return os;
    }
    
};

myLong operator+(const myLong& l1, const myLong& l2)
{
    return myLong(l1.show()+l2.show());
}
//myLong operator+(long l1, const myLong& l2)
//{
//    return myLong(l1+l2.show());
//}
//myLong operator+(const myLong& l1, long l2)
//{
//    return myLong(l1.show()+l2);
//}

void testLong(myLong* myLngArray)
{
    /*
    myLong l1(10);
    myLong l2 = l1 + 5;
    myLong l3 = 6 + l2;
    myLong l4 = 5 + 6;
    
    myLong l5 = l4++;
    myLong l6 = ++l3;
    
    cout << "l5=" << l5 << " l6=" << l6 << endl;
    */
    for(int i = 0; i < SIZE; i++){          // Заполняем этом массив
        myLngArray[i] = i+1;
    }
    
    cout << " Массив целых чисел myLong:" << endl;
    for(int i = 0; i<SIZE;i++){             // Выводим массив
        cout << myLngArray[i].show() << endl;
    }
    
    // Применяем самодельный инкремент ко всем элементам массива:
    for(int i = 0; i<SIZE; i++){
        ++myLngArray[i];
    }
    
    cout << endl;
    cout << " Массив целых чисел myLong после ++:" << endl;
    for(int i = 0; i<SIZE;i++){             // Выводим массив
        cout << myLngArray[i].show() << endl;
    }
    
    // Применяем самодельный дикримент ко всем элементам массива:
    for(int i = 0; i<SIZE; i++){
        --myLngArray[i];
    }
    
    cout << endl;
    cout << " Массив целых чисел myLong после --:" << endl;
    for(int i = 0; i<SIZE;i++){                                     // Выводим массив
        cout << myLngArray[i].show() << endl;
    }
        cout << endl;
}

// === Перегружаем оператор сравнения для стека ===
bool operator ==(stackint &st1,stackint &st2)
{
    if (st1.size() != st2.size())                                   // Сначала по количеству элементов стека
        return false;
                                                                    // Тепрь каждый элемент с каждым
    bool result = true;
    int value1 = st1.top();
    int value2 = st2.top();
    int i = 0;
    
    if(value1!=value2)
        return false;
    
    while(i < st1.size()-1 && (value1 == value2))
    {
        if(value1 != value2)
            result = false;
        
        value1 = st1.top();                                         // Чтобы получить значение из стека нужно использовать top
        value2 = st2.top();
        
        i++;
    }
    return result;
    
}

stackint operator +(stackint st1,stackint st2)                // Перегруженный оператор +
{
    //stackint resultStack;
    int value;
    
    while(!st2.empty())
    {
        value = st2.top();
        st2.pop();
        st1.push(value);
    }
    
    return st1;
}

stackint operator -(stackint st1,stackint st2)                // Перегруженный оператор -
{
    int value1 ,value2 ,resValue = 0;
    stackint resStack;
    while(!st2.empty() && !st1.empty())
    {
        value1 = st1.top();
        //cout << "value1 " << value1 << " " <<endl;
        st1.pop();
        value2 = st2.top();
        //cout << "value2 " << value2 << " " <<endl;
        st2.pop();
        
        resValue = value1-value2;
        
        resStack.push(resValue);
    }
    
    return resStack;
}

stackint& operator +=(stackint& st1,int value)
{
    int v;
    stackint resStack;

    while(!st1.empty())
    {
        v = st1.top();
        st1.pop();
        v+=value;
        resStack.push(v);
    }

    st1 = resStack;
    
    return st1;
}

int operator --(stackint st1, int x)
{
    int value = st1.top();
    st1.pop();
    
    return value;
}


void stackTest()
{
    stackint myStack;                     // Стек из библиотеки стандартных контейнеров C++
    stackint myStack2;
    stackint myStack3;
    stackint myStack4;
    
    
    for(int i = 0; i < 10;i++){              // Заполняем первый стек 0-9
        myStack.push(i);
    }
    cout << " === Первый стек === " << endl; // Выводим содержимое первого стека
    showstack(myStack);
    
    cout << endl;
    
    for(int i = 0; i < 10;i++){              // Заполняем второй стек 0-9
        myStack2.push(i);
    }
    cout << " === Второй стек === " << endl;
    showstack(myStack2);
    cout << endl;
    
    for(int i = 0; i < 10;i++){             // Заполняем третий стек 1-10
        myStack3.push(i+1);
    }
    cout << " === Третий стек === " << endl;
    showstack(myStack3);
    cout << endl;
    
    for(int i = 0; i < 12;i++){             // Четвертый стек длиннее
        myStack4.push(i);
    }
    cout << " === Четвертый стек === " << endl;
    showstack(myStack4);
    cout << endl;
    
    cout << " == Сравним эти стеки между собой ==" << endl;
    
    if(myStack == myStack2)
        cout << "Первый стек равен второму" << endl;
    else
        cout << "Первый стек не равен второму" << endl;
    if(myStack == myStack3)
        cout << "Первый стек равен третьему" << endl;
    else
        cout << "Первый стек не равен трeтьему" << endl;
    if(myStack == myStack4)
        cout << "Первый стек равен четвертому" << endl;
    else
        cout << "Первый стек не равен четвертому" << endl;
    
    cout << endl;
    cout << "Первый + второй стек:" << endl;
    showstack(myStack+myStack2);
    
    cout << endl;
    cout << "Первый + третий стек:" << endl;
    showstack(myStack+myStack3);
    
    cout << endl;
    cout << "Первый + четвертый стек:" << endl;
    showstack(myStack+myStack4);
    
    cout << endl;
    cout << "Первый - второй стек:" << endl;
    showstack(myStack-myStack2);
    
    cout << endl;
    cout << "Первый - четвертый стек:" << endl;
    showstack(myStack-myStack4);
    cout << endl;
    
    cout << " Первый стек += 10" << endl;
    showstack(myStack+=10);
    cout << endl;
    
    cout << " Применяем '--' к первому стеку" << endl;
    
    int myStackTop = myStack--;
    cout << myStackTop << endl;
    
    cout << "Ищем подстек 13 12 11 в первом стеке" << endl;
    
    stackint subst;
    subst.push(13);
    subst.push(12);
    subst.push(11);

    showstack(myStack(subst));
    
    
}

int main(int argc, const char * argv[]) {
    
    cout << "  <==== Lab #5 ====>" << endl;
    
    myLong myLngArray[SIZE];                // Массив из myLong
    testLong(myLngArray);                   // Сделать тест перегруженых операторов для myLong
    
    stackTest();
    
    return 0;
}
