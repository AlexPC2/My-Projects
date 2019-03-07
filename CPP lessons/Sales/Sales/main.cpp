//
//  main.cpp
//  Sales
//
//  Created by Alex Noyanov on 05.03.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {

    int n;
    
    cin >> n;
    //int* chocolate = new int[n];
    
    vector<int> chocolate;
    //vector<int> CodeWords = *new vector<CodeWord>[numberOfWords];
    int value;
    for(int i = 0; i < n;i++)
    {
        cin >> value;
        chocolate.push_back(value);
    }
    
    int numOfCoupons = 0;
    
    //int* coupons = new int[numOfCoupons];
    
    cin >> numOfCoupons;
    
    vector<int> coupons ;
    
    
    for(int j = 0; j < numOfCoupons; j++)
    {
        cin >> value;
        coupons.push_back(value);
    }
    
    //chocolate.
    sort(chocolate.begin(), chocolate.end());
    sort(coupons.begin(), coupons.end());
    
    long long price = 0;
    for(auto x:chocolate)
    {
        price+=x;
    }
    
    long long priceLast = price;
    
    
    int index = n;
    
    for(int i = 0; i < numOfCoupons; i++)
    {
        price = priceLast;
        //couponePrice += coupons[index];
        //price = price - chocolate[coupons[i]];
        index = n - coupons[i];
        price = price - chocolate[index];
        cout << price << " ";
    }
    
    return 0;
}
