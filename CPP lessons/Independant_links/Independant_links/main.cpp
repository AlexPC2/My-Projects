//
//  main.cpp
//  Independant_links
//
//  Created by Александр Ноянов on 02/11/2018.
//  Copyright © 2018 MPEI. All rights reserved.
//

// Independants links looks like pointers but they are not pointers


#include <iostream>

using namespace std;

class a_type {
    double a,b;
    double arr[2][5];
public:
    a_type(double x, double y){
        a = x;
        b = y;
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 2;j++)
            {
                arr[j][i] = i+j;
            }
        }
    }
    void show() {cout << a << ' ' << b << "\n";}
};

class b_type{
    int a,b;
    int** arrB;
    
public:
    b_type(int x,int y, int **arr)
    {
        arrB = arr;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int x;
    int &ref = x;                           // Независимая ссылка
    
    //a_type a = new a_type[1,1];
    
    x = 10;                                 // Эти два оператора функцианально идентичны
    ref = 10;
    
    ref = 100;
    
    cout << x << " " << ref << "\n";        // Выведется 100 и 100
    
    //delete [] a;
    
    return 0;
}
