//
//  main.cpp
//  Coursera_Mohth_work
//
//  Created by Alex Noyanov on 11.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 
 У каждого из нас есть ежемесячные дела, каждое из которых нужно выполнять в конкретный день каждого месяца: оплата счетов за электричество, абонентская плата за связь и пр. Вам нужно реализовать работу со списком таких дел, а именно, обработку следующих операций:
 
 ADD is
 
 Добавить дело с названием s в день i.
 
 NEXT
 
 Закончить текущий месяц и начать новый. Если новый месяц имеет больше дней, чем текущий, добавленные дни изначально не будут содержать дел. Если же в новом месяце меньше дней, дела со всех удаляемых дней необходимо будет переместить на последний день нового месяца.
 
 Обратите внимание, что количество команд этого типа может превышать 11.
 
 DUMP i
 
 Вывести все дела в день i.
 
 Изначально текущим месяцем считается январь. Количества дней в месяцах соответствуют Григорианскому календарю с той лишь разницей, что в феврале всегда 28 дней.
 
 Формат ввода
 
 Сначала число операций Q, затем описания операций.
 
 Названия дел s уникальны и состоят только из латинских букв, цифр и символов подчёркивания. Номера дней i являются целыми числами и нумеруются от 1 до размера текущего месяца.
 
 Формат вывода
 
 Для каждой операции типа DUMP в отдельной строке выведите количество дел в соответствующий день, а затем их названия, разделяя их пробелом. Порядок вывода дел в рамках каждой операции значения не имеет.
 
 NEXT:
 Закончить текущий месяц и начать новый. Если новый месяц имеет больше дней, чем текущий, добавленные дни изначально не будут содержать дел. Если же в новом месяце меньше дней, дела со всех удаляемых дней необходимо будет переместить на последний день нового месяца.
 
 Обратите внимание, что количество команд этого типа может превышать 11.
 
 */

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

map<string, bool> BuildReversedMap(const map<bool, string>& m) {
    map<string, bool> result;
    for (const auto& item : m) {
        result[item.second] = item.first;
    }
    return result;
}


