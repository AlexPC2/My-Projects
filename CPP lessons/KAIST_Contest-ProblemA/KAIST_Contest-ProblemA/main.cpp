//
//  main.cpp
//  KAIST_Contest-ProblemA
//
//  Created by Alex Noyanov on 15.03.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//
//                                          _
/*         ___         /   / __           /  /
         /___/ __  _  /_  / /_           /- /
        /     /  /_/ /_/ / /_ /\/\      /  /
 
 */

// Даны два числа а и b
// Над ними за один шаг можно делать операции:
/*
 - A += A
 - A += B
 - B += B
 - B += A
 
 Вывести количество шагов для того, чтобы эти числа стали равны и эти шаги
 
 Input : 2 3
 
 A | 2 | 2 | 2 | 4 | 8 |
 _______________________
 B | 3 | 6 | 8 | 8 | 8 |
 
 Output :
 5
 B += B
 B += A
 A += A
 A += A
 A += A
 
    Input x and y
 Alghrorithm:
    If  x+=x
    At the same time even equal to y/=2
 
    Cancel two's of x and y
 
 if x > y => x = (x+y)/2
 
 Time : O(logC)

 Another example:
 
 A | 3 | 6 | 12 | 16 | 16 |
 __________________________
 B | 4 | 4 |  4 | 8  | 16 |
 
 */

#include <iostream>

typedef long valueType;
static int steps = 0;
using namespace std;

valueType prAA(valueType a)
{
    cout << "A += A" << endl;
    steps++;
    return a+=a;
}
valueType prAB(valueType a, valueType b)
{
    cout << "A += B" << endl;
    steps++;
    return a+=b;
}
valueType prBB(valueType b)
{
    cout << "B += B" << endl;
    steps++;
    return b+=b;
}

valueType prBA(valueType b,valueType a)
{
    cout << "B += A" << endl;
    steps++;
    return b+=a;
}

int main(int argc, const char * argv[]) {
  
    // Input:
    valueType a, b;
    
    cin >> a;
    cin >> b;
    
    //
    while (a != b)
    {
        // Alghorithm:
        
        /*
         A += A is equivalent to B/=2
         B += B is equivalent to A/=2
         */
        
//        if (a+=a == b/2)
//        {
//            a += a;
//            prAA();
//        }
        
//        if(a < b)
//        {
//            if(b  % 2 != 0)
//            {
//                if((b+=a)%a == 0 )
//                {
//                    b+=a;
//                    prBA();
//                }else{
//                    b+=b;
//                    prBB();
//                }
//            }else{
//              if((a/b)%2 == 0)
//              {
//                  a+=a;
//                  prAA();
//              }else{
//                  b+=b;
//                  prBB();
//              }
//            }
//        }
//        if((a+=a) == b)
//        {
//            a+=a;
//            prAA();
//        }
        
//        if(a > b)
//        {
//            a = prAB(a, b);
//            b = prBB(b);
//        }else{
//            b = prBA(b, a);
//            a = prAA(a);
//        }
//
    }
    // Output:
    cout << endl << steps << endl;
    
    return 0;
}
