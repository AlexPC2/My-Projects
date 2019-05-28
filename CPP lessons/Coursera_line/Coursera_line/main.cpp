//
//  main.cpp
//  Coursera_line
//
//  Created by Alex Noyanov on 11.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

/*
 
 Люди стоят в очереди, но никогда не уходят из её начала, зато могут приходить в конец и уходить оттуда. Более того, иногда некоторые люди могут прекращать и начинать беспокоиться из-за того, что очередь не продвигается.
 
 Реализуйте обработку следующих операций над очередью:
 
 WORRY i: пометить i-го человека с начала очереди (в нумерации с 0) как беспокоящегося;
 QUIET i: пометить i-го человека как успокоившегося;
 COME k: добавить k спокойных человек в конец очереди;
 COME -k: убрать k человек из конца очереди;
 WORRY_COUNT: узнать количество беспокоящихся людей в очереди.
 Изначально очередь пуста.
 
 Формат ввода
 
 Количество операций Q, затем описания операций.
 
 Для каждой операции WORRY i и QUIET i гарантируется, что человек с номером i существует в очереди на момент операции.
 
 Для каждой операции COME -k гарантируется, что k не больше текущего размера очереди.
 
 Формат вывода
 
 Для каждой операции WORRY_COUNT выведите одно целое число — количество беспокоящихся людей в очереди.
 

 
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//int lineWorried(string command, )

int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    vector<int> line;
    vector<int> worriedCounter;
    string command;
    int number;
    int worryCount = 0;
    for(int i = 0;i < n; i++){
        cin >> command;
        if(command == "COME"){
             cin >> number;
            if(number > 0){
            for(int i = 0; i<number;i++){
                line.push_back(0);
              }
            }else{
                for(int i = number; i < 0; i++){
                    line.pop_back();
                }
            }
        }
            if(command == "WORRY"){
                 cin >> number;
                line[number] = 1;
            }
            if(command == "WORRY_COUNT"){
                 //cin >> number;
                for(int i = 0; i<line.size();i++){
                    if(line[i] == 1)
                        worryCount++;
                }
                worriedCounter.push_back(worryCount);
                worryCount = 0;
            }
        if(command == "QUIET"){
             cin >> number;
            line[number] = 0;
            }
            
        }
    
    for(auto x:worriedCounter){
        cout << x << endl;
    }
    
    return 0;
}
