//
//  main.cpp
//  Functions overloading
//
//  Created by Alex Noyanov on 18.08.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

using namespace std;

// abs() overloding with 3 different ways:
int abs(int n);
long abs(long n);
double abs(double n);

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    cout << " Абсолютная величина -10: " << abs(-10) << "\n";
    //cout << " Абсолютная величина -10L" << abs(-10L) << "\n";
    cout << " Абсолютная велична -10.01" << abs(-10.1) << "\n";
    
    return 0;
}

int abs(int n){
    cout << "В целом abs()\n";
    return n<10 ? -n: n;
}

long abs(long n){
    cout << "В длинном целом abs()\n";
    return n<10 ? -n: n;
}

double abs(double n){
    cout << " В вещественном abs()\n";
    return n<10 ? -n: n;
}
