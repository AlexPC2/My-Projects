//
//  main.cpp
//  Coursera_Rational_5
//
//  Created by Александр Ноянов on 26/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>

using namespace std;

class Rational
{
public:
    Rational() {num = 0; denom = 1;};
    Rational(int numerator, int denominator);
    int Numerator() const;
    int Denominator() const;
    void Set(int numerator,int denominator);
    string NumeratorStr() const;
    string DenominatorStr() const;
    
private:
    int num;
    int denom;
    
public:
    // Increments operators:
    Rational& operator ++() {        // Prefix increment
        num+= denom;
        Set(num, denom);
        return *this;
    }
    
//    Rational operator ++(int){
//        Rational rt = *this;
//        ++*this;
//        return rt;
//    }
    
};

string Rational::NumeratorStr() const{
    stringstream stream;
    stream << num;
    return stream.str();
}

string Rational::DenominatorStr() const{
    stringstream stream;
    stream << denom;
    return stream.str();
}


int Rational::Numerator() const{
    return num;
}

int Rational::Denominator()const{
    return denom;
}

void Rational::Set(int numerator, int denominator)
{
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

//bool operator != (Rational l, Rational r){
//    if(l.Numerator() == r.Numerator() && l.Denominator() == r.Denominator()){
//        return false;
//    }else{
//        return true;
//    }
//}



Rational operator - (Rational l, Rational r){
    return Rational(l.Numerator()*r.Denominator()-r.Numerator()*l.Denominator(),l.Denominator()*r.Denominator());
}

Rational operator * (Rational l, Rational r){
    return Rational(l.Numerator()*r.Numerator(),l.Denominator()*r.Denominator());
}

Rational operator / (Rational l, Rational r){
    return Rational(l.Numerator()*r.Denominator(),l.Denominator()*r.Numerator());
}

// Operators < and >:
//bool operator > (Rational l, Rational r){
//    if(l.Numerator() == r.Numerator() && l.Denominator() == r.Denominator()){
//        return false;
//    }else{
//        if(l.Denominator() == r.Denominator()){
//            return l.Numerator() > r.Numerator();
//        }
//        return l.Denominator() > r.Denominator();
//    }
//}

bool operator < (Rational l, Rational r)
{
    return ((double)l.Numerator() / (double)l.Denominator()) < ((double)r.Numerator() / (double)r.Denominator());
//    if(l.Numerator() == r.Numerator() && l.Denominator() == r.Denominator()){
//        return true;
//    }else{
//        if(l.Denominator() == r.Denominator()){
//            return l.Numerator() < r.Numerator();
//        }
//        return l.Denominator() < r.Denominator();
//    }
}

// Operator to print :
ostream& operator << (ostream& stream,Rational& r){
    stream << setfill('0');
    stream << setw(2) << r.Numerator()<< '/' <<
    setw(2) << r.Denominator();
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
        r.Set(n, d);
    }
    return stream;
}




int main() {
    {
        const set<Rational> rs = {{1, 2}, {1, 25}, {3, 4}, {3, 4}, {1, 2}};
        if (rs.size() != 3) {
            cout << "Wrong amount of items in the set" << endl;
            cout << "Size of the set:" << rs.size() << endl;
            return 1;
        }
        
        vector<Rational> v;
        for (auto x : rs) {
            v.push_back(x);
        }
        if (v != vector<Rational>{{1, 25}, {1, 2}, {3, 4}}) {
            cout << "Rationals comparison works incorrectly" << endl;
            return 2;
        }
    }
    
    {
        map<Rational, int> count;
        ++count[{1, 2}];
        ++count[{1, 2}];
        
        ++count[{2, 3}];
        
        
        if (count.size() != 2) {
            cout << "Wrong amount of items in the map" << endl;
            
            return 3;
        }
    }
    
    cout << "OK" << endl;
    return 0;
}
