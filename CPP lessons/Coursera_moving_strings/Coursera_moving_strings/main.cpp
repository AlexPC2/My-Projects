//
//  main.cpp
//  Coursera_moving_strings
//
//  Created by Alex Noyanov on 10.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 Напишите функцию MoveStrings, которая принимает два вектора строк, source и destination,
 и дописывает все строки из первого вектора в конец второго.
 После выполнения функции вектор source должен оказаться пустым.
 

 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//void Reverse(vector<int>& v){
//
//    vector<int> reversed;
//    for(auto x:v){
//        v.push_back(x);
//    }
//
//}

void Reverse(vector<int>& v){
    int n = 0;
    for(auto x: v){
        n++;
    }
    int* reversed = new int[n];
    for(int i = 0; i<n;i++){
        reversed[n-i-1] = v[i];
    }
    v.clear();
    for(int i = 0; i<n;i++){
        v.push_back(reversed[i]);
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    vector<int> x= {1,2,3,4,5,6,7,8};
    Reverse(x);
    
    for(auto i:x){
        cout << i << ", ";
    }
    return 0;
}
