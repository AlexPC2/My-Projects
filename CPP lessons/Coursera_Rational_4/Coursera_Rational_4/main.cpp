//
//  main.cpp
//  Coursera_Rational_4
//
//  Created by Александр Ноянов on 26/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class Rational {
public:
//    friend ostringstream& operator << (ostringstream& stream,Rational& r){
//        stream << setfill('0');
//        stream << setw(2) << r.Numerator()<< '/' <<
//        setw(2) << r.Denominator();
//        return stream;
//    }
//
//    friend ostream& operator << (ostream& stream,Rational& r){
//        //ostream& operator << (){
//            stream << setfill('0');
//            stream << setw(2) << r.Numerator()<< '/' <<
//            setw(2) << r.Denominator();
//            return stream;
//    }
    
    Rational(){num = 0; denom = 1;};
    Rational(int numerator, int denominator);
    int Numerator() const;
    int Denominator() const;
    void Set(int numerator,int denominator);
    string NumeratorStr() const;
    string DenominatorStr() const;
    
private:
    double num;
    double denom;
};

string Rational::NumeratorStr()const{
    stringstream stream;
    stream << num;
    return stream.str();
}

string Rational::DenominatorStr()const{
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
    return Rational(l.Numerator()*r.Denominator(),l.Denominator()*r.Numerator());
}

// Overloaded operators for printing to the streams:
//istream& operator >> (istream& stream, Rational& r){
//    stream >> r.Numerator();
//    stream.ignore(1);
//    stream >> r.Denominator();
//    return stream;
//}

// Operator to print :
ostream& operator << (ostream& stream,Rational& r){
    stream << setfill('0');
    stream << setw(2) << r.Numerator()<< '/' <<
    setw(2) << r.Denominator();
    return stream;
}

ostringstream& operator << (ostringstream& stream,Rational r){
//    string d,n = "";
//    Rational rt
//    stream << setfill('0');
//    stream << setw(2) << n<< '/' <<
//    setw(2) << d;
//    r.Set(atoi(n.c_str()),atoi(d.c_str()));
    //cout << r << endl ;
    //r.Set(r.Numerator(), r.Denominator());
    //cout << r << endl ;
    //stream << setfill('0');
    stream << r.Numerator() << '/' <<
    r.Denominator();
    
    return stream;
}

// Operator to read:
istream& operator >> (istream& stream, Rational& r){
//    if(!stream.eof() && stream.peek() != EOF)
//    {
    //if(stream.rdbuf()->in_avail() != 0){
    if (stream.peek() != '/'){
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
        ostringstream output;
        output << Rational(-6, 8);
        if (output.str() != "-3/4") {
            cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
            return 1;
        }
    }
    
    {
        istringstream input("5/7");
        Rational r;
        input >> r;
        bool equal = r == Rational(5, 7);
        if (!equal) {
            cout << "5/7 is incorrectly read as " << r << endl;
            return 2;
        }
    }
    
    {
        istringstream input("5/7 10/8");
        Rational r1, r2;
        input >> r1 >> r2;

        bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
        if (!correct) {
            cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
            return 3;
        }
        
        input >> r1;
        input >> r2;
        correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);

        if (!correct) {
            cout << "Read from empty stream shouldn't change arguments: " << r1 << " " << r2 << endl;
            return 4;
        }
    }
    
    cout << "OK" << endl;
    return 0;
}
