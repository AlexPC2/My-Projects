//
//  main.cpp
//  Discr-9-Graph
//
//  Created by Александр Ноянов on 09/06/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>

using namespace std;

int getWeight(int i, int j, int n){
    return (n*(i*i+j*j) + i*i+j*j + i + j)%10;
}

int main(int argc, const char * argv[]) {
    cout << "   === Graph Weight Calculator ===" << endl;
    cout << "Input your variant:";
    int userN;
    cin >> userN;
    int k;
    cout << "Input size:";
    cin >> k;
    cout << endl;
    cout << "Weight w[i][j]:" << endl;
    
    for(int i = 0; i<=k;i++){
        for(int j = 0; j <= k;j++){
            cout << "w[" << i<< "]["<<j << "]=" << getWeight(i, j,userN) << " ";
        }
        cout << endl;
    }
    
    return 0;
}
