//
//  main.c
//  Fizteh2
//
//  Created by Александр Ноянов on 27/02/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the realEstateBroker function below.
 */
int realEstateBroker(int clients_rows, int clients_columns, int** clients, int houses_rows, int houses_columns, int** houses) {
    int numOfHouses = 0;
    
    int i = 0;
    int j = 0;
    
    
    for(i = 0; i < houses_rows; i++ )
    {
        for(j = 0; j<clients_rows; j++) {
            if( (houses[i][0] > clients[j][0]) && ( houses[i][1] <= clients[j][1]) )
            {
                numOfHouses++;
                break;
            }
        }
    }
    
    
    return numOfHouses;
    //return numOf;
}

int main()
{
    //FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
    
    char** nm = split_string(readline());
    
    char* n_endptr;
    char* n_str = nm[0];
    int n = strtol(n_str, &n_endptr, 10);
    
    int client_row,client_column, house_row,house_column;
    
    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }
    
    char* m_endptr;
    char* m_str = nm[1];
    int m = strtol(m_str, &m_endptr, 10);
    
    if (m_endptr == m_str || *m_endptr != '\0') { exit(EXIT_FAILURE); }
    
    int** clients = malloc(n * sizeof(int*));
    
    for (int clients_row_itr = 0; clients_row_itr < n; clients_row_itr++) {
        clients[clients_row_itr] = malloc(2 * (sizeof(int)));
        
        char** clients_item_temp = split_string(readline());
        
        for (int clients_column_itr = 0; clients_column_itr < 2; clients_column_itr++) {
            char* clients_item_endptr;
            char* clients_item_str = clients_item_temp[clients_column_itr];
            int clients_item = strtol(clients_item_str, &clients_item_endptr, 10);
            
            if (clients_item_endptr == clients_item_str || *clients_item_endptr != '\0') { exit(EXIT_FAILURE); }
            
            client_row = clients_row_itr;
            client_column = clients_column_itr;
            clients[clients_row_itr][clients_column_itr] = clients_item;
        }
    }
    
    int** houses = malloc(m * sizeof(int*));
    
    for (int houses_row_itr = 0; houses_row_itr < m; houses_row_itr++) {
        houses[houses_row_itr] = malloc(2 * (sizeof(int)));
        
        char** houses_item_temp = split_string(readline());
        
        for (int houses_column_itr = 0; houses_column_itr < 2; houses_column_itr++) {
            char* houses_item_endptr;
            char* houses_item_str = houses_item_temp[houses_column_itr];
            int houses_item = strtol(houses_item_str, &houses_item_endptr, 10);
            
            if (houses_item_endptr == houses_item_str || *houses_item_endptr != '\0') { exit(EXIT_FAILURE); }
            
            house_row = houses_row_itr;
            house_column = houses_column_itr;
            houses[houses_row_itr][houses_column_itr] = houses_item;
        }
    }
    
    int result = realEstateBroker(n,2,clients, m, 2, houses);
    printf("%d\n", result);
    //fprintf(fptr, "%d\n", result);
    
    //fclose(fptr);
    
    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);
    
    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        
        if (!line) { break; }
        
        data_length += strlen(cursor);
        
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }
        
        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);
        
        if (!data) { break; }
        
        alloc_length = new_length;
    }
    
    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }
    
    data = realloc(data, data_length);
    
    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");
    
    int spaces = 0;
    
    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }
        
        splits[spaces - 1] = token;
        
        token = strtok(NULL, " ");
    }
    
    return splits;
}
