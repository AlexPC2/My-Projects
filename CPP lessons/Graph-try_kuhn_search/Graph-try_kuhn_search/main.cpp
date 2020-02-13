//
//  main.cpp
//  Graph-try_kuhn_search
//
//  Created by Александр Ноянов on 09/06/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//


// Trying to search

#include <iostream>
#include <vector>
using namespace std;

int n=4,  // число вершин в первой доле (x)
    k=4;  // число вершин во второй доле (y)
 //vector < vector<int> > w; // матрица весов
#define S 4
int w[S][S] = { // матрица весов ребер
  0, 3, 4, 3,
  3, 6, 7, 6,
  4, 7, 8, 7,
  3, 6, 7, 6
};

vector<int> mt;
vector<char> used = { 1, 1, 1, 1};

bool try_kuhn (int v) {
    if (used[v])  return false;
    used[v] = true;
    for (size_t i=0; i< S; ++i) { //w[v].size()
        int to = w[v][i];
        if (mt[to] == -1 || try_kuhn (mt[to])) {
            mt[to] = v;
            return true;
        }
    }
    return false;
}


int main() {
    int curw, maxw=0;
    bool ready=false;
    vector<int> s(5);
    vector<vector<int> > maxs;
    for(int i1 = 1; i1 <= 4; i1++) {
        curw = 0;
        ready = false;
        s[1] = i1;
        for(int i2 = 1; i2 <= 4; i2++) {
            if(i2 == i1)
                continue;
            s[2] = i2;
            for(int i3 = 1; i3 <= 4; i3++) {
                if(i3 == i2 || i3 == i1)
                    continue;
                s[3] = i3;
                for(int i4 = 1; i4 <= 4; i4++) {
                    if(i4 == i3 || i4 == i2 || i4 == i1)
                        continue;
                    s[4] = i4;
                    ready = true;
                    curw = w[1][s[1]] + w[2][s[2]] + w[3][s[3]] + w[4][s[4]];
                    if(curw >= maxw) {
                        if(curw > maxw)
                            maxs.clear();
                        maxs.push_back(s);
                        maxw = curw;
//                        for(int k = 1; k <= 4; k++)
//                            maxs[k] = s[k];
                    }
                }
            }
        }
    }
    
    cout << maxw << endl;
    for(int i = 0; i < maxs.size(); i++) {
        for(int k = 1; k <= 4; k++)
        {
            cout << k << "-" << maxs[i][k] << " ";
        }
        cout << endl;
    }
/*
    //... чтение графа ...
    
    mt.assign (k, -1);
    for (int v=0; v<n; ++v) {
        used.assign (n, false);
        try_kuhn (v);
    }
    
    for (int i=0; i<k; ++i)
        if (mt[i] != -1)
            printf ("%d %d\n", mt[i]+1, i+1);
*/
}
