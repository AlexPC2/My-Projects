//
//  main.c
//  Pointers_and_arrays-begin
//
//  Created by Alex Noyanov on 09.02.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

//  Chapter 5
//  Paragraph 5.1


//  & - This operand can give you adress
//  * - And this operator is reported acess

//  For example:    p = &c;
//  p - is a c adress


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //
    int x = 1, y = 2, z[10];
    int *ip;    // Указатель на int
    
    ip = &x;    // Теперь ip указывает на х
    y = *ip;    // у Теперь равен 1
    *ip = 0;    // х Теперь равен нулю
    ip = &z[0]; // ip теперь указывает на z
    
    *ip = *ip + 10; // Увеличим ip на 10
    y = *ip + 1;    // Унарные операторы * и & имеют более высокий приоритет
    // Так что сначала берется то, на что указывает ip, а затем уже идет сложение и присваивание
    
    // Аналогично:
    *ip = 1;    // Увеличивает значение, на которое указывает ip на единицу
    
    ++*ip;
    
    (*ip)++;    // Если скобок не будет, то увеличится сам указатель, а не значение, на которое он указывает
}
