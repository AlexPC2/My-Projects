//
//  main.cpp
//  Coursera_string_second_index
//
//  Created by Alex Noyanov on 05.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//
/*
 Дана строка. Найдите в этой строке второе вхождение буквы f и выведите индекс этого вхождения.
 Если буква f в данной строке встречается только один раз, выведите число -1, а если не встречается ни разу,
 выведите число -2. Индексы нумеруются с нуля.
 */

/*
 comfort    -1
 coffee    3
 car    -2

 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    cin >> str;
    
    int numOfi = 0;
    char symToFind = 'f';
    int pos = -2;
    int index = 0;
    
    for(auto s:str)
    {
        if(s == symToFind)
            numOfi++;
        if(numOfi == 2)
        {
            pos = index;
            break;
        }
        index++;
    }
    if(numOfi == 1)
    {
        cout << -1 << endl;
    }else{
        cout << pos << endl;
    }
    
    return 0;
}
