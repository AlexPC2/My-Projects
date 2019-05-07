//
//  main.cpp
//  Coursera_NOD
//
//  Created by Alex Noyanov on 05.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
    В stdin даны два натуральных числа. Выведите в stdout их наибольший общий делитель.
 
 25 27    1
 12 16    4
 13 13    13
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a,b;
    cin >> a >> b;
    
    /*
     Пока A > 0 и B > 0: Если A > B:
     A=A%B иначе:
     B=B%A Вывести A + B
     */
    while(a > 0 && b > 0)
    {
        if(a > b)
        {
            a = a%b;
        }else{
            b = b%a;
        }
    }
    
    cout << a+b << endl;
//    if(a == b){
//        cout << a << endl;
//    }else{
//    int nod = 1;
//    int maxab = 0;
//    if(a > b)
//        maxab = a;
//    else
//        maxab = b;
//
//        if(a%maxab == 0 && b%maxab == 0)
//        {
//            cout << maxab;
//        }else{
//    for(int i = 1; i<=maxab; i++)
//    {
//        if(a%i == 0 && b%i == 0)
//            nod = i;
//    }
//    cout << nod << endl;
//        }
//    }
    return 0;
}
