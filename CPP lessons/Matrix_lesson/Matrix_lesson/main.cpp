//
//  main.cpp
//  Matrix_lesson
//
//  Created by Александр Ноянов on 08/01/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>

class myMatrix
{
    typedef int* pint;
protected:
    int** Matrix;                      // Matrix
    int width, height;
public:
    myMatrix(int x, int y)
    {
        // Making matrix:
        Matrix = new pint[x];
        for(int i = 0; i < x; i++)
        {
            Matrix[i] = new int[y];
        }
        width = x;
        height = y;
    }
    
    ~myMatrix()
    {
        for(int i = 0; i<width;i++)
        {
            delete Matrix[i];
        }
        delete Matrix;
    }
    
};

int main(int argc, const char * argv[]) {
    myMatrix* pm = new myMatrix(5,4);
    myMatrix* am = new myMatrix[5];
    std::cout << "Hello, World!\n";
    return 0;
}
