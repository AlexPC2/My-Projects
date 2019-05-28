//
//  main.cpp
//  Coursera_Polindrom
//
//  Created by Alex Noyanov on 08.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 Напишите функцию, которая
 
 называется IsPalindrom
 возвращает bool
 принимает параметр типа string и возвращает, является ли переданная строка палиндромом
 Палиндром - это слово или фраза, которые одинаково читаются слева направо и справа налево.
 Пустая строка является палиндромом.
 */

#include <iostream>
#include <string>

using namespace std;

bool IsPalindrom(string str){
    bool result = true;
    for(int i = 0; i < str.length()/2;i++){
        if(str[i] != str[str.length() - i - 1]){
            result = false;
            break;
        }
    }
    
    return result;
}

int main(int argc, const char * argv[]) {

    string str;
    cin >> str;
    if(IsPalindrom(str)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
        
    return 0;
}
