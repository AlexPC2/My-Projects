//
//  main.c
//  SumOfInArray
//
//  Created by Alex Noyanov on 10.03.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//


/*

 дан двумерный массив вещественных чисел.
 Найти количество чисел, равных среднему арифметическому своих соседей
 
 */

#include <stdio.h>

#define SIZEX 4
#define SIZEY 3

//float a[SIZEX][SIZEY];  // Массив
float srednee = 0;      // Среднее соседних элементов
int counter = 0;        // Количество элементов
int i,j;                // Счетчики цикла


/*
float a[SIZEY][SIZEX] = // Один элемент в центре
{
    {5,0,6,1},
    {0,0,0,1},
    {7,0,8,5},
    
};


float a[SIZEY][SIZEX] = // Один элемент в левом верхнем углу
{
    {0,0,6,1},
    {0,0,7,1},
    {7,6,8,5},
    
};



 float a[SIZEY][SIZEX] = // Два элемента, один в углу, другой внутри
 {
 {1,1,6,1},
 {1,1,1,1},
 {7,1,8,5},
 
 };
*/
 /*
 
float a[SIZEY][SIZEX] = // 12 элементов
{
    {1,1,1,1},
    {1,1,1,1},
    {1,1,1,1},
    
};

int main(int argc, const char * argv[]) {

    for(i = 0; i < SIZEY; i++){
        for(j = 0; j < SIZEX; j++){
            
            
            // Если элемент в левом верхнем углу:
            if(i == 0 && j ==0){
                srednee = (a[1][0] + a[0][1])/2;
            }else{
                
            // Если в левом нижнем углу:
                if(i == SIZEY-1 && j == 0){
                    srednee = (a[SIZEY-2][0] + a[SIZEY-1][1])/2;
                }
            }
            
            // Если другие углы:
            if(i == 0 && j == SIZEX-1){
                srednee = (a[0][SIZEX-2] + a[1][SIZEX-1])/2;
            }else{
                if(i == SIZEY-1 && j == SIZEX-1){
                    srednee = (a[SIZEY-1][SIZEX-2] + a[SIZEY-2][SIZEX-1])/2;
                }
            }
            
            // Если идет верхний ряд:
            if(i == 0 && j>0 && j< SIZEX-1 ){
                srednee = (a[i][j-1] + a[i][j+1] + a[i+1][j])/3;
            }
            
            // Если идет нижний ряд:
            if(i == SIZEY-1 && j>0 && j< SIZEX-1 ){
                srednee = (a[i][j-1] + a[i][j+1] + a[i-1][j])/3;
            }
            
           // Среднее внутри:
            if(i > 0 && j > 0 && i < SIZEY-1 && j < SIZEX-1){
                srednee = (a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1])/4;
            }
            
            // Теперь находим их количество:
            if(a[i][j] == srednee){
                counter++;
            }
        }
    }
    
    // Выводим количество чисел:
    printf("Количество чисел: %d\n",counter);
    
    return 0;
}
*/

#include <stdio.h>

int main(){
    
    int i;
    
    printf("Symbols: \n");
    
    for(i = 0; i < 128; i++)
    {
        //printf("%c", i);
        putchar(i);
        printf("\n");
    }
    
    return 0;
}







