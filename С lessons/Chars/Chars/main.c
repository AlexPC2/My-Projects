//
//  main.c
//  Chars
//
//  Created by Alex Noyanov on 28.11.17.
//  Copyright © 2017 Popoff Developer Studio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    int i;
    
    printf("Chars:\n");
    for(i = 33;i < 128;i++){
        putchar(i);
        printf("   %d \n",i);
    }
    return 0;
}
