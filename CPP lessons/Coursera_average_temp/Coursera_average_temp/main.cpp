//
//  main.cpp
//  Coursera_average_temp
//
//  Created by Alex Noyanov on 11.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//
/*
 Даны значения температуры, наблюдавшиеся в течение N подряд идущих дней. Найдите номера дней (в нумерации с нуля) со значением температуры выше среднего арифметического за все N дней.
 
 Гарантируется, что среднее арифметическое значений температуры является целым числом.
 
 Формат ввода
 
 Вводится число N, затем N неотрицательных целых чисел — значения температуры в 0-й, 1-й, ... (N−1)-й день.
 
 Формат вывода
 
 Первое число K — количество дней, значение температуры в которых выше среднего арифметического. Затем K целых чисел — номера этих дней.
 

 */


#include <iostream>
#include <vector>

using namespace std;

vector<int> temperature(int&n, vector<int> temp){
    int averageTemp;
    int sum = 0;
    vector<int> resultDays;
    for(auto x: temp){
        sum+=x;
    }
    averageTemp = sum/n;
    int daysCounter = 0;
    for(int i = 0;i<n;i++){
        if(temp[i] > averageTemp){
            resultDays.push_back(i);
            daysCounter++;
        }
    }
    n = daysCounter;
    return resultDays;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int k,x;
    cin >> k;
    vector<int> days;
    vector<int> resDays;
    for(int i =0; i < k;i++){
        cin >> x;
        days.push_back(x);
    }
    
    resDays = temperature(k, days);
    cout << k << endl;
    for(auto z:resDays){
        cout << z << " ";
    }
    
    return 0;
}
