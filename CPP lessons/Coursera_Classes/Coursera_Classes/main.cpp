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
#include <algorithm>
//
using namespace std;

struct Change {
    int year;
    string firstName;
    string lastName;
};


class Person
{
    // приватные поля данных
    vector<Change> changes;
    int yearOfBirth;
    
public:
//    Person()
//    {
//    }
    
    Person(string firstName, string lastName, int year){
        yearOfBirth = year;
        Change c = {year, firstName, lastName};
        changes.push_back(c);
    }
    
    void ChangeFirstName(int year, const string& first_name)
    {
        if(year > yearOfBirth)
        {
        Change c = {year, first_name, ""};
        changes.push_back(c);
        sort(changes.begin(), changes.end(), [](const Change& d1, const Change& d2) -> bool { return (d1.year < d2.year); } );
        }
    }
    void ChangeLastName(int year, const string& last_name) {
        if(year > yearOfBirth)
        {
        Change c = {year, "", last_name};
        changes.push_back(c);
        sort(changes.begin(), changes.end(), [](const Change& d1, const Change& d2) -> bool { return (d1.year < d2.year); } );
        }
    }
    string GetFullName (int year) const
    {
        string firstName, lastName;
        for(auto c : changes) {
            if(c.year > year)
                break;
            if(!c.firstName.empty())
                firstName = c.firstName;
            if(!c.lastName.empty())
                lastName = c.lastName;
        }
        if(firstName.empty() && lastName.empty()) {
            cout << "No person";
        } else {
            if(firstName.empty())
                cout << lastName << " with unknown first name";
            else if(lastName.empty())
                cout << firstName << " with unknown last name";
            else
                cout << firstName << " " << lastName;
        }
        return "";
    }
    
    string combineNames(string name, const std::vector<string>& names) const
    {
        for(int i = 0; i < names.size(); i++) {
            if(i == 0)
                name += " (";
            if(i != 0)
                name += ", ";
            name += names[names.size() - i - 1];
            if(i == names.size()-1)
                name +=")";
        }
        return name;
    }
    
    // получить все имена и фамилии по состоянию на конец года year
    string GetFullNameWithHistory(int year) const
    {
        string firstName, lastName;
        std::vector<string> prevFirstNames, prevLastNames;
        for(auto c : changes) {
            if(c.year > year)
                break;
            if(!c.firstName.empty() && c.firstName != firstName)
            {
                if(!firstName.empty() && find(begin(prevFirstNames), end(prevFirstNames), firstName) == prevFirstNames.end())
                    prevFirstNames.push_back(firstName);
                firstName = c.firstName;
            }
            if(!c.lastName.empty() && c.lastName != lastName) {
                if(!lastName.empty() && find(begin(prevLastNames), end(prevLastNames), lastName) == prevLastNames.end())
                    prevLastNames.push_back(lastName);
                lastName = c.lastName;
            }
        }
        
        firstName = combineNames(firstName, prevFirstNames);
        lastName = combineNames(lastName, prevLastNames);


        if(firstName.empty() && lastName.empty()) {
            cout << "No person";
        } else {
            if(firstName.empty())
                cout << lastName << " with unknown first name";
            else if(lastName.empty())
                cout << firstName << " with unknown last name";
            else
                cout << firstName << " " << lastName;
        }
        
        
        return "";
    }
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
/*
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
 */

/*
 
int main() {
    Person person;
    
    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullNameWithHistory(year) << endl;
    }
    
    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        cout << person.GetFullNameWithHistory(year) << endl;
    }
    
    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        cout << person.GetFullNameWithHistory(year) << endl;
    }
    
    person.ChangeFirstName(1990, "Polina");
    person.ChangeLastName(1990, "Volkova-Sergeeva");
    cout << person.GetFullNameWithHistory(1990) << endl;
    
    person.ChangeFirstName(1966, "Pauline");
    cout << person.GetFullNameWithHistory(1966) << endl;
    
    person.ChangeLastName(1960, "Sergeeva");
    for (int year : {1960, 1967}) {
        cout << person.GetFullNameWithHistory(year) << endl;
    }
    
    person.ChangeLastName(1961, "Ivanova");
    cout << person.GetFullNameWithHistory(1967) << endl;
    
    return 0;
}

*/
//
//int main() {
//    Person person("Polina", "Sergeeva", 1960);
//    for (int year : {1959, 1960}) {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    person.ChangeFirstName(1965, "Appolinaria");
//    person.ChangeLastName(1967, "Ivanova");
//    for (int year : {1965, 1967}) {
//        cout << person.GetFullNameWithHistory(year) << endl;
//    }
//
//    return 0;
//}
class Weather {
public:
    Weather(const string& new_state, int new_temperature) {
        state = new_state;
        temperature = new_temperature;
        cout << 'c';
    }
    ~Weather() {
        cout << 'd';
    }
private:
    string state;
    int temperature;
};

Weather GetMayWeather(int day) {
    if (day == 9) {
        cout << 'b';
        return {"clear", 10};
    } else {
        cout << 'b';
        return {"cloudy", 10};
    }
}

int main() {
    vector<int> days(2, 1);
    for (int day : days) {
        cout << 'a';
        Weather weather = GetMayWeather(day);
        cout << 'e';
    }
    cout << 'f';
    return 0;
}


