//
//  main.cpp
//  Coursera_numbers
//
//  Created by Alex Noyanov on 05.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int a,b;
    cin >> a >> b;
    for(int i = a; i <=b; i++){
        if(i%2 == 0)
            cout << i << endl;
    }
    
    return 0;
}
