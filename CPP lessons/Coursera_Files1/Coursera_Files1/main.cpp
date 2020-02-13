//
//  main.cpp
//  Coursera_Files1
//
//  Created by Alex Noyanov on 23.05.19.


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ifstream input("input.txt");
    ofstream output;
    vector<string> lines;
    string line;
    // Reading from Input
    while(getline(input,line)){
        cout << line << endl;
        lines.push_back(line);
    }

    // Writing to Output
    output.open("output.txt");
    for(auto str:lines){
        output << str+"\n";
    }

    output.close();
    return 0;

}




