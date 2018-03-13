//
//  main.c
//  Pointers to structures
//
//  Created by Александр Ноянов on 13.03.18.
//  Copyright © 2018 ANLab. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100
#define NKEYS 128


// Structure named key:
struct key{
    char *word;
    int count;
};

// Arrays of structures:
struct key keytab[NKEYS];

int getword(char *, int);
struct key *binsearch(char *, struct key *, int);

/* Counting special words with pointers to structures:*/
int main(int argc, const char * argv[]) {
    // insert code here...
    
    char word[MAXWORD];
    struct key *p;
    
    while(getword(word,MAXWORD) != EOF)
        if(isalpha(word[0]))
            if((p = binsearch(word,keytab,NKEYS)) != NULL)
                p -> count++;
    for(p = keytab; p < keytab; p++)
        if(p->count > 0)
            printf("%4d %s\n", p->count,p->word);
    
    return 0;
}
