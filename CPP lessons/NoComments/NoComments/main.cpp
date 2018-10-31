//
//  main.cpp
//  NoComments
//
//  Created by Александр Ноянов on 14.09.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <fstream>


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    //FILE* fin = fopen("code.txt","rt");
    //FILE* fout = fopen("code_no_comments.txt","w");
    
    ifstream fin;
    
    fin.open("code.txt");
    
    string text;
    
    if(!fin){
        cout << "Can't open input file!" << endl;
        return 1;
    }
    
    while(fin >> text ){
        cout << text;
    }
    
    char s;
    /*
    while(s = fgetc(fin)!=EOF){
        fputs(&s, fout);
    }
    */
    fin.close();
    
    
    //fclose(fin);
    //fclose(fout);
    
    return 0;
}
