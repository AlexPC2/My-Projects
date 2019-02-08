//
//  main.cpp
//  Lesson2-Kafedra
//
//  Created by Александр Ноянов on 02/01/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

/*
  _   __       __         _
 | | / /      / _|       | |
 | |/ /  __ _| |_ ___  __| |_ __ __ _
 |    \ / _` |  _/ _ \/ _` | '__/ _` |
 | |\  \ (_| | ||  __/ (_| | | | (_| |
 \_| \_/\__,_|_| \___|\__,_|_|  \__,_|
        
 */

/*
 
 Создайте программу с классом Kafedra, который включает в себя следующие данные – элементы о сотрудниках кафедры:
 - ФИО;
 - год рождения;
 - год поступления;
 - педагогический стаж;
 - степень;
 -- количество публикаций;
 - балл по рейтингу.
 В состав класса входят следующие функции-члены класса:
 - конструктор с параметрами;
 - функция , которая выводит ФИО преподавателя с минимальным баллом;
 - виртуальная функция просмотра текущего объекта.
 Производный класс Kafedra _1 содержит следующие элементы:
 - домашний адрес;
 - семейное положение;
 - переопределенную функцию просмотра состояния объекта.
 Введите пользовательские данные для работы с классом
 
 */

#include <iostream>
#include <list>
#include <iterator>

using namespace std;

class Prepod                                    // Преподаватель кафедры
{
private:
    string FIO;
    int birthYear;
    int yearOfAdmission;
    int learningTime;
    string degree;
    int numberOfPublications;
    int score;
public:
    int getScore()
    {
        return score;
    }
};

class Kafedra                                   // Кафедра
{
private:
    list<Prepod> ListOfPrepods;                 // Преподаватели кафедры
   // auto l_front = ListOfPrepods.begin();
public:
    Kafedra(const Prepod &pr)
    {
        ListOfPrepods.push_back(pr);
    }
    Prepod findLowestPrepod();                   // Поиск преподавателя с минимальными баллами
  
};

    Prepod Kafedra::findLowestPrepod()
{
    Prepod lowerPrepod;
    lowerPrepod = ListOfPrepods.front();
    int lowerScore = lowerPrepod.getScore();
    for(Prepod p : ListOfPrepods)           // Перебираем всех преподавателей в списке
    {
        if(p.getScore() < lowerScore)       // Если баллы меньше, то выбираем
        {
            lowerPrepod = p;
            lowerScore = p.getScore();
        }
    }
    return lowerPrepod;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}
