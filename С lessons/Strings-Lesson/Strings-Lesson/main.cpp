//
//  main.cpp
//  Strings-Lesson
//
//  Created by Alex Noyanov on 04.05.18.
//  Copyright © 2018 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    // Создание строк:
    char str1[10];             // Строка - массив из 10 символов. Начальное значение символов не определено.
    const char str2[10] = "Hello!";   // с инициализацией
    char str3[10]={'H', 'e', 'l', 'l', 'o', '\0'}; //Эквивалентно предыдущему.
    //char str4[10]="Very long line";   Ошибка - слишком длинная строка

    char* str5;
    /*Строка - указатель на символ. В большинстве случаев для ее использования
     потребуется выделить память.*/
    str5 = (char*) malloc(10);
    //free(str5);
    
    str5 = "Строка5-Test";
    
    printf(" Строка 2 =  \n");
    printf("%s\n",str2);
    printf(" Строка 5 =  \n");
    printf("%s\n",str5);
    
    
    // Функции для работы со строками:
    //char *strcat(char *dest, const char *scr);  // Объединяет исходную строку scr и результирующую строку
    //                                                  dest, присоединяя первую к последней. Возвращает dest.
    // Использование:
    char* str6;
    str6 = (char*) malloc(20);;
    str6 = "Строка6";
    //char str7[20] = strcat(str6, str2);
    char *buffer;               // Буфер обмена
    buffer = (char*) malloc(80);
    //str7 = strcat(str6, str2);
    strcat(buffer,str6);
    strcat(buffer,str2);
    printf(" Строка 6 + 2 =  \n");
    printf("%s\n",buffer);

    
    // int strlen(const char *s);   Возвращает длину строки s - количество символов,
    //  предшествующих нулевому символу.
    printf(" Длина строк: \n");   // Печатаем длину строк
    printf("Строка 6+2 = %ld \n", strlen(buffer));
    
    return 0;
}
