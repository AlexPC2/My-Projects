//
//  main.cpp
//  Coursera_Exception
//
//  Created by Александр Ноянов on 26/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void EnsureEqual(const string& left, const string& right){
    if(right!=left){
        string exceptionMessage = left+" != "+right;
        throw runtime_error(exceptionMessage);
    }
}

int main() {
    try {
        EnsureEqual("C++ White", "C++ White");
        EnsureEqual("C++ White", "C++ Yellow");
    } catch (runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
