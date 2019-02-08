//
//  main.cpp
//  Arrays
//
//  Created by Александр Ноянов on 02.03.18.
//  Copyright © 2018 ANLab. All rights reserved.
//

#include <iostream>

#define SIZE 12 // Array size

int a[SIZE] = {12,21,33,33,45,54,0,0,1,2,3,4};     // Array of integers

float b[SIZE] = {0.5,1,2,3,4,0.5,0.5,1,2,12,1,12};  // Array of floats

int SumOfNumbers(int a){
    
    int sum = 0;    // Sum of numbers
    
    while(a > 0)
    {
        sum = sum + a%10;
        a = a/10;
    }
    return sum;
}

int CountFloats( float *b){
    
    int counter = 0;    // Counter of numbers
    
    for (int i = 0; i < SIZE; i++){
        
    }
    int reverseFractiom =  0;   // Fraction part of numbers in reverse
    
    
    // Find fraction part of number:
    
    
    return counter;
}

// Find equal sum of numbers pairs:
void FindPairs(int *a)
{
    for(int i = 0; i < SIZE-1;i++)
    {
        if(SumOfNumbers(a[i]) == SumOfNumbers(a[i+1])){
          printf("%d\n",a[i]);
          printf("%d\n",a[i+1]);
        }
    }
}


int main(int argc, const char * argv[]) {
    
    FindPairs(a);
    
    
    return 0;
}
