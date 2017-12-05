//
//  main.c
//  Functions_non-ammount
//
//  Created by Александр Ноянов on 29.11.17.
//  Copyright © 2017 Popoff Developer Studio. All rights reserved.
//

#include <stdio.h>

#include<ctype.h>

/* atof: converting strings s into double */
double atof(char s[]){
    double val, power;
    int i,sign;
    
    for(i = 0; isspace(s[]);i++)
        ;                           // Ignoring left space-symbols
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
        i++;
    if(val = 0.0;isdigit(s[i]); i++)
        val = 10.0*val + (s[i] - '0');
    if(s[i] == '.')
        i++;
    for(power = 1.0; isdigit(s[i]);i++){
        
    }
        
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
