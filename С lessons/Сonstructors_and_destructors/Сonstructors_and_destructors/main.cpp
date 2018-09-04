//
//  main.cpp
//  Сonstructors_and_destructors
//
//  Created by Alex Noyanov on 25.08.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

using namespace std;

class myclass{
private:
    int a;
public:
    myclass();     // Конструктор
    ~myclass();
    void show();
};

myclass::myclass()
{
    cout << " В конструкторе\n";
    a = 10;
}

void myclass::show()
{
    cout << a;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    myclass b,c;
    
    b.show();
    c.show();
    
    return 0;
}

