//
//  main.cpp
//  Lab10
//
//  Created by Александр Ноянов on 13/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

/*
 Составить программу для нахождения а^b mod p
 */

#include <iostream>
#include <math.h>

#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    int a,b;
    int p;
    // вводим
    cout << "Input a:" << endl;
    cin >> a;
    cout << "Input b:" << endl;
    cin >> b;
    cout << "Input p:" << endl;
    cin >> p;
    
    // Находим остаток от деления
    int ost = a;
    for (int i = 0; i < b - 1; i++)
    {
        ost = (ost * a) % p;
        cout <<  "Ost = " << ost << "   "<<i << endl;
    }
    cout << "a^b mod p = "<< ost <<endl;
    
    string str = "";
    int n;
    cin >> n;
    int a1 = 10;
    int p1 = 60;
    int ost1 = a1;
    
    for (int i = 0; i < n - 2; i++)
    {
        ost1 = (ost1 * a1) % p1;
    }
    
    int rez = 60 - ost1;
    
    string strr =  to_string(rez);                  //60 - ost перевод в строку
    
    int m = strr.size();
    string mess = "1";
    for (int i = 0; i < n - m - 1; i++)
    {
        mess = mess + "0";                       //добавляем нули
    }
    mess = mess + strr;                         //добавляем 60-остаток
    
    //вывод последних 30 цифр числа
    n = mess.size();
    if (n > 30)
    {
        for (int i = n - 30; i < n; i++)
        {
            cout << mess[i] << " ";
        }
    }
    else
        cout << mess << endl;
    
    return 0;
}
