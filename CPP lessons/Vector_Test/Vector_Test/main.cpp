//
//  main.cpp
//  Vector_Test
//
//  Created by Alex Noyanov on 05.08.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

typedef  string dataType;

class vectorData{
private:
    vector<dataType> data;      // Vector of the following data
    
public:
    vectorData(dataType firstData){
        data.push_back(firstData);
    }
    void addData(dataType newData){
        data.push_back(newData);
    }
    // Deleting data from the vector:
    void deleteData(dataType deletedData){
        vector<dataType> newData;
        for(auto str:data){
            if(str == deletedData){
            }else{
                newData.push_back(str);
            }
        }
        data.clear();
        data = newData;
        newData.clear();
    }
    
    
    void printData(){
        for(auto str: data){
            cout << str << endl;
        }
    }
    
};

int main(int argc, const char * argv[]) {

    vectorData myVector("User1");
    cout << "   === Vector created === " << endl << " Input number of users:";
    int n;
    cin >> n;
    string newUserName;
    
    for(int i = 0; i < n; i++){
        cout << "New user name:";
        cin >> newUserName;
        myVector.addData(newUserName);
    }
    
    cout << "=== List of the users: ===" << endl;
    myVector.printData();
    
    
    for(int j = 0; j < 3; j++){
        cout << "Input user to delete:\n" ;
        cin >> newUserName;
        myVector.deleteData(newUserName);
    }
    
    
    
    cout << "=== List of the users: ===" << endl;
    myVector.printData();
    
    
    return 0;
}
