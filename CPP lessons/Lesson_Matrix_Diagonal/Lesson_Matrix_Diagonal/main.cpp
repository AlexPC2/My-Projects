//
//  main.cpp
//  Lesson_Matrix_Diagonal
//
//  Created by Александр Ноянов on 08/01/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
    int* matrix;
    int r,c;
    
public:
    Matrix(int rows,int columns)
    {
        matrix = new int[rows*columns];
        r = rows;
        c = columns;
    }
    
    ~Matrix()
    {
        delete matrix;
    }
    
    int get(int row,int column) const
    {
        if (row < r && column < c)
            return matrix[r*row + column];
        else
        {
            cout << "ERROR! Incorrect matix iteration!";
            return -1;
        }
    }
    void set(int row,int column, int value)
    {
        if (row < r && column < c)
            matrix[r*row+column] = value;
        else
            cout << "ERROR! Incorrect matix iteration!";
    }
    
    int rows() const
    {
        return r;
    }
    int columns() const
    {
        return c;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "  === Matrix test === \n";
    Matrix myMatrix(5,5);
    cout << "Fill the matrix \n";
    /*
    for(int i = 0; i < 5;i++)
    {
        myMatrix.set(i, 0, i);
        cout << "Matrix ["<<i<<"]"<<"[0] = " << myMatrix.get(i, 0) << endl;
    }
    
    for(int j = 0; j < 3;j++)
    {
        myMatrix.set(0, j, j);
        cout << "Matrix [0][" <<j<<"] = " << myMatrix.get(j, 0) << endl;
    }
    */
    
    
    for(int i = 0; i < myMatrix.rows();i++){
        for(int j = 0; j<myMatrix.columns();j++)
        {
            myMatrix.set(i,j,i+j);
            cout << "["<<i<<"]["<<j<<"] = " <<myMatrix.get(i, j) << "   ";
        }
        cout << "\n";
        
    }
    
    cout << endl << endl;
    
    // Работаем с матрицей:
    /*
    int matrSum = 0;
    for(int i = 0; i < 5; i++)
    {
        matrSum += myMatrix.get(i, i);
    }
    cout << " Diagonal summ = " << matrSum << endl;
    */
    int minimum = myMatrix.get(0, 0);
    
    for(int i = 0; i < myMatrix.rows();i++){
        for(int j = 0; j<myMatrix.columns();j++)
        {
            if(myMatrix.get(i, j) < minimum)
                minimum = myMatrix.get(i, j);
           // myMatrix.set(i,j,i+j);
           // cout << "["<<i<<"]["<<j<<"] = " <<myMatrix.get(i, j) << "   ";
        }
        
    }
    vector<int> vect;
    for(int k = 0; k < 5; k++)
    {
        vect.push_back(k);
    }
    cout <<"Minimum element = " << minimum << "\n";
    
    cout << " Vector:" << endl;
    for(int x:vect)
    {
        cout << x << endl;
    }
    
    cout << endl;
    cout << "Vector * minimum value:" << endl;
    
    for(int x:vect)
    {
        cout << x*minimum << endl;
    }
    
    return 0;
}
