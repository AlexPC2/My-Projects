//
//  main.cpp
//  glava3
//
//  Created by Alex Noyanov on 16.09.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

#include <iostream>


class BaseObject
{
protected:
    int color;
public:
    BaseObject() {
        std::cout << "BaseObject::BaseObject" << std::endl;
    }
    ~BaseObject() {
        std::cout << "BaseObject::~BaseObject" << std::endl;
    }
};

class BaseObject2
{
protected:
    int color;
public:
    BaseObject2() {
        std::cout << "BaseObject2::BaseObject2" << std::endl;
    }
    ~BaseObject2() {
        std::cout << "BaseObject2::~BaseObject2" << std::endl;
    }
};

class DerivedObject : public BaseObject, public BaseObject2
{
public:
    DerivedObject() {
        std::cout << "DerivedObject::DerivedObject" << std::endl;
        BaseObject::color = 3;
        BaseObject2::color = 5;
    }
    ~DerivedObject() {
        std::cout << "DerivedObject::~DerivedObject" << std::endl;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    DerivedObject deo;
    std::cout << "Hello, World!\n";
    return 0;
}
