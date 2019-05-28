//
//  main.cpp
//  Coursera_sorting_module
//
//  Created by Александр Ноянов on 14/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

/*
 В стандартном потоке дана одна строка, состоящая из N + 1 целых чисел. Первым числом идёт само число N.
 Далее следуют ещё N чисел, обозначим их за массив A. Между собой числа разделены пробелом.
 
 Отсортируйте массив А по модулю и выведите его в стандартный поток.

 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string GetPositivity(int x) {
    return x > 0 ? "positive"
    : (x == 0 ? "zero" : "negative");
}

int main(int argc, const char * argv[]) {

    //cout << GetPositivity(-5);
    {
        vector<string> w;
        w.push_back("One");
        {
            w.push_back("Two");
            {
                w.push_back("Three");
            }
        }
        for (auto s : w) {
            cout << s;
        }
    }
    //string n;
    int n;
    cin >> n;
   // int x;
    string s;
    //vector<int> numbers;
    vector<string> numbers;
    for(int i = 0;i < n;i++){
        //cin >> x;
        cin >> s;
//        //x>0?x:x = x*(-1);
//        if(x<0)
//            x = x*(-1);
        //numbers.push_back(x);
        numbers.push_back(s);
    }
    
//    for(auto str:numbers){
//        for(auto s:str){
//            tolower(s);
//        }
//    }
    
    //sort(begin(numbers), end(numbers),[](int i,int j){return abs(i) < abs(j);});
    
    
    
    sort(begin(numbers), end(numbers),[](string i,string j){
        for(auto& s:i){
            s = tolower(s);
            
        }
        for(auto& s:j){
           s = tolower(s);
        }
        return i < j;});
    
    for(auto n : numbers){
        cout << n << " ";
    }
    return 0;
}
