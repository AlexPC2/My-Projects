//
//  main.cpp
//  Coursera_PalindromFilter
//
//  Created by Alex Noyanov on 08.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 Напишите функцию, которая
 называется PalindromFilter
 возвращает vector<string>
 принимает vector<string> words и int minLength и возвращает все строки из вектора words,
 которые являются палиндромами и имеют длину не меньше minLength
 Входной вектор содержит не более 100 строк, длина каждой строки не больше 100 символов.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsPalindrom(string str){
    bool result = true;
    for(int i = 0; i < str.length()/2;i++){
        if(str[i] != str[str.length() - i - 1]){
            result = false;
            break;
        }
    }
    
    return result;
}

vector<string> PalindromFilter(vector<string> polindroms, int minLength)
{
    vector<string> result;
    
    for(auto x:polindroms)
    {
        if(x.length() >= minLength)
        {
            if(IsPalindrom(x))
                result.push_back(x);
        }
    }
    
    return result;
}

int main(int argc, const char * argv[]) {

    string word,word2;
    cin >> word;
    int mLength;
   // cin >> mLength;
    //string word = "";
    vector<string> words;
    word2 = word.substr(0, word.size()-1);
    words.push_back(word2);
    //if(word[word.length()] == ','){
    while(word[word.length()-1] == ',')
    {
        cin >> word;
        if(word[word.size()] == ',')
            word = word.substr(0, word.size()-1);
        words.push_back(word);
    }
    
    cin >> mLength;
//    for(int i = 0; i < inputStr.length();i++){
//        if(inputStr[i] == ','){
//            words.push_back(word);
//            word = "";
//        }else{
//            word+=inputStr[i];
//        }
//    }
    //cout << words[0] << endl;
    vector<string> resultWords = PalindromFilter(words, mLength);
    
    for(auto w: resultWords){
        cout << w ;
        if (w != resultWords.back())
            cout << ", ";
    }
    //}else{
        
    //}
    
    return 0;
}
