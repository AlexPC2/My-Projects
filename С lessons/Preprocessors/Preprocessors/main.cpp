//
//  main.cpp
//  Preprocessors
//
//  Created by Александр Ноянов on 01.02.18.
//  Copyright © 2018 ANLab. All rights reserved.
//

//  Commands with # called preprocessors operators

#include <iostream>

// #include<fileName> or #include"fileName"

// If #include with "" then file is in project directory
// If #include with <> then following files can be found in some other places


#define A 100 // This construction called macro substitution
// #define first second
// First emplemantion will be changed by second and can be used everywhere


#define max(A,B) ((A) > (B) ? (A):(B))

// Then x = max(p+q,r+s) will be replaced:
// x = ((p+q) > (r+s) ? (p+q):(r+s))
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
