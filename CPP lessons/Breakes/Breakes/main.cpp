//
//  main.cpp
//  Breakes
//
//  Created by Alex Noyanov on 05.03.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    int a,b,c,d;  // a -(( b-() c-)( d-))
    
    // Ввод количества всех типов:
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    int openBrakes = 0;
    int closedBrakes = 0;
    
    openBrakes = a*2 + c + b;
    closedBrakes = d*2 + c + b;
    
    if(openBrakes == closedBrakes)
        cout << 1;
    else
        cout << 0;
    
    return 0;
}
