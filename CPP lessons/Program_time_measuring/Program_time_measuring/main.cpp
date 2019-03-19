//
//  main.cpp
//  Program_time_measuring
//
//  Created by Alex Noyanov on 19.03.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <math.h>
#include "vector"

using namespace std;

void sinPlusCos(int n, float& k)
{
    for(int i=0; i < n; i++)
    {
      k   = sin(i) + cos(i);
    }
}

void creatingVector(int n)
{
    //#pragma omp parallel for
    for(int i = 0; i < n; i++)
    {
        vector<int> myVector;
        myVector.push_back(i);
    }

}

void simple(int n, float *a, float *b)
 {
     int i;
     #pragma omp parallel for
         for (i=1; i<n; i++) /* i is private by default */
             b[i] = (a[i] + a[i-1]) / 2.0;
             }


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
//    clock_t start = clock();
//    int res = 0;
//    float timeLimit = 1;            // Ограничение времени
//
//    float value;
//
//    long NumberOfOperations = 0;
//
//    // Измеряем, сколько операций можно проделать за это время:
//    while (1) {
//        ///< код тут>
//
//        //                       ==== Выполняемый код: ====
//        cout << "Hello, world!"<< endl;
//
//        sinPlusCos(100000,value);
//
//        NumberOfOperations++;
//
//        // Если время вышло
//        if (float( clock () - start ) /  CLOCKS_PER_SEC > timeLimit)
//        {
//            cout << " Numbers of operations: "<< NumberOfOperations << endl;
//            cin >> value;
//            return res;
//        }
//    }
    
    // Измеряем время выполнениея кода:
    float value;
    

   // for (int i = 0; i < n; i++)
   //     a[i] = 2 * i;
    
    clock_t start_clock = clock();
    // ==== Код, который выполняется: ====
   
    //sinPlusCos(10000000, value);
    
    creatingVector(10000000);
    
    //simple(100000, &value, &value);
    
    cout << "Working time : " << float( clock () - start_clock ) /  CLOCKS_PER_SEC << " Seconds" <<endl;
    cin >> value;
    return 0;
}
