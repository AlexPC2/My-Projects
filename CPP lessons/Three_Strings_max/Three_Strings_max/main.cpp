//
//  main.cpp
//  Three_Strings_max
//
//  Created by Alex Noyanov on 04.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 В стандартном потоке даны три строки, разделённые пробелом.
 Каждая строка состоит из строчных латинских букв и имеет длину не более 30 символов.
 Выведите в стандартный вывод лексикографически минимальную из них.
 */


#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {

    string str1,str2,str3;
    cin >> str1 >> str2 >> str3;
    
    // 1 < 2 and 1 < 3
    if(str1 < str2)
    {
        if(str1 < str3)
        {
            cout << str1;
        }else{
            cout << str3;
        }
    }else{
        if(str3 < str2)
        {
            cout << str3;
        }else{
            cout << str2;
        }
    }
    
    return 0;
}
