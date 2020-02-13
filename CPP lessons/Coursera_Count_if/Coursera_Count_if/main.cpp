//
//  main.cpp
//  Coursera_Count_if
//
//  Created by Alex Noyanov on 14.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void PrintIf(const vector<int> numbers,int k){
    cout << count(begin(numbers), end(numbers), k) << endl;
}

int main(int argc, const char * argv[]) {
    vector<int>num = {1,2,3,4,5,2,2,3,3,3,2};
    int thr;
    cin >> thr;
    //PrintIf(num,2);
    //cout << count(begin(num), end(num), 2 ) << endl;
    // Lambda-expression in C++
    // function(<parameters>,[values to use here] (parameters){
    // { < The body of the function > })
    
    cout << "There are " << count_if(begin(num), end(num), [thr](int x){
        if(x>thr){
            return true;
        }
        return false;
            }) << " elements higher then "<< thr << endl;
    
    return 0;
}
