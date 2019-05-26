//
//  main.cpp
//  Coursera_Rational_exception
//
//  Created by Александр Ноянов on 26/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>

using namespace std;

class Rational
{
public:
    Rational() {num = 0; denom = 1;};
    Rational(int numerator, int denominator) ;
    
    int Numerator() const;
    int Denominator() const;
    
private:
    int num;
    int denom;
};

int Rational::Numerator() const{
    return num;
}

int Rational::Denominator()const{
    return denom;
}

Rational::Rational(int numerator, int denominator)
{
    if(denominator == 0)
        throw invalid_argument("Denominator == 0");
    if(numerator == 0){
        denom = 1;
        num = 0;
    } else {
        int a, b;
        double p=0, q=0;
        bool isNegative = false;
        
        if(numerator<0 && denominator<0){
            numerator = -numerator;
            denominator = -denominator;
        }
        
        if(numerator<0 && denominator>0){
            isNegative = true;
            numerator = numerator*(-1);
        }
        
        if(denominator<0 && numerator >0){
            isNegative = true;
            denominator = denominator*(-1);
        }
        
        a = numerator;
        b = denominator;
        
        p=a; q=b;
        
        for(int i=1; i<=a && i<=b; i++)
        {
            if(!(a%i) && !(b%i))
            {
                num = a/i;
                denom = b/i;
                
                if(isNegative == true){
                    num = num*(-1);
                }
            }
        }
    }
}

// Overloadede operators for Rational numbers:

Rational operator / (const Rational& l,const Rational& r)
{
    try {
        Rational res(l.Numerator()*r.Denominator(), l.Denominator()*r.Numerator());
        return res;
    } catch(const invalid_argument& e) {
        throw domain_error("Error in /");
    }
}

int main() {
    try {
        Rational r(1, 0);
        cout << "Doesn't throw in case of zero denominator" << endl;
        return 1;
    } catch ( std::invalid_argument& e) {
    }
    
    try {
        auto x = Rational(1, 2) / Rational(0, 1);
        cout << "Doesn't throw in case of division by zero" << endl;
        return 2;
    } catch (domain_error&) {
    }
    
    cout << "OK" << endl;
    return 0;
}
