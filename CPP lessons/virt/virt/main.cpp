//
//  main.cpp
//  virt
//
//  Created by Александр Ноянов on 02/01/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

class Figure
{
    string name;
public:
    Figure(string _name) {
        name = _name;
        std::cout << "Figure()\n";
    }
    virtual ~Figure() {
        std::cout << "~Figure()\n";

    }
    virtual double square() const = 0;
    string getName() const { return name; }
};



class Triangle: public Figure
{
    int a;
    int b;
    int c;
public:
    Triangle(int _a,int _b,int _c) : Figure("Triangle")
    {
        a = _a;
        b = _b;
        c = _c;
    }
    virtual double square() const
    {
        double ro = (a+b+c)/2;
        return sqrt(ro*(ro-a)*(ro-b)*(ro-c));
    }
};

class Rect: public Figure
{
    double a,b;
public:
    Rect(double _a, double _b) : Figure("Rect")
    {
        a = _a;
        b = _b;
        std::cout << "Rect()\n";
    }
    ~Rect() {
        std::cout << "~Rect()\n";
    }
    virtual double square() const
    {
        return a*b;
    }
};

class Pryamo: public Rect
{
public:
    Pryamo(double _a) : Rect(_a, _a)
    {
        std::cout << "Pryamo()\n";
    }
    ~Pryamo() {
        std::cout << "~Pryamo()\n";
    }
};

class Circle: public Figure
{
    double radius;
public:
    Circle(double radius) : Figure("Circle")
    {
        this->radius = radius;
        std::cout << "Circle()\n";
    }
    ~Circle()
    {
        std::cout << "~Circle()\n";
    }
    
    virtual double square() const
    {
        return 3.141*radius*radius;
    }
};


void processArea(const Figure* f) {
//    const Circle* c = dynamic_cast<const Circle*>(f);
//    if(c != NULL)
//        std::cout << "circle area=" << c->square()*c->square() << "\n";
//    const Rect* r = dynamic_cast<const Rect*>(f);
//    if(r != NULL)
        std::cout << f->getName() << " area=" << f->square()*f->square() << "\n";
}


int main(int argc, const char * argv[]) {
    // insert code here...
    Circle* c = new Circle(10);
    processArea(c);
    delete c;
    
    Rect* r = new Rect(10,10);
    Pryamo* p = new Pryamo(5);
    processArea(r);
    processArea(p);
    //delete p;
    delete r;
    return 0;
}
