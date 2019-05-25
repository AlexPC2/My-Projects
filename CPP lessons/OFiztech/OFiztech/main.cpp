//
//  main.cpp
//  OFiztech
//
//  Created by Alex Noyanov on 27.02.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <cassert>

int workbook(int n, int k, int arr_count, int* arr)
{
    assert(arr_count == n);
    assert(k > 0);
    int special_problem_count = 0;
    int page = 1;
    for(int chapter = 0; chapter < n; chapter++) {
        int problems_in_chapter = arr[chapter];
        int pages_in_chapter = problems_in_chapter / k;
        if(problems_in_chapter % k != 0)
            pages_in_chapter++;
        
        if(problems_in_chapter >= page) {
            // есть такие задачи!
            // ищем их тупым перебором, т.к. думать вечером тяжело
            for(int problem = 1; problem <= problems_in_chapter; problem++) {
                int page_of_problem = problem / k + page;
                if(problem % k == 0)
                    page_of_problem--;
                if(problem == page_of_problem)
                    special_problem_count++;
            }
        } else { // не будет ни одной совпадающей, т.к. номер страницы всегда больше номера задачи
            
        }
        
        page += pages_in_chapter;
    }
    return special_problem_count;
}

int main(int argc, const char * argv[])
{
    const int n = 10; // число глав
    const int k = 5; // число задач на страницу
    int arr[n] = { 3, 8, 15, 11, 14, 1, 9, 2, 24, 31 }; // числа, указывающие количество задач в главах
    std::cout << workbook(n, k, sizeof(arr)/sizeof(arr[0]), arr) << "\n";
    return 0;
}
