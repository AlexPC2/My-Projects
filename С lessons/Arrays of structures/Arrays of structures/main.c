//
//  main.c
//  Arrays of structures
//
//  Created by Alex Noyanov on 10.03.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

// Chapter 6 §3 Arrays of structures


// We need to save keywords in form of array of strings and counters
//  on array of counters

#define NKEYS 128

char *keyword[NKEYS];
int keycount[NKEYS];

// But here is some siple solution
// We can use structure for this:

char *word;
int count;

// This pairs contains an array
// Let's get it:

struct key1{
    char *word;
    int *count;
}  keytab1[NKEYS] ;

// This form declare array named keytab with type key

// Here is another form of this array:
struct key2{                             // Type
    char *word;
    int *count;
};

struct key2 keytab2[NKEYS];               // Array

// keytab array contains constant words what's why we can make it external
struct key3{
    char *word;
    int count;
} keytab3[] = {
     "auto", 0,
     "case", 0,
     "char", 0,
     "int" , 0,
    "define",0,
    "while", 0,
     "for" , 0,
};

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    
    return 0;
}
