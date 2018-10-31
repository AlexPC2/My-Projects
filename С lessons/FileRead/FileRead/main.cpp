//
//  main.cpp
//  FileRead
//
//  Created by Alex Noyanov on 26.07.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

using namespace std;

//   Data after MR025
struct dataMR{
    int time;
    float f4,;
};

int main(int argc, const char * argv[]) {
  
    
    // Open the file:
    FILE* fin = fopen("T2_1.jps","rb");
    
    char symbol = '0';
    
    // "MR025"
    char word[5] = {'M','R','0','2','5'};
    int i = 0;
    bool isWord = true;
    
    
    
    // Find "MR025"
    while(symbol != EOF){
        symbol = fgetc(fin);
        if(symbol == word[0])           // Find first of "MR025"
        {
            for(i = 1; i< 5; i++)       // Trying to find other parts of this word
            {
                symbol = fgetc(fin);    // Get symbol
                if(symbol != word[i])   // If this symbol is not a part of this word
                    isWord = false;      // Then isWord gets false
            }
            if(isWord == true)           // If "MR025" is found
            {
                
            }
        }
    }
    
    
    
    return 0;
}
