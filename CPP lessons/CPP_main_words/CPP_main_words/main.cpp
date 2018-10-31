//
//  main.cpp
//  CPP_main_words
//
//  Created by Александр Ноянов on 24.08.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

// Для возведения в степень s числа х:
int Pow(int x, int s){
    int result = x;
    for(int i = 0; i<s; i++)
        result = result*x;
    return result;
}

// Разворот строки:
//string ReverseString(char* s){
//
//}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int number;
    int s;
    
    cout << "Введите число и степень: "  << "\n";  // Вывод
    cin >> number >> s;                            // Ввод
    
    // Теперь нужно возвести number в степень s:
    cout << "Число " << number << " в степени " << s << " = " << Pow(number,s) << "\n";
    
    return 0;
}
