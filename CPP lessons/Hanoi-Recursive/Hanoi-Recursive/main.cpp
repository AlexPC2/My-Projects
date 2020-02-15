//
//  main.cpp
//  Hanoi-Recursive
//
//  Created by Alex Noyanov on 12.02.20.
//  Copyright © 2020 Popoff Developer Studio. All rights reserved.
//

/*
 Имеется три стержня с дисками разного размера, n- количество дисков. Необходимо вывести комбинацию для перекладывания
 дисков с первого на последний стержень, через второй. Нельзя класть диск меньшего размера под диск большего

 Решение:
 1) Переложить n-1 дисков со стержня А на В через С
 2) Переложить n-ый диск с А на С
 3) Переложить диски со стержня В на стержень С через А
 */

#include <iostream>

using namespace std;

void hanoi(int n, int from, int to, int through) {
    
    if(n > 0){
        // From A to B through C
        hanoi(n-1,from, through, to);
        //cout << n  << " " << from << " " << through << "  \n";
       
        cout << n << " "<< from << " " << to  << " \n";
        hanoi(n-1, through, to, from);
    }
}

int main(int argc, const char * argv[]) {
    hanoi(3,1,3,2);
    return 0;
}
