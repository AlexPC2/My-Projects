//
//  main.cpp
//  Object_as_function_parameter
//
//  Created by Alex Noyanov on 16.09.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

// Chapter 3.2:
// Передача объектов в функцию

#include <iostream>

using namespace std;

class samp{
    int i;
public:
    samp(int n){i = n;}
    int get_i() {return i;}
};

// Возвращает квадрат о.i:
int sqr_it(samp o){         // В функцию как параметр передаеются объект класса samp
    return o.get_i() *o.get_i();
}

int main(int argc, const char * argv[]) {

    samp a(10), b(2);
    
    cout << sqr_it(a) << "\n";          // Передаем в функцию объект класса samp
    cout << sqr_it(b) << "\n";
    
    return 0;
}
