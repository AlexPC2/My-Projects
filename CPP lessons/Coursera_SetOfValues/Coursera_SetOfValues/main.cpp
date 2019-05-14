//
//  main.cpp
//  Coursera_SetOfValues
//
//  Created by Александр Ноянов on 12/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

/*
 Напишите функцию BuildMapValuesSet, принимающую на вход словарь map<int, string> и возвращающую множество значений этого словаря:
 */

#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

set<string> BuildMapValuesSet(map<int,string> strMap){
    set<string>strSet;
    for(auto s:strMap){
        strSet.insert(s.second);
    }
    return strSet;
}

int main(int argc, const char * argv[]) {

    set<string> values = BuildMapValuesSet({
        {1, "odd"},
        {2, "even"},
        {3, "odd"},
        {4, "even"},
        {5, "odd"}
    });
    
    for (const string& value : values) {
        cout << value << endl;
    } 
    
    return 0;
}
