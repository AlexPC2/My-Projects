//
//  main.cpp
//  Coursera_Classes
//
//  Created by Александр Ноянов on 15/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

/*
Реализуйте класс, поддерживающий набор строк в отсортированном порядке.
 Класс должен содержать два публичных метода:
 */

#include <iostream>
#include <vector>
#include <string>
#include <map>
//
using namespace std;

//class SortedStrings {
//public:
//    void AddString(const string& s) {
//        // добавить строку s в набор
//        strs.push_back(s);
//    }
//    vector<string> GetSortedStrings() {
//        // получить набор из всех добавленных строк в отсортированном порядке
//        sort(begin(strs),end(strs));
//        return strs;
//    }
//private:
//    // приватные поля
//    vector<string>strs;
//};

class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        // добавить факт изменения имени на first_name в год year
        
        
    }
    void ChangeLastName(int year, const string& last_name) {
        // добавить факт изменения фамилии на last_name в год year
    }
    string GetFullName(int year) {
//        // получить имя и фамилию по состоянию на конец года year
//        string nameStr = firstName[year];
//        if(nameStr == "")
//            return  lastName[year]+" "+ "with unknown first name";
//        string lastStr = lastName[year];
//        if(nameStr == "")
//            return  firstName[year]+" "+ "with unknown last name";
//
//        return lastName[year] + " " + firstName[year];
        
        
    }
private:
    // приватные поля
    
//    map<int,string> firstName;
//    map<int,string> lastName;
    
};


//    void PrintSortedStrings(SortedStrings& strngs) {
//        for (const string& s : strngs.GetSortedStrings()) {
//            cout << s << " ";
//        }
//        cout << endl;
//    }
//
//
//int main(int argc, const char * argv[]) {
//        SortedStrings strings;
//
//        strings.AddString("first");
//        strings.AddString("third");
//        strings.AddString("second");
//        PrintSortedStrings(strings);
//
//        strings.AddString("second");
//        PrintSortedStrings(strings);
//        
//        return 0;
//    }
//

int main() {
    Person person;
    
    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << endl;
    }
    
    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }
    
    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }
    
    return 0;
}
