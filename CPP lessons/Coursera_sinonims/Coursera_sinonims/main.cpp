//
//  main.cpp
//  Coursera_sinonims
//
//  Created by Александр Ноянов on 12/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <set>
#include <string>
#include <map>
#include <vector>
using namespace std;

/*
 Два слова называются синонимами друг друга, если они имеют похожие значения. Реализуйте следующие операции над словарём синонимов:
 
 ADD word1 word2 — добавить в словарь пару синонимов (word1, word2).
 COUNT word — узнать количество синонимов слова word.
 CHECK word1 word2 — проверить, являются ли слова word1 и word2 синонимами.
 Слова word1 и word2 считаются синонимами, если среди запросов ADD был хотя бы один запрос ADD word1 word2 или ADD word2 word1.
 */
int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    string command;
    
    std::map<string, set<string> > sinonims;
    
    for(int i = 0; i < n; i++){
        cin >> command;
        
        if(command == "ADD") {
            string w1, w2;
            cin >> w1;
            cin >> w2;
            sinonims[w1].insert(w2);
            sinonims[w2].insert(w1);
//            if(sinonims.find(w2) != sinonims.end()) {
//                sinonims[w2].insert(w1);
//            } else
//                sinonims[w1].insert(w2);
        }
        
        if(command == "COUNT") {
            string w1;
            cin >> w1;
            if(sinonims.find(w1) != sinonims.end()) {
                std::cout << sinonims[w1].size() << endl;
            } else
                std::cout << "0\n";
//            int count = 0;
//            for(auto s : sinonims) {
//                if(s.first == w1 || s.second.find(w1) != s.second.end())
//                    count += s.second.size();
//            }
//            std::cout << count << endl;
        }
        
        if(command == "CHECK") {
            string w1, w2;
            cin >> w1;
            cin >> w2;
            
            bool exist = false;
            if(sinonims.find(w1) != sinonims.end()) {
                const std::set<string>& ss = sinonims[w1];
                if(ss.find(w2) != ss.end())
                    exist = true;
            }
            if(exist)
                std::cout << "YES" << endl;
            else
                std::cout << "NO" << endl;

//            bool exist = false;
//            for(auto s : sinonims) {
//                if(s.first == w1 && s.second.find(w2) != s.second.end())
//                    exist = true;
//                else if(s.first == w2 && s.second.find(w1) != s.second.end())
//                    exist = true;
//                //else if(s.second.find(w1) != s.second.end() && s.second.find(w2) != s.second.end())
//                //    exist = true;
//                if(exist)
//                    break;
//            }
//            if(exist)
//                std::cout << "YES" << endl;
//            else
//                std::cout << "NO" << endl;
          }
    }
    
    return 0;
}
