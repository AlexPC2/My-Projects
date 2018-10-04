//
//  main.cpp
//  Speech generator
//
//  Created by Александр Ноянов on 07.09.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include <iostream>


class sentence{
    int tpe;        // Type of the sentence
    
public:
    void generateWord(FILE);
    
};

int main(int argc, const char * argv[])
{
    // Open files:
    FILE* hiFrases = fopen("Hi.txt","rt");              // Hello frases
    FILE* secondWord = fopen("secondWord.txt","rt");    // After "Hello"
    FILE* questions = fopen("Questions.txt","rt");      // Questions for speech
    
    FILE* speech = fopen("speech.txt","w");             // Resulting speech made of random sentences
    
    //generateWord(hiFrases,3,speech);
    //generateWord(secondWord,3,speech);
    
    // Close all files:
    fclose(hiFrases);
    fclose(secondWord);
    fclose(questions);
    fclose(speech);
    
    return 0;
}
