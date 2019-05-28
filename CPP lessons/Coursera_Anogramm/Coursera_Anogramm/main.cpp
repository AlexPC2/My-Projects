//
//  main.cpp
//  Coursera_Anogramm
//
//  Created by Alex Noyanov on 12.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <map>
/*
 Слова называются анаграммами друг друга, если одно из них можно получить перестановкой букв в другом. Например, слово «eat» можно получить перестановкой букв слова «tea», поэтому эти слова являются анаграммами друг друга. Даны пары слов, проверьте для каждой из них, являются ли слова этой пары анаграммами друг друга.
 
 Указание
 
 Один из способов проверки того, являются ли слова анаграммами друг друга, заключается в следующем. Для каждого слова с помощью словаря подсчитаем, сколько раз в нём встречается каждая буква. Если для обоих слов эти словари равны (а это проверяется с помощью обычного оператора ==), то слова являются анаграммами друг друга, в противном случае не являются.
 
 При этом построение такого словаря по слову удобно вынести в отдельную функцию BuildCharCounters.
 
 Формат ввода
 
 Сначала дано число пар слов N, затем в N строках содержатся пары слов, которые необходимо проверить. Гарантируется, что все слова состоят лишь из строчных латинских букв.
 
 Формат вывода
 
 Выведите N строк: для каждой введённой пары слов YES, если эти слова являются анаграммами, и NO в противном случае.
 */

using namespace std;

//void BuildCharCounters

map<char,int> BuildCharCounters(string str){
    map<char,int> resMap;
    int n = 0;
    
    for(int i = 0; i < str.size();i++){
        for(auto ch:str){
            if(ch == str[i]){
                n++;
            }
        }
        resMap.insert(pair<char, int>(str[i],n));
        n = 0;
    }
    return resMap;
}
int main(int argc, const char * argv[]) {
  
    string w1,w2;
    
    int k;
    cin >> k;
    for(int j = 0; j <k;j++){
    cin >> w1;
    cin >> w2;
    
    map<char,int> letters1,letters2;
    
    letters1 = BuildCharCounters(w1);
    letters2 = BuildCharCounters(w2);
    
    if(w1.size() != w2.size()){
        cout << "NO" << endl;
    }else{
        if(letters1 == letters2){
            cout << "YES"<<endl;
        }else{
            cout << "NO"<< endl;
        }
    }
    }
    return 0;
}
