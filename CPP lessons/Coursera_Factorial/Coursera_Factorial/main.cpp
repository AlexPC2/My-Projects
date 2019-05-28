//
//  main.cpp
//  Coursera_Factorial
//
//  Created by Alex Noyanov on 08.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

using namespace std;

int Factorial(int n)
{
    int f = 1;
    //if(n > 0)
    //{
    for(int i = 1; i <= n;i++)
    {
        f = f*i;
    }
    //}
    return f;
}

int main(int argc, const char * argv[]) {

    int x;
    cin >> x;
    int value = Factorial(x);
    cout << value << endl;
    
    return 0;
}
