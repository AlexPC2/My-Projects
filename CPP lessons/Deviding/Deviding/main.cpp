//
//  main.cpp
//  Deviding
//
//  Created by Alex Noyanov on 05.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 10 2    5
 3 5    0
 11 0    Impossible
 */

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a,b;
    cin >> a >> b;
    if(b == 0)
        cout << "Impossible";
    else
        cout << a/b;
    return 0;
}
