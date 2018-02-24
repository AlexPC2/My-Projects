//
//  main.c
//  Swap
//
//  Created by Alex Noyanov on 09.02.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

// Chapter 5
// Paragraph 5.2
// Pointers and function arguments

#include <stdio.h>

#define SIZE 128

// Функиця Swap()
void WrongSwap(int x, int y) /* НЕВЕРНО */
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void Swap(int *px,int *py)  /* ПРАВИЛЬНО */
{
    int temp;
    
    temp = *px;
    *px = *py;
    *py = temp;
}
        // Теперь мы меняем местами УКАЗАТЕЛИ


    // Эта функйия заполняет массив целыми числами, получеными с помощью getline
void getInt(){
    
    int n, array[SIZE], getint(int *);
    for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)  // Цикл добавляет к каждому элементу массива по его адресу значение       соответствуюзщего элемента, пока не дойдет до конца файла

        ;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    

}
