////
////  main.cpp
////  Coursera_students
////
////  Created by Александр Ноянов on 25/05/2019.
////  Copyright © 2019 MPEI. All rights reserved.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <iomanip>
//#include <algorithm>
//
//using namespace std;
//
//struct Student{
//    string name;
//    string surname;
////    string dateOfBirth; // Day-month-year
//    string day;
//    string month;
//    string year;
//};
//
//int main(int argc, const char * argv[]) {
//
//    int n;
//    cin >> n;
//    //cin.clear();
//    string request;
//    Student stud;
//    vector<Student> students;
//    // Reading all students to the vector
//    if(n != 0){
//    for(int i = 0;i<n;i++){
//        getline(cin,stud.name,' ');
//        getline(cin,stud.surname,' ');
//        getline(cin,stud.day,' ');
//        getline(cin,stud.month,' ');
//        getline(cin,stud.year,'\n');
//
//        students.push_back(stud);
//    }
//    string firstname = students[0].name;
//    firstname.erase(std::remove_if(firstname.begin(), firstname.end(), ::isspace), firstname.end());
//    string fName = "";
////  cout << firstname;
////    for(auto c:firstname){
////        if(c!=' '){
////            fName+=c;
////        }
////    }
////    int firstC = 0;
////    char s;
////    while(s=firstname[firstC] == ' ')
////        firstC++;
////    for(int i = firstC; i<firstname.size(); i++){
////        fName+=firstname[i];
////    }
//
//    students[0].name = firstname;
//    }
//
//    int k,num;
//    string command;
//    cin >> k;
//    if(k!=0){
//    for(int i = 0; i<k;i++){
//        cin >> command;
//        cin >> num;
//        if(command == "name"){
//                   // Number of student's name
//            //if(num <= n){
//            cout << students[num-1].name << " " << students[num-1].surname<< endl ;
//        }else{
//
//        if(command == "date"){
//            //cin >> num;         // Number of student's name
//            cout << students[num-1].day << "." << students[num-1].month <<"."<<students[num-1].year<< endl;
//        }else{
//            cout << "bad request"<< endl;
//        }
//
//        }
//    }
//    }
////    for(auto s: students){
////        cout << s.name << " | "<<s.surname << " | " << s.day<< " | " << s.month << " | "<<s.year << endl;
////    }
//
//
//    return 0;
//}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string nme;
    string brthdy;
};

int main() {
    int n;
    cin >> n;
    
    string first_name, last_name, day, month, year;
    vector<Student> students;
    for (size_t i = 0; i < n; ++i) {
        cin >> first_name >> last_name >> day >> month >> year;
        students.push_back(Student{
            first_name + " " + last_name, day + "." + month + "." + year
        });
    }
    
    int m;
    cin >> m;
    string query;
    int student_number;
    
    for (int i = 0; i < m; ++i) {
        cin >> query >> student_number;
        --student_number;
        if (query == "name" && student_number >= 0 && student_number < n) {
            cout << students[student_number].nme << endl;
        } else if (query == "date" && student_number >= 0 && student_number < n) {
            cout << students[student_number].brthdy << endl;
        } else {
            cout << "bad request" << endl;
        }
    }
    
    return 0;
}


