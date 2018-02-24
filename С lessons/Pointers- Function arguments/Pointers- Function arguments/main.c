//
//  main.c
//  Pointers- Function arguments
//
//  Created by Alex Noyanov on 09.02.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);

/* getint: читает следующее целое из вводы в *pn */
int getint( int *pn){
    
    int c,sign;
    
    while(isspace(c = getch()))
        ; /* Пропуск символов разделителей */
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
