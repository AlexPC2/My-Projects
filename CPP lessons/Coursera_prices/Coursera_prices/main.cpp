//
//  main.cpp
//  Coursera_prices
//
//  Created by Alex Noyanov on 05.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 Написать программу вычисления стоимости покупки с учётом скидки.
 Скидка в X процентов предоставляется,
 если сумма покупки больше A рублей,
 в Y процентов - если сумма больше B рублей.
 
 В стандартном вводе содержится пять вещественных чисел,
 разделённых пробелом: N, A, B, X, Y (A < B) - где N - исходная стоимость товара.
 Выведите стоимость покупки с учётом скидки.
 */

/*
 100 110 120 5 10    100
 115 110 120 5 10    109.25
 150 110 120 5 12.5    131.25
 */
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double n,a,b,x,y;
    cin >> n >> a >> b >> x >> y;
    if(n > b){
        cout << n*(1-y/100) << endl;
    }else{
        if(n > a){
            cout << n*(1-x/100) << endl;
        }else{
            cout << n;
        }
    }
    
    return 0;
}
