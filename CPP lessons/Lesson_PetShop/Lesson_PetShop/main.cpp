//
//  main.cpp
//  Lesson_PetShop
//
//  Created by Alex Noyanov on 03.01.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <list>

using namespace std;

class Record
{
protected:
    string name;
public:
    Record(string _name)
    {
        name = _name;
        std::cout << "Record::Record(name, price)\n";
    }
    Record() {
        std::cout << "Record::Record()\n";
    }
    virtual ~Record() {
        std::cout << "Record::~Record()\n";
    }
};

class Animal : public Record
{
    string animalType;
public:
    Animal(string nme,string tpe)
    {
        name = nme;
        animalType = tpe;
        //price = pce;
        std::cout << "Animal::Animal(name, type, price)\n";
    }
    ~Animal() {
        std::cout << "Animal::~Animal()\n";
    }
};

class Fish : public Record
{
public:
    Fish() {
        std::cout << "Fish::Fish()\n";
    }
    ~Fish() {
        std::cout << "Fish::~Fish()\n";
    }
};

class SeaFish : public Fish
{
    SeaFish() {
        std::cout << "SeaFish::SeaFish()\n";
    }
    ~SeaFish() {
        std::cout << "SeaFish::~SeaFish()\n";
    }
};

class RiverFish : public Fish
{
    RiverFish() {
        std::cout << "RiverFish::RiverFish()\n";
    }
    ~RiverFish() {
        std::cout << "RiverFish::~RiverFish()\n";
    }
};

class Plant : public Record
{
public:
    Plant() {
        std::cout << "SeaFish::SeaFish()\n";
    }
    ~Plant() {
        std::cout << "SeaFish::~SeaFish()\n";
    }
};

class GardenPlant : public Plant
{
public:
    GardenPlant() {
        std::cout << "GardenPlant::GardenPlant()\n";
    }
    ~GardenPlant() {
        std::cout << "GardenPlant::~GardenPlant()\n";
    }
};

class Sukkulent: public Plant
{
public:
    Sukkulent();
};


class PetShop
{
    list<Record*> PetShop_Inventory;
public:
    PetShop() {
        
    }
    ~PetShop() {
        for(auto i = PetShop_Inventory.begin(); i != PetShop_Inventory.end(); i++) {
            Record* r = *i;
            delete r;
        }
    }
    
    void add(Record* r)
    {
        PetShop_Inventory.push_back(r);
    }
    
    int calculatePrice()
    {
        int price = 0;
        for(auto i = PetShop_Inventory.begin(); i != PetShop_Inventory.end();i++)
        {
            Record* r =  *i;
            string str = typeid(r).name();
            char ch = str[0];
            switch(ch)
            {
                case('A'):
                {
                    price + 100;
                }
                    case ('F'):
                {
                    price + 200;
                }
                    case('G'):
                {
                    price + 150;
                }
                    case('S'):
                {
                    price + 50;
                }
            }
        }
        return price;
    }
    
};


int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    PetShop ps;
    ps.add(new Fish());
    ps.add(new Plant());
    return 0;
}