int main(int argc, const char * argv[]) {
    
    map<bool, string> m;
    m[true] = "ffdf";
//    m[false] = "fdfd";
//    m[true] = "fdfff";
//    m[false] = "dgdg";
    cout << BuildReversedMap(m).size() << "\n";
    
    
    
    //map<int,string> months;
    
    int n;                          // Число операций
    cin >> n;
    string command;
    string job;
    int day;
    int monthNumber = 1; // January = 1
    
    vector<int> jobsToDo;
    //int numOfJobs = 0;
    vector<vector<string>> monthJobs(31+1); // Days from 1 to 31
    //vector<vector<int>> ;
    vector<vector<string>> resultJobs;
                      //  Jan Feb  Mar Apr May Jun Июль Авг Сент Окт Ноя Дек
    int calendar[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    for(int i = 0; i < n; i++) {
        cin >> command;
        if(command == "ADD"){
            cin >> day;
            cin >> job;
            monthJobs[day].push_back(job);
        }
        if(command == "DUMP"){
            vector<string> jobsOnDay;
            cin >> day;
            for(auto d: monthJobs[day]){
                jobsOnDay.push_back(d);
            }
            resultJobs.push_back(jobsOnDay);
        }
        
        if(command == "NEXT") {
            int thisMothDays = calendar[monthNumber];
            if(monthNumber < 12)
                monthNumber = monthNumber + 1;
            else
                monthNumber = 1;
            int nextMonthDays = calendar[monthNumber];

            if(nextMonthDays < thisMothDays) {  // Если число дней следующего месяца меньше предыдущего
                // перенести на след.месяц
                for(int ii = nextMonthDays+1; ii <= thisMothDays; ii++) {
                    monthJobs[nextMonthDays].insert(end(monthJobs[nextMonthDays]), begin(monthJobs[ii]), end(monthJobs[ii]));
                    monthJobs[ii].clear();
                }
////                cout << "   =====" << endl;
////                cout << "Копируем с последних чисел месяца на начало" << endl;
//               // monthJobs[27] = monthJobs[30];
////                monthJobs[26] = monthJobs[29];
////                monthJobs[25] = monthJobs[28];
//
//                monthJobs[27].insert(end(monthJobs[27]), begin(monthJobs[30]),end(monthJobs[30]));
//                monthJobs[27].insert(end(monthJobs[27]), begin(monthJobs[29]),end(monthJobs[29]));
//                monthJobs[27].insert(end(monthJobs[27]), begin(monthJobs[28]),end(monthJobs[28]));
//                monthJobs[30].clear();
//                monthJobs[29].clear();
//                monthJobs[28].clear();
//
////                for(auto x:monthJobs[30]){
////                    cout << "monthJobs[30] = " << x << endl;
////                }
////                for(auto x:monthJobs[29]){
////                    cout << "monthJobs[29] = " << x << endl;
////                }
////                for(auto x:monthJobs[28]){
////                    cout << "monthJobs[28] = " << x << endl;
////                }
////                for(auto x:monthJobs[27]){
////                    cout << "monthJobs[27] = " << x << endl;
////                }
//
            } else if(nextMonthDays > thisMothDays) {   // Если число дней больше предыдущего
                    for(int ii = thisMothDays+1; ii <= nextMonthDays; ii++)
                        monthJobs[ii].clear();
//                    // три дня становятся пустыми:
////                    for(auto s:monthJobs[30])
////                        s.clear();
////                    for(auto s:monthJobs[29])
////                        s.clear();
////                    for(auto s:monthJobs[28])
////                        s.clear();
//                    monthJobs[30].clear();
//                   // monthJobs[30].resize(0);
//                    //monthJobs[30].push_back(" ");
//                    monthJobs[29].clear();
//                    //monthJobs[29].resize(0);
//                   // monthJobs[29].push_back(" ");
//                    monthJobs[28].clear();
//                    //monthJobs[28].resize(0);
//                   // monthJobs[28].push_back(" ");
            }
        }
    }
    
    //vector<vector<string>> m1(0);       // Месяц
//    vector<vector<string>> m(31);
//    vector<vector<string>> mFeb(28);
//    vector<vector<string>> localMonth;
//    vector<vector<string>> jobs;
    
//    localMonth = m;
//
//    for(int i = 0; i < n;i++){
//        cin >> command;
//        if(command == "ADD"){
//            cin >> day;
//            cin >> job;
//            localMonth[day].push_back(job);
//        }
//        if(command == "NEXT"){
//            monthNumber++;
//            if(monthNumber == 1){           // Количество дней меньше, чем в предыдущем
//                mFeb.clear();
//                mFeb[25] = localMonth[28];
//                mFeb[26] = localMonth[29];
//                mFeb[27] = localMonth[30];
//                for(int i = 0; i < 25;i++){
//                    mFeb[i] = localMonth[i];
//                }
//
//            }else{
//                if(monthNumber == 2){       // Количество дней больше, чем в предыдущем
//
//                }else{
//
//                }
//            }
//        }
//
//        if(command == "DUMP"){
//            cin >> day;
//        }
//
//    }
    
//    for(int i = 0; i<resultJobs.size();i++){
//        cout << resultJobs[i].size() << " ";
//        if(resultJobs[i].size() != 0){
//        for(int j = 0; j < resultJobs[i].size(); j++)
//            {
//                cout<< resultJobs[i][j];
//            }
//            cout << endl;
//        }else{
//            cout << " " << endl;
//        }
//    }
    
    for(auto dj: resultJobs){
        cout << dj.size() << " ";
        for(auto s:dj){
            //if()
//            if(s.empty()){
//
//            }
            cout << s << " ";
        }
        cout << endl;
    }
    
    return 0;
}
