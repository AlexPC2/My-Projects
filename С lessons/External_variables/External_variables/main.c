//
//  main.c
//  External_variables
//
//  Created by Alex Noyanov on 05.12.17.
//  Copyright © 2017 Popoff Developer Studio. All rights reserved.
//

//

#include <stdio.h>
#include <stdlib.h> // For atof()

/*
#define (can be as mch as we want)
 
 void push(double f) {...}
 
 double pop(void) {...}
 
 int getpop(char s[]) {...}
 
*/

#define MAXOP 100   // Maximum operand size
#define NUMBER '0'  // Number


int getop(char[]);
void push(double);
double pop(void);

int main(int argc, const char * argv[]) {
    // insert code here...

    int type;
    double op2;
    char s[MAXOP];
    
    while ((type = getop(s)) != EOF) {
        
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
                
            case '+':
                push(pop() + pop());
                break;
            
            case '*':
                push(pop() * pop());
                break;
                
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            
            case '/':
                op2 = pop();
                if(op2 != 0.0)
                  push(pop() / op2);
                else
                    printf("Error: Can't on zero");
                break;
                
            case '\n':
                printf("\t%.8g\n",pop());
                break;
                
            default:
                printf("Unknown operation!");
                break;
        }
    }
    
    return 0;
}
