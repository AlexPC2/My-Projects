//
//  main.cpp
//  Coursera_Capitals
//
//  Created by Alex Noyanov on 12.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 Реализуйте справочник столиц стран.
 
 На вход программе поступают следующие запросы:
 
 CHANGE_CAPITAL country new_capital — изменение столицы страны country на new_capital, либо добавление такой страны с такой столицей, если раньше её не было.
 RENAME old_country_name new_country_name — переименование страны из old_country_name в new_country_name.
 ABOUT country — вывод столицы страны country.
 DUMP — вывод столиц всех стран.
 Формат ввода
 
 В первой строке содержится количество запросов Q, в следующих Q строках — описания запросов. Все названия стран и столиц состоят лишь из латинских букв, цифр и символов подчёркивания.
 
 Формат вывода
 
 Выведите результат обработки каждого запроса:
 
 В ответ на запрос CHANGE_CAPITAL country new_capital выведите
 
 Introduce new country country with capital new_capital, если страны country раньше не существовало;
 Country country hasn't changed its capital, если страна country до текущего момента имела столицу new_capital;
 Country country has changed its capital from old_capital to new_capital, если страна country до текущего момента имела столицу old_capital, название которой не совпадает с названием new_capital.
 В ответ на запрос RENAME old_country_name new_country_name выведите
 
 Incorrect rename, skip, если новое название страны совпадает со старым, страна old_country_name не существует или страна new_country_name уже существует;
 Country old_country_name with capital capital has been renamed to new_country_name, если запрос корректен и страна имеет столицу capital.
 В ответ на запрос ABOUT country выведите
 
 Country country doesn't exist, если страны с названием country не существует;
 Country country has capital capital, если страна country существует и имеет столицу capital.
 В ответ на запрос DUMP выведите
 
 There are no countries in the world, если пока не было добавлено ни одной страны;
 разделённые пробелами пары country/capital, описывающие столицы всех стран и упорядоченные по названию страны, если в мире уже есть хотя бы одна страна.

 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    map<string,string> CountryBooks;            //
    
    int k;
    cin >> k;
    string userCommand;
    vector<string> commands = {"CHANGE_CAPITAL","RENAME","ABOUT","DUMP"};
    
    for(int i = 0; i < k;i++){
        cin >> userCommand;                                                         // If cpmmand is wrong
        if(find(commands.begin(), commands.end(), userCommand) == commands.end()){
            cout << "Incorrect " << userCommand << ", skip" << endl;
            break;
        }else{
            
            if(userCommand == commands[0]){
                                            // Change_capital
                string country,newCapital;
                cin >> country;
                cin >> newCapital;
                // If country is new:
                if(CountryBooks.find(newCapital) == CountryBooks.end()){
                    cout << "Introduce new country " << country << " with capital " << newCapital << endl;
                    CountryBooks.insert(pair<string, string>(newCapital,country));
                }
                
                // If country hasn't changed:
                if(CountryBooks.find(country)->first == newCapital){
                    cout << "Country " << country << " hasn't changed its capital" << endl;
                }else{
                    // If country exist and changing:
                    auto it = CountryBooks.find(country);
                    
                    it->second = newCapital;
//                    string tmpCountry = CountryBooks[newCapital];
//                    CountryBooks.erase()
                }
                
                
            }
            if(userCommand == commands[1]){
                                            // Rename
                string old_country_name,new_country_name;
                cin >> old_country_name;
                cin >> new_country_name;
                
                if(CountryBooks.find(old_country_name) == CountryBooks.end()){
                                            // If country doesn't exist
                    cout << "Incorrect rename, skip" << endl;
                    break;
                }
            }
            if(userCommand == commands[2]){
                                            // About
            }
            if(userCommand == commands[3]){
                                            // Dump
//                for(auto m:CountryBooks){
                    if(CountryBooks.size() == 0){
                        cout << "There are no countries in the world"<<endl;
                    }else{
                        for(auto m:CountryBooks){
                            cout << m.second << " " << m.first << endl;
                        }
                    }
                
               // }
            }
            
        }
    }
    
    return 0;
}
