//
//  main.cpp
//  Lesson3_Abstract_classes
//
//  Created by Александр Ноянов on 03/01/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>

using namespace std;

class button
{
    string name;
public:
    
};

class fileWriter
{
    FILE* file;
public:
    fileWriter(const char* fileName)
    {
        file = fopen(fileName, "wt");
    }
    
    ~fileWriter()
    {
        fclose(file);
    }
    
    void write(const char* data) const {
        fprintf(file,"%s\n",data);
    }

};

class myArray
{
    vector<int> array;
    mutable ofstream file;
public:
    myArray(const char* fileName)
    {
        file.open(fileName);
        array.assign(10, 0);
    }
private:
    myArray(const myArray& obj)
    {
//        array.assign(10, 0);
//        for(int i = 0; i < 10;i++)
//        {
//            array[i] = get(i);
//        }

        array = obj.array;
        //file = obj.file;
    }
//    myArray& operator=(const myArray& other) {
//        if(&other != this) {
//            for(int i = 0; i < 10;i++)
//            {
//                array[i] = other.get(i);
//            }
//        }
//        return *this;
//    }
public:
    ~myArray()
    {
        //delete array;
        file.close();
    }
    int get(int i) const
    {
        write("get i");
        if(i >= 0 && i < 10)
        {
            return array[i];
        }else{
            printf(" Конец массива!");
            return -1;
        }
    }
    
    void set(int i, int value)
    {
        write("set i");
        if(i >= 0 && i < 10)
        {
            array[i] = value;
        }else{
            printf(" Конец массива!");
            return;
        }
    }
private:
    void write(const char* data) const {
        file << data << "/n";
    }

};

 class Point
{
public:
    Point()
    {
        
    }
};

class figure2D
{
    
public:
    
};

int main(int argc, const char * argv[]) {
    myArray arr1("myData.txt");
   // myArray arr2 = arr1;
    
    for(int i = 0; i < 10; i++)
    {
        arr1.set(i, i);
    }
    //arr2 = arr1;
    arr2.set(0, 100);
    
    std::cout << arr1.get(0);
    
    
    
    return 0;
}
