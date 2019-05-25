//
//  update_if_greater.cpp
//  Coursera_maximizer
//
//  Created by Alex Noyanov on 10.05.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

//#include <stdio.h>
//void UpdateIfGreater(int& first, int& second){
//    if(first > second){
//        int tmp = first;
//        first = second;
//        second = tmp;
//    }
//}
//

void UpdateIfGreater(int a, int& b){
    if(a > b){
        b = a;
    }
}
