//
//  main.cpp
//  Coursera_maximizer
//
//  Created by Alex Noyanov on 10.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 Напишите функцию UpdateIfGreater, которая принимает два целочисленных аргумента: first и second.
 Если first оказался больше second, Ваша функция должна записывать в second значение параметра first.
 При этом изменение параметра second должно быть видно на вызывающей стороне.
 */

#include <iostream>

using namespace std;

void UpdateIfGreater(int a, int& b){
    if(a > b){
        b = a;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a,b;
    //cin >> a;
    cin >> b;
    a = 4;
    UpdateIfGreater(4, b);
    // b должно стать равно 4
    cout << a << " " << b << endl;
    
    return 0;
}
