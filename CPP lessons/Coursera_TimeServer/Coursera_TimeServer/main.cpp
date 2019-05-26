//
//  main.cpp
//  Coursera_TimeServer
//
//  Created by Александр Ноянов on 26/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

#include <iostream>
#include <string>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string AskTimeServer() {
    return "03:25:56";
    // Try one of this exceptions:
   //  throw system_error(error_code());
   //  throw exception();
}

class TimeServer {
public:
    string GetCurrentTime() {
        try{
            string str = AskTimeServer();
            LastFetchedTime = str;
            return str;
        }
        catch(system_error& e){
            cout << "Exception" << endl;
            return LastFetchedTime;
        }
    }
    
private:
    string LastFetchedTime = "00:00:00";
};

int main() {
    
    TimeServer ts;
    try {
        cout << ts.GetCurrentTime() << endl;
    } catch (exception& e) {
        cout << "Exception got: " << e.what() << endl;
    }
    return 0;
}
