//
//  main.cpp
//  Fiztech4
//
//  Created by Alex Noyanov on 28.02.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>

int compute(const char* t1, const char* t2) {
    int k = 0;
    for(int i = 0; i < strlen(t1); i++) {
        if(t1[i] == '1' || t2[i] == '1')
            k++;
    }
    return k;
}
int* acmTeam(int topic_count, const char** topic, int* result_count)
{
    int maxk = 0;
    int ncommands = 0;
    int* result = (int*)malloc(2*sizeof(int));
    *result_count = 2;
    for(int i = 0; i < topic_count; i++) {
        for(int j = i+1; j < topic_count; j++) {
            const char* topici = topic[i];
            const char* topicj = topic[j];
            int k = compute(topici, topicj);
            if(k > maxk) {
                maxk = k;
                ncommands = 1;
            } else if(k == maxk) {
                ncommands++;
            }
        }
    }
    result[0] = maxk;
    result[1] = ncommands;
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    const int n = 4;
    //const int m = 5;
    const char* bits[n] = {
        "10101",
        "11100",
        "11010",
        "00101"
    };
    
    int result_count = 0;
    int* result = acmTeam(n, bits, &result_count);
    for(int i = 0; i < result_count; i++) {
        std::cout << result[i] << ",";
    }
    //std::cout << result << ", " << result_count << "\n";
    return 0;
}
