//
//  main.cpp
//  Coursera_Rational_Calculator
//
//  Created by Александр Ноянов on 26/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class Rational
{
public:
    Rational() {num = 0; denom = 1;};
    Rational(int numerator, int denominator) ;
    
    //void Set(int numerator,int denominator);
    
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

/*
void Rational::Set(int numerator, int denominator)
{
    if(denominator == 0)
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
*/

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
    return Rational(l.Numerator()*r.Numerator(), l.Denominator()*r.Denominator());
}

bool operator < (Rational l, Rational r)
{
    return ((double)l.Numerator() / (double)l.Denominator()) < ((double)r.Numerator() / (double)r.Denominator());

}

// Operator to print :
ostream& operator << (ostream& stream,Rational& r)
{
    //stream << setfill('0');
    stream << setw(1) << r.Numerator()<< '/' <<
    setw(1) << r.Denominator();
    return stream;
}

ostringstream& operator << (ostringstream& stream,Rational r){
    stream << r.Numerator() << '/' <<
    r.Denominator();
    
    return stream;
}

// Operator to read:
istream& operator >> (istream& stream, Rational& r){
    if(!stream.eof()){
        int n,d;
        stream >> n;
        stream.ignore(1);
        stream >> d;
        r = Rational(n, d);
    }
    return stream;
}

int main(){
    
    Rational r1,r2;
    try{
    char opertr;
    cin >> r1;          // Reading first rational number
    cin.ignore(1);
    cin >> opertr;      // Reading operator
    cin.ignore(1);
    cin >> r2;          // Reading second rational number
    
    switch (opertr) {
        case '+':
        {
            Rational res = r1 + r2;
            cout << res << endl;
            break;
        }
            
        case '-':
        {
            Rational res = r1 - r2;
            cout << res << endl;
            break;
        }
            
        case '*':
        {
            Rational res = r1 * r2;
            cout << res << endl;
            break;
        }
            
        case '/':
        {
            Rational res = r1 / r2;
            cout << res << endl;
            break;
        }
            
        default:
            cout << "Wrong operator!" << endl;
            break;
        }
    }
    
    catch (const invalid_argument& e){
        cout << "Invalid argument" << endl;
    }
    catch (domain_error& e) {
        cout << "Division by zero" << endl;
        
    }
    
    // Output test;
    //cout << r1 << " " << opertr << " " << r2 << endl;
    
    return 0;
}

