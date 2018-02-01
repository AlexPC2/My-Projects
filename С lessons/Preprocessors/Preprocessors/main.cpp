//
//  main.cpp
//  Preprocessors
//
//  Created by Александр Ноянов on 01.02.18.
//  Copyright © 2018 ANLab. All rights reserved.
//

//  Commands with # called preprocessors operators

#include <iostream>
#include <ctype.h>



// #include<fileName> or #include"fileName"

// If #include with "" then file is in project directory
// If #include with <> then following files can be found in some other places


#define A 100 // This construction called macro substitution
// #define first second
// First emplemantion will be changed by second and can be used everywhere

#define max(A,B) ((A) > (B) ? (A):(B))

// Then x = max(p+q,r+s) will be replaced:
// x = ((p+q) > (r+s) ? (p+q):(r+s))

//  BUT:
//  max(i++,j++) is WRONG!

// For UNDEFINE some defined expression can be used #undef

#undef getchar
// int getchar (void){
// }


#undef dprint(expr) printf(#expr "= %g\n",expr)


#define paste(front,back) front ## back

// Exercise:

// This function can actually swap two values x and y with type t
#define swap(t,a,b) (t valueX = x; x = y; y = valueX)

//  === Сonditional compilation  ===
#if  !defined(HDR)
#define HDR
/*
 here can be resources from file hdr.h
 */
#endif


// This following instructons can detect what files not included here
#if SYSTEM == SYSV
    #define HDR "sysv.h"
#elif SYSTEM == BSD
    #define HDR "bsd.h"
#elif SYSTEM == MSDOS
    #define HDR "msdos.h"
#else
    #define HDR "default.h"
#endif
#include HDR


// Instructions #ifdef and #ifndef can check does some expressions defined/undefined
#ifndef HDR
#define HDR
/* here is file resource could be */
#endif


int main(int argc, const char * argv[]) {
  
    
    
}
