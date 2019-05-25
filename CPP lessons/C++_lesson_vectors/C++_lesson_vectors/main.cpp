//
//  main.cpp
//  C++_lesson_vectors
//
//  Created by Alex Noyanov on 04.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

// May 4 2019
// Lesson about C++ containers and something
// Here we go..

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    // Example about Vector conatainers in C++ language:
//    vector<string> w = {"a" , "b" , "c"};
//    vector<string> v;
//    v = w;
//    v[0] = "d";
//
//    cout << w[0] << " " << w[1] << endl;
//    cout << v[0] << " " << v[1] << endl;
    
    // Learning about deviding:
    int a = 11;
    int b = 3;
    double a1 = 11;
    double b1 = 3;
    
    cout << a/b << endl;         // The result devided is 3
    cout << a/b1 << endl;        // The result devided is 3.66667 because of double tipe of b1
    cout << a1/b << endl;        // The result is still 3.66667 because one of the numbers is double
    
    int c = 5;
    int a2 = c++;               // Postfix increment
    int b2 = ++c;               // Prefix increment
    // And a2 = 5 , b2 = 7
    cout << "a = " << a2 << endl;
    cout << "b = " << b2 << endl;
    
    string s1 = "fire";
    string s2 = "water";
    
    vector<string>words1 = {"fire","water"};
    vector<string>words2 = {"fog","air"};
    
    if(words1 < words2)
        cout << "Words1 is less than Words2" << endl;
    
    if(s1 < s2)
        cout << "a is less than b" << endl;
    
    // All types in C++ can be comparedvwith logical operators
    string s = "abs";
    if(!s.empty() || s < "zzz"){
        cout << s << endl;
    }
    
    return 0;
}
