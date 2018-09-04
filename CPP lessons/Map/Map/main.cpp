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

// Printing this map
void PrintMap(const map<int,string>& m){
    for(auto s:m)
    cout << s.first << ": " << s.second << endl;
    
}

// Print map size:
void PrintMapSize(const map<int,string>& m){
    cout << "Size = " << m.size() << endl;
}


// Creating reverse map:
map<string,int> BuildReverseMap(const map<int,string>& m){
    map<string,int> result; // Result map
    for(auto item:m){
        result[item.second] = item.first;   // Set the following map the number from the string
    }
    return result;
}

// To print reverse map:
void PrintReverseMap(const map<string,int>& m){
    for(auto item:m){
        cout << item.first << " : " <<item.second;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    map<int,string> events;
    events[1950] = "Bjarne Stroustrup's birth";
    events[1941] = "Denis Ritchi's birth";
    
    // Printing map
    PrintMap(events);
    PrintMapSize(events);
    
    // Find the following string from the key:
    cout << events[1950] << endl;
    
    // Delete value:
    events.erase(1950); // Deleting value from this key
    
    // Print reverse map:
    PrintReverseMap(BuildReverseMap(events));
    
    return 0;
}
