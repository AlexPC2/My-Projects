//
//  main.cpp
//  Coursera_binary_numbers
//
//  Created by Alex Noyanov on 05.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {

    int a;
    vector<int>binA;
    cin >> a;
    int bitA,divA;
    divA = a;
    while(divA >= 1)
    {
        bitA = divA%2;
        divA = divA/2;
        binA.push_back(bitA);
    }
    //binA.push_back(divA%2);
    
    //copy(binA.rbegin(), binA.rend(), ostream_iterator<int>(stdcout, ""));
    for(auto x = binA.crbegin() ; x!=binA.crend() ; x++){
        cout<<*x;
    }
//    for(auto x: binA)
//   {
//      // s = x;
//      // revBit = revBit + s;
//       cout << x;
//   }
//
//   // cout << revBit << endl;
    return 0;
}
