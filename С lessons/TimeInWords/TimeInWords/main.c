//
//  main.c
//  TimeInWords
//
//  Created by Александр Ноянов on 27/02/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//


#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the timeInWords function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//

// One string plus another:
char* concat( char *s1,  char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator
    // in real code you would check for errors in malloc here
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

// To get string from the hours:
char* number(int x)
{
    char* res;
    if(x <= 13 )
    {
        switch (x) {
            case 0:
                res = "";
            case 1:
                res = "one";
                break;
            case 2:
                res = "two";
                break;
            case 3:
                res = "three";
                break;
            case 4:
                res = "four";
                break;
            case 5:
                res = "five";
                break;
            case 6:
                res = "six";
                break;
            case 7:
                res = "seven";
                break;
            case 8:
                res = "eight";
                break;
            case 9:
                res = "nine";
                break;
            case 10:
                res = "ten";
                break;
            case 11:
                res = "eleven";
                break;
            case 12:
                res = "twelve";
                break;
            case 13:
                res = concat("thir","teen");
                break;
            default:
                break;
        }
    }else{
        if(x < 20)
        {
            if(x == 15)
            {
                res = "quarter";
                return res;
            }else{
                res = concat(number(x - 10), "teen");
            }
        }else{
            if(x <= 30){
                res = concat("twenty ", number(x-20));
                if(x == 30)
                    res = "half";
            }
        }
        // 30 < x <= 59
        res = number(60-x);
        
    }
    
    
    return res;
}


char* timeInWords(int h, int m) {
    
    char* resStr;                   // Result string
    if(m == 0)
    {
        char* hour = number(h);
        resStr = concat(hour," o' clock");
    }else{
        if(m > 0 && m <=30)
        {
            if(m == 15)
            {
                resStr = concat(number(m), " past ");
            }else{
                resStr = concat(number(m), " minute past ");
            }
            resStr = concat(resStr,number(h));
            
        }else{
            // 30 < x <= 59
            
            resStr = concat(number(m), " minutes to ");
            resStr = concat(resStr,number(h+1));
        }
    }
    
    return resStr;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
    
    char* h_endptr;
    char* h_str = readline();
    int h = strtol(h_str, &h_endptr, 10);
    
    if (h_endptr == h_str || *h_endptr != '\0') { exit(EXIT_FAILURE); }
    
    char* m_endptr;
    char* m_str = readline();
    int m = strtol(m_str, &m_endptr, 10);
    
    if (m_endptr == m_str || *m_endptr != '\0') { exit(EXIT_FAILURE); }
    
    char* result = timeInWords(h, m);
    
    fprintf(fptr, "%s\n", result);
    
    fclose(fptr);
    
    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);
    
    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        
        if (!line) { break; }
        
        data_length += strlen(cursor);
        
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }
        
        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);
        
        if (!data) { break; }
        
        alloc_length = new_length;
    }
    
    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }
    
    data = realloc(data, data_length);
    
    return data;
}

/*
 
 #include <assert.h>
 #include <limits.h>
 #include <math.h>
 #include <stdbool.h>
 #include <stddef.h>
 #include <stdint.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 char* readline();
 
 // Complete the timeInWords function below.
 
 // Please either make the string static or allocate on the heap. For example,
 // static char str[] = "hello world";
 // return str;
 //
 // OR
 //
 // char* str = "hello world";
 // return str;
 //
 
 // One string plus another:
 char* concat( char *s1,  char *s2)
 {
 char *result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator
 // in real code you would check for errors in malloc here
 strcpy(result, s1);
 strcat(result, s2);
 return result;
 }
 
 // To get string from the hours:
 char* number(int x)
 {
 char* res;
 if(x <= 13 )
 {
 switch (x) {
 case 0:
 res = "";
 case 1:
 res = "one";
 break;
 case 2:
 res = "two";
 break;
 case 3:
 res = "three";
 break;
 case 4:
 res = "four";
 break;
 case 5:
 res = "five";
 break;
 case 6:
 res = "six";
 break;
 case 7:
 res = "seven";
 break;
 case 8:
 res = "eight";
 break;
 case 9:
 res = "nine";
 break;
 case 10:
 res = "ten";
 break;
 case 11:
 res = "eleven";
 break;
 case 12:
 res = "twelve";
 break;
 case 13:
 res = concat("thir","teen");
 break;
 default:
 break;
 }
 }else{
 if(x <= 20)
 {
 if(x == 20)
 {
 res = "twenty";
 return res;
 }
 
 if(x == 15)
 {
 res = "quarter";
 return res;
 }else{
 res = concat(number(x - 10), "teen");
 }
 }else{
 if(x <= 30){
 res = concat("twenty ", number(x-20));
 if(x == 30)
 res = "half";
 return res;
 }
 }
 // 30 < x <= 59
 res = number(60-x);
 }
 
 
 return res;
 }
 
 
 char* timeInWords(int h, int m) {
 
 char* resStr;                   // Result string
 if(m == 0)
 {
 char* hour = number(h);
 resStr = concat(hour," o' clock");
 }else{
 if(m > 0 && m <=30)
 {
 if(m == 15 || m == 30)
 {
 resStr = concat(number(m), " past ");
 }else{
 if(m < 3)
 {
 resStr = concat(number(m), " minute past ");
 }else{
 resStr = concat(number(m), " minutes past ");
 }
 }
 resStr = concat(resStr,number(h));
 
 }else{
 // 30 < x <= 59
 if(60 - m < 3)
 {
 resStr = concat(number(m), " minute to ");
 }else{
 resStr = concat(number(m), " minutes to ");
 }
 if(h == 12)
 resStr = concat(resStr,number(1));
 else{
 resStr = concat(resStr,number(h+1));
 }
 }
 }
 
 return resStr;
 }
 
 int main()
 {
 FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
 
 char* h_endptr;
 char* h_str = readline();
 int h = strtol(h_str, &h_endptr, 10);
 
 if (h_endptr == h_str || *h_endptr != '\0') { exit(EXIT_FAILURE); }
 
 char* m_endptr;
 char* m_str = readline();
 int m = strtol(m_str, &m_endptr, 10);
 
 if (m_endptr == m_str || *m_endptr != '\0') { exit(EXIT_FAILURE); }
 
 char* result = timeInWords(h, m);
 
 fprintf(fptr, "%s\n", result);
 
 fclose(fptr);
 
 return 0;
 }
 
 char* readline() {
 size_t alloc_length = 1024;
 size_t data_length = 0;
 char* data = malloc(alloc_length);
 
 while (true) {
 char* cursor = data + data_length;
 char* line = fgets(cursor, alloc_length - data_length, stdin);
 
 if (!line) { break; }
 
 data_length += strlen(cursor);
 
 if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }
 
 size_t new_length = alloc_length << 1;
 data = realloc(data, new_length);
 
 if (!data) { break; }
 
 alloc_length = new_length;
 }
 
 if (data[data_length - 1] == '\n') {
 data[data_length - 1] = '\0';
 }
 
 data = realloc(data, data_length);
 
 return data;
 }
 */


