//
//  main.cpp
//  Containers
//
//  Created by Александр Ноянов on 23.07.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

// Lesson #0
// Containers
// In this lesson I will learn more about cpp containers
// the first container is "vector"

#include <iostream>
#include <vector>

using namespace std;    // Using namespase 'std'


// Print vector:
void PrintVector(const vector<string>& v){
    for(string s : v)
    cout << s << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";

    int n;                  // How many strings
    cin >> n;               // Read n from console
    
    vector<string> v(n);    // Vector of 'n' strings (empty when created)
    //vector<string> v;         // Empty vector for second method
    
    // Read strings to vector: (First method)
    for(string& s : v){
        cin >> s;
        cout << "Vector size = " << v.size() << endl;   // Print vector size
    }
    
    // Second method with "PushBack":
//    int i = 0;
//    while(i < n){
//        string s;
//        cin >> s;
//        v.push_back(s); // Push next element to the vector
//        // Print vector size with method 'size'
//        cout << "Vector size = " << v.size() << endl;
//        i++;
//    }
    
    PrintVector(v);
    
    return 0;
}
