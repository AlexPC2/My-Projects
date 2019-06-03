//
//  main.cpp
//  Coursera_classes_string
//
//  Created by Александр Ноянов on 16/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class ReversibleString
{
public:
    ReversibleString( const string& s){
        str = s;
       // resStr = "";
    }
    
//    void empty(){
//        str = "";
//    }
    ReversibleString(){}//resStr = "";}
    string ToString()const{
         return str;
        //return resStr;
    }
    
    void Reverse() {
//        string reversed;
//        for(int i = str.size(); i>=0;i--){
//            reversed+= str[i];
        reverse(begin(str),end(str));
        }
//
//       //str = reversed;
//       // std::reverse(str.begin(), str.end());
//        //resStr+=str+" ";
//    }
    
private:
    string str;
    //vector<string> allStr;
    //string resStr;
};

//int main(int argc, const char * argv[]) {
//    // insert code here...
//   // std::cout << "Hello, World!\n";
//
//    return 0;
//}


int main() {
    ReversibleString s("live");
    s.Reverse();
    cout << s.ToString() << " ";
    s.Reverse();
    const ReversibleString& s_ref = s;
    string tmp = s_ref.ToString();
    cout << tmp <<" ";

    ReversibleString empty;
    cout << '"' << empty.ToString() << '"';

    return 0;
}


