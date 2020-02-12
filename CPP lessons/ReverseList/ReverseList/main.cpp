//
//  main.cpp
//  ReverseList
//
//  Created by Alex Noyanov on 12.02.20.
//  Copyright © 2020 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

using namespace std;

struct List{
    int value;
    List* next = NULL;
    void addElement(int x);
};

void List::addElement(int x){
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    List myList;
    int n;
    cout << "=== Input numbers of list elements: ===" << "\n";
    cin >> n;
    
    for(int i = 0; i<n;i++){
        
    }
    
    
    return 0;
}
