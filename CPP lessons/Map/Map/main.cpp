//
//  main.cpp
//  Map
//
//  Created by Александр Ноянов on 23.07.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

// The 23th of July

// In this lesson I will learn about maps in cpp language

#include <iostream>
#include <map>
using namespace std;

void PrintMap(const map<int,string>& m){
    for(auto s:m)
    cout << s.first << ": " << s.second << endl;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    map<int,string> events;
    events[1950] = "Bjarne Stroustrup's birth";
    events[1941] = "Denis Ritchi's birth";
    
    // Printing map
    PrintMap(events);
    
    return 0;
}
