//
//  move_strings.cpp
//  Coursera_moving_strings
//
//  Created by Alex Noyanov on 10.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
//
//void MoveStrings(vector<string>& source, vector<string>& destination){
//    for(auto s:source){
//        destination.push_back(s);
//    }
//    source.clear();
//}


//void Reverse(vector<int>& v){
//    vector<int> reversed;
//    for(int i = v.end(); i > 0; i--){
//        reversed.push_back(v[i]);
//    }
//    v.clear();
//    v = reversed;
//}

//void Reverse(vector<int>& v){
//    int n = 0;
//    for(auto x: v){
//        n++;
//    }
//    int* reversed = new int[n];
//    for(int i = 0; i<n;i++){
//        reversed[n-i] = v[i];
//    }
//    v.clear();
//    for(int i = 0; i<n;i++){
//        v.push_back(reversed[i]);
//    }
//    
//}
vector<int> Reversed(const vector<int>& v){
    int n = 0;
    for(auto x: v){
        n++;
    }
    int* reversed = new int[n];
    for(int i = 0; i<n;i++){
        reversed[n-i-1] = v[i];
    }
   // v.clear();
    vector<int> result;
    for(int i = 0; i<n;i++){
        result.push_back(reversed[i]);
    }
    return result;
}
