//
//  vector.h
//  Pointers- Dynamic memory usage
//
//  Created by Александр Ноянов on 18.02.18.
//  Copyright © 2018 ANLab. All rights reserved.
//

#ifndef vector_h
#define vector_h


namespace noyanov
{

class vector
{
    double* p;  // указатель на double
    int size;   // размер выделенного массива
    int count;  // сколько элементов массива занято

public:
    vector()  // создать массив размером 100
    {
        size = 100;
        p = new double[size];
        count = 0;
    }
    
    ~vector()  // удалить массив
    {
        delete[] p;
        p = NULL;
        size = 0;
        count = 0;
    }
    
    void push_back(double v)    //
    {
        if(count >= size) {
            int size2 = size*2;
            double* pp = new double(size2);
            for(int i = 0; i < count; i++) {
                pp[i] = p[i];
            }
            p = pp;
            size = size2;
        }
        p[count++] = v;
    }
    
    double get(int index)       // получить значение в массиве
    {
        //    if(index < 0 || index >= count)
        //        return
        return p[index];
    }
    
    int getCount()
    {
        return count;
    }

};
    
}

#endif /* vector_h */
