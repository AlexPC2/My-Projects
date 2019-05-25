//
//  main.cpp
//  Coursera_streams_precision
//
//  Created by Александр Ноянов on 24/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {

    ifstream input("input.txt");
    cout << fixed << setprecision(3);
    double value;
    
    while(input >> value){
        cout << value << endl;
    }
    
    return 0;
}
