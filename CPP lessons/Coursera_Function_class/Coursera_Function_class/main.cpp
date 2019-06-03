//
//  main.cpp
//  Coursera_Function_class
//
//  Created by Alex Noyanov on 23.05.19.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class FunctionPart {
public:
    FunctionPart(char new_operation, double new_value) {
        operation = new_operation;
        value = new_value;
    }
    double Apply(double source_value) const {
//        if (operation == '+') {
//            return source_value + value;
//        } else {  // operation == '-'
//            return source_value - value;
//        }
        
        switch (operation) {
            case '+':
                return source_value+value;
                break;
            case '-':
                return source_value - value;
                break;
            case '*':
                return source_value * value;
                break;
            case '/':
                return source_value / value;
                break;
                
                
            default:
                break;
        }
        return 0;
    }
    void Invert() {
//        if (operation == '+') {
//            operation = '-';
//        } else {  // operation == '-'
//            operation = '+';
//        }
        switch (operation) {
            case '+':
                operation = '-';
                break;
            case '-':
                operation = '+';
                break;
            case '*':
                operation = '/';
                break;
            case '/':
                operation = '*';
                
            default:
                break;
        }
    }
private:
    char operation;
    double value;
};

class Function {
public:
    void AddPart(char operation, double value) {
        parts.push_back({operation, value});
    }
    double Apply(double value) const {
        for (const FunctionPart& part : parts) {
            value = part.Apply(value);
        }
        return value;
    }
    void Invert() {
        for (FunctionPart& part : parts) {
            part.Invert();
        }
        reverse(begin(parts), end(parts));
    }
private:
    vector<FunctionPart> parts;
};

