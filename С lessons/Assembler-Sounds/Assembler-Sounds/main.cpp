//
//  main.cpp
//  Assembler-Sounds
//
//  Created by Alex Noyanov on 14.02.20.
//  Copyright © 2020 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <fstream>



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "  ==== Assembler code in C++! ====   \n";
    
    std:: ifstream inFile;
    inFile.open("mps_lab1.asm");
    
    if(){
        
    }
    
    __asm__(
            "movl $10, %eax;"
            "movl $20, %ebx;"
            "addl %ebx, %eax;"
            );
    
    
    
    return 0;
}
