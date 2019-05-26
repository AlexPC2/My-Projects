//
//  main.cpp
//  Coursera_Rational_Class
//
//  Created by Александр Ноянов on 25/05/2019.
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
    int num;
    int denom;
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

//int main(int argc, const char * argv[]) {


    int main(int argc, char* argv[])
    {
//        int a, b;
//        float p=0.0, q=0.0;
//        cin >> a >> b;
//
//        p=a; q=b;
//
//        for(int i=1; i<=a && i<=b; i++)
//        {
//            //float aa=a%i;
//            //float bb=b%i;
//            if(!(a%i) && !(b%i))
//            {
//                p=a/i;
//                q=b/i;
//            }
//        }
//        cout << endl;
//        cout << p;
//        cout << endl;
//        cout << q;
//
//        cin.ignore(2);
        {
            const Rational r(3, 10);
            if (r.Numerator() != 3 || r.Denominator() != 10) {
                cout << "Rational(3, 10) != 3/10" << endl;
                return 1;
            }
        }
        
        {
            const Rational r(8, 12);
            if (r.Numerator() != 2 || r.Denominator() != 3) {
                cout << "Rational(8, 12) != 2/3" << endl;
                return 2;
            }
        }
        
        {
            const Rational r(-4, 6);
            if (r.Numerator() != -2 || r.Denominator() != 3) {
                cout << "Rational(-4, 6) != -2/3" << endl;
                return 3;
            }
        }
        
        {
            const Rational r(4, -6);
            if (r.Numerator() != -2 || r.Denominator() != 3) {
                cout << "Rational(4, -6) != -2/3" << endl;
                return 3;
            }
        }
        
        {
            const Rational r(0, 15);
            if (r.Numerator() != 0 || r.Denominator() != 1) {
                cout << "Rational(0, 15) != 0/1" << endl;
                return 4;
            }
        }
        
        {
            const Rational defaultConstructed;
            if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1) {
                cout << "Rational() != 0/1" << endl;
                return 5;
            }
        }
        
        cout << "OK" << endl;
        return 0;
    
    return 0;
}
