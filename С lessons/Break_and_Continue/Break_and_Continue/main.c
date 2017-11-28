//
//  main.c
//  Break_and_Continue
//
//  Created by Alex Noyanov on 28.11.17.
//  Copyright © 2017 Popoff Developer Studio. All rights reserved.
//

#include <stdio.h>


// trim: Deleting completing spaces, tabs and new strings

int trim(char s[]){
    int n;
    
    for(n = strlen(s)-1; n >= 0; n--)
        if(s[n] != ' ' && s[n] != '\t' && s[n] != '\n' )
            break;
    
    s[n+1] = '\0';
    
    return n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
   // int s[128];
    char str[128];
    int i = 0;
    
    
    // get chars:
    
    while( str[i] != '0'){
        gets(&str[i]);
        i++;
    }
    
    trim(str);
    
    /*
    while((s[i] = getchar()) != 'x'){
        i++;
        str[i] = s[i];
        
    }
    
    */
    
    return 0;
}
