//
//  main.cpp
//  String_find_Numbers
//
//  Created by Alex Noyanov on 30.04.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    cout << "Введите строку: " << endl;
    string str;
    cin >> str;
    int index;
    for(int i = 0; i< str.length();i++){
        index = str[i];
        cout << i << " : " << index << endl;
    }
    char s;
    for(int i = 0; i < 255; i++)
    {
        s = i;
        cout << i << " : " << s << endl;
    }
    
    return 0;
}
