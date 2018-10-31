//
//  main.cpp
//  Constructors_destructors_1-3
//
//  Created by Alex Noyanov on 29.08.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

#include <time.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    class stopwatch{        // Класс секундомер
        
    public:
        stopwatch();       // Конструктор
        ~stopwatch();      // Деструктор
        void start();       // Запустить
        void stop();        // Остановить
        void show();        // Показать прошедшее время
    };
    
    
    return 0;
}
