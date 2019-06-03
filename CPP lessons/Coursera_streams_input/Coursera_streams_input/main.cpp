//
//  main.cpp
//  Coursera_streams_input
//
//  Created by Александр Ноянов on 25/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

/*
 В первой строке файла input.txt записаны два числа N и M. Далее в файле находится таблица из N строк и M столбцов,
 представленная в формате CSV (comma-separated values). Такой формат часто используется для текстового представления таблиц с данными:
 в файле несколько строк, значения из разных ячеек внутри строки отделены друг от друга запятыми. Ваша задача — вывести данные на экран
 в виде таблицы, размер ячейки которой равен 10, соседние ячейки отделены друг от друга пробелом. После последней ячейки пробела быть не должно. Гарантируется, что в таблице будет ровно N строк и M столбцов, значение каждой из ячеек — целое число.
 
 2 3
 1,2,3
 4,5,6
 
 */

using namespace std;

int main(int argc, const char * argv[]) {

    int n,m;
    cin >> n;
    cin >> m;
    string inputStr = "";
    
    vector<string> result;
    
    for(int i = 0; i<n ;i++){
        
        for(int j = 0; j<m; j++){
           // cin.width(10);
           // cin.right;
            if(j == m-1){
                cin >> inputStr;
                result.push_back(inputStr);
                //cout.width(10);
                //cout << inputStr << endl;
            }else{
                getline(cin,inputStr,',');
                result.push_back(inputStr);
                //cout.width(10);
                //cout << inputStr;
            }
        }
    }

    //result[0].erase(std::remove(result[0].begin(), result[0].end(), ' '), result[0].end());
    inputStr = result[0];
    inputStr = inputStr[inputStr.size()-1];
//    inputStr.erase(std::remove(inputStr.begin(), inputStr.end(), ' '), inputStr.end());
    result[0] = inputStr;
    for(int i = 0; i < result.size();i++){
            //cout.width(10);
        cout.width(10);
        cout.right;
        cout <<result[i];
        
    }
    
    return 0;
}
