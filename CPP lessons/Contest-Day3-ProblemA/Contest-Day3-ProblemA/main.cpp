//
//  main.cpp
//  Contest-Day3-ProblemA
//
//  Created by Alex Noyanov on 12.03.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

// dp[i] = min(dp[j] + bj * ai)

/*
 
 Source :CF problem 319C
 Kalila and Dimna in the Logging Industry
 
 Kalila и Dimna рубят деревья. Каждый раз они могут срезать длину дерева на 1.
 После этого им нужно заряжать пилу. Стоимость зарядки выбирается по самому высокому дереву.
 Найти минимальную стоимость спила всех деревьех.
 
 Вход:
  n (Количество деревьев)
 1 a2 a3 ... an (Высоты деревьев)
 b1 b2 b3 ... 0 (Цена зарядки пилы)
 
 Выход:
 - Минимальная стоимость спила всех деревьев
 
 */

#include <iostream>

typedef int valueType;

using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    cin >> n;
    valueType *a = new valueType[n];
    valueType *b = new valueType[n];
    
   // valueType *dp = new valueType[n];
    
    // Input trees highth:
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Input chainsaw reload price:
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    // Trying to find the minimum price:
    // dp[i] = min(dp[j] + bj * ai)
    
    /*
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // ....
        }
    }
    */
    
    // Free the memory:
    delete[] a;
    delete[] b;
    //delete[] dp;
    
    return 0;
}
