//
//  frases.cpp
//  Speech generator
//
//  Created by Александр Ноянов on 07.09.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include "frases.hpp"

// Frases to make speech more interesting
// The 7th of September 2018

// This program can randomly generate some sentencis

// Speech modeling in 3 steps:
//  1) Choose speech type
//  2) Choose sentence type
//  3) Choose sentence case and generate it randomly

#include <stdio.h>          // C standart
#include <string.h>         // For C++ string
#include <stdlib.h>
#include <time.h>
#include <iostream.h>       // For C++ cin >> and cout <<
#include <fstream>          // For C++ files

#define WORDSIZE 64           // Size of one word

using namespace std;

// Sentences model:

// 1) Improducing sentence:
// <First improducing words> -> <Second words>

// All words for sentences are situated in the following folders

// Generating random number:
/*
int random_number(int min_num, int max_num)
{
    int result = 0, low_num = 0, hi_num = 0;
    
    if (min_num < max_num)
    {
        low_num = min_num;
        hi_num = max_num + 1; // include max_num in output
    } else {
        low_num = max_num + 1; // include max_num in output
        hi_num = min_num;
    }
    
    srand(time(NULL));
    result = (rand() % (hi_num - low_num)) + low_num;
    return result;
}



//  ==  Generate word function: ==

//               file with words,how many words in file, output file
void generateWord(FILE* inWords, int n, FILE* speechFile){
    char *word = new char[WORDSIZE]; // Word buffer
    int i;
    int randomWord = 0;
    
    //Create sentence
    randomWord = random_number(1,3);               // Generate random word from "Hi" file
    
    // Now first word of this sentence should be one of this:
    for(i = 0; i < randomWord;i++){
        fgets(word,64,inWords);                     // Skip all words before the word we need
    }
    
    puts(word);                                     // Print this random word to the screen
    
    fputs(word,speechFile);                         // Print first word in the file
    
    memset(word,0,WORDSIZE*(sizeof (word[0])) );   // Clear the word array
}
*/
