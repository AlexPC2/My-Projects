//
//  main.cpp
//  Coursera_Rational_3
//
//  Created by Александр Ноянов on 26/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>

using namespace std;

class Rational {
public:
    Rational(){num = 0; denom = 1;};
    Rational(int numerator, int denominator);
    
    int Numerator() const;
    int Denominator() const;
    
private:
    double num;
    double denom;
};

int Rational::Numerator() const{
    return num;
}

int Rational::Denominator()const{
    return denom;
}

Rational::Rational(int numerator, int denominator){
    if(numerator == 0){
        denom = 1;
        num = 0;
    }else{
        int a, b;
        float p=0.0, q=0.0;
        bool isNegative = false;
        
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
            // float aa=a%i;
            // float bb=b%i;
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
Rational operator + (Rational l,Rational r){
    return Rational(l.Numerator()*r.Denominator()+r.Numerator()*l.Denominator(),l.Denominator()*r.Denominator());
}

bool operator == (Rational l,Rational r){
    if(l.Numerator() == r.Numerator() && l.Denominator() == r.Denominator()){
        return true;
    }else{
        return false;
    }
}

Rational operator - (Rational l, Rational r){
    return Rational(l.Numerator()*r.Denominator()-r.Numerator()*l.Denominator(),l.Denominator()*r.Denominator());
}

Rational operator * (Rational l, Rational r){
    return Rational(l.Numerator()*r.Numerator(),l.Denominator()*r.Denominator());
}

Rational operator / (Rational l, Rational r){
    Rational res(l.Numerator()*r.Denominator(),l.Denominator()*r.Numerator());
    return res;
}

int main() {
    {
        Rational a(2, 3);
        Rational b(4, 3);
        Rational c = a * b;
        bool equal = c == Rational(8, 9);
        if (!equal) {
            cout << "2/3 * 4/3 != 8/9" << endl;
            return 1;
        }
    }
    
    {
        Rational a(5, 4);
        Rational b(15, 8);
        Rational c = a / b;
        bool equal = c == Rational(2, 3);
        if (!equal) {
            cout << "5/4 / 15/8 != 2/3" << endl;
            return 2;
        }
    }
    
    cout << "OK" << endl;
    return 0;
}
