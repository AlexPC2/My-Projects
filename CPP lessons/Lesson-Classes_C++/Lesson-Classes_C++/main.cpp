//
//  main.cpp
//  Lesson-Classes_C++
//
//  Created by Александр Ноянов on 02/01/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>

class myClass                                   // Класс
{
private:
    int value;                                  // Поле со значением
public:
     myClass(){                                 // Конструктор без параметров
        value = 0;
    }
    myClass(int x)                              // Конструктор с параметрами
    {
        value = x;
    }
    myClass( const myClass &x)                  // Конструктор копирования
    {
        value = x.value;
    }
    
};

class myArray                               //
{
    private:
        int* a;                                 // Указатель на int
        int n;                                  // Количество элементов
    public:
    myArray() {
        a = NULL;
        n = 0;
    }
    myArray(int count) {
        a = new int[count];
        n = count;
    }
    ~myArray() {
        delete a;
        a = NULL;
        n = 0;
    }
    int operator[] (int index) const
    {
            if(index >= 0 && index <= n)
                return a[index];
            else
                return 0;
    }
    int& operator[] (int index)
    {
        if(index >= 0 && index <= n)
            return a[index];
        else
            return a[0];
    }

};

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    myArray a(5);
    a[1] = 5;
    std::cout << a[1];
    return 0;
}
