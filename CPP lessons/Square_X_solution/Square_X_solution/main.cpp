//
//  main.cpp
//  Square_X_solution
//
//  Created by Alex Noyanov on 04.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
На вход вашей программе в стандартном вводе даны действительные коэффициенты A, B и C уравнения Ax² + Bx + C = 0.
 Выведите все его различные действительные корни в любом порядке.
 Гарантируется, что хотя бы один из коэффициентов не равен нулю.
 */

#include <iostream>
#include <cmath>

/*
 2 5 2    -0.5 -2
 2 4 2    -1
 2 1 2
 0 4 10    -2.5
 */

using namespace std;

int main(int argc, const char * argv[]) {
    
    double a,b,c;              // Coeficients in aX^2 + bX + C = 0
    double d;
    double x1,x2;
    
    cin >> a >> b >> c;             // Input all coefficients
    if(a != 0)                      // Check for type of
        {
            d = b*b - 4*a*c;        // Calculating discremenant
            if(d > 0){              // Checking two or one solution
                x1 = ((-1)*b+sqrt(d))/(2*a);
                x2 = ((-1)*b-sqrt(d))/(2*a);
                cout << x1 << " " << x2;
            }else{
                if(d == 0)
                    cout << (-b)/(2*a);
            }
        }else{
            if(b!=0)                // To avoid deviding at null
            cout << ((-1)*c)/b;
        }
    return 0;
}
