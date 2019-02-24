//
//  main.cpp
//  Byte_logical_function
//
//  Created by Александр Ноянов on 24/02/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>

using namespace std;

bool f(bool x1,bool x2,bool x3)
{
    return  x1&&(!x2)&&x3 | (!x1)&&x2&&x3 | (!x1)&&x2&&(!x3) | (x1)&&(x2)&&x3 | (!x1)&&(!x2)&&(!x3);
}

void g()
{
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}
