//
//  main.cpp
//  Classes_improducing
//
//  Created by Alex Noyanov on 25.08.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//


// Строка - это массив из символов, оканчивающихся символом конца строки - '\0'

#include <iostream>

using namespace std;


// Находим длину строки, перемещаясь по строке, как по массиву, чтобы найти символ конца строки '\0'
int strLength(const char* str){
    int length = 0;
    
    while(str[length] != '\0'){
        length++;
    }
    
    return length;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    char str[20] = "Hello world!";
    
    cout << "   ==== Находим длину строк ====" << "\n";
    
    cout << "Длина строки: " << str << " равна " << strLength(str) << "\n"; // Используем нашу чудо-функцию
    
    
    return 0;
}
