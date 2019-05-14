//
//  main.cpp
//  Coursera_lessons
//
//  Created by Александр Ноянов on 12/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;

/*
Дан набор строк. Найдите количество уникальных строк в этом наборе.

Формат ввода

Сначала вводится количество строк N, затем — сами N строк, разделённые пробелом. Все строки состоят лишь из латинских букв, цифр и символов подчёркивания.

Формат вывода

Выведите единственное целое число — количество уникальных строк в данном наборе.
*/


int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//    set<char> s = {'a', 'b', 'a'};
//    cout << s.count('a') << endl;
//    char x = 'z';
//    cout << s.size() << endl;
//    s.erase(x);
//    s.insert(x);
//
//
//    cout << s.size();
    
    
//    set<int> s = {4, 2, 1, 2};
//    s.erase(2);
//    s.insert(1);
//    cout << s.size();
    
    
    int n;
    set<string>mySet;
    string str;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> str;
        mySet.insert(str);
    }
    
    cout << mySet.size();
    
//    for(auto s:mySet){
//        cout << s << endl;
//    }
    
}
