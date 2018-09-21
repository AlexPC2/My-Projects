//
//  main.cpp
//  Strings
//
//  Created by Александр Ноянов on 14.09.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[])
{
    // insert code here...
    //std::cout << "Hello, World!\n";
    string s = "A reference to the mapped value of the element with a key value equivalent to k";
    
    
    
    map<string,string> dict;
    dict["reference"] = "ссылка";
    dict["value"] = "значение";
    dict["element"] = "элемент";
    dict["key"] = "ключ";
    dict["equivalent to"] = "равно";

    vector<string> ss;
    
    string news;
    
    
    size_t pos = 0;
    while(pos != string::npos && pos < s.length()) {
        size_t end = s.find_first_of(" ,.;?!", pos);
        if(end != string::npos) {
            if(end-pos >= 1) {
                string subs = s.substr(pos, end-pos);
                ss.push_back(subs);
                cout << subs << endl;
                if(dict.find(subs) != dict.end())
                    subs = dict[subs];
                news += subs + " ";
            }
            pos = end+1;
        } else {
            pos = end;
        }
    }
    
    cout << news << endl;
    return 0;
}
