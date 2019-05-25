//
//  main.cpp
//  Coursera_files_stream
//
//  Created by Александр Ноянов on 24/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <iomanip>
//
//using namespace std;
//
//void Print(const vector<string> &names, const vector<double> &values, int width){
//    for(const auto &n: names){
//        cout << setw(width) << n << ' ';
//    }
//    cout << endl;
//    cout << fixed << setprecision(2);
//
//    for(const auto &v:values){
//        cout << setw(width) << v << ' ';
//    }
//    cout << endl;
//}
//
//int main(int argc, const char * argv[]) {
//
//    vector<string> names = {"a","b","c"};
//
//    vector<double> values = {5,0.1,0.0011};
//
//    cout << setfill('#');
//    cout << left;
//
//    Print(names, values, 5);
//
//    for(const auto &n : names){
//        cout << setw(10) << n << ' ';
//    }
//    cout << endl;
//    cout << fixed << setprecision(2);
//    cout << setw(10);
//
//    for(const auto &v:values){
//        cout << setw(10) << v << ' ';
//    }
//
//    cout << endl;
    
//    ofstream output("output.txt");
//    output << "Hello, world!" << endl;
//
//    string line;
//
//    ifstream input("output.txt");
//    if(input)
//    while(getline(input,line)){
//        cout << line;
//    }
    
//    return 0;
//}


#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

struct Duration{
    int hour;
    int min;
};

Duration ReadDuration(istream& stream){
    int h = 0;
    int m = 0;
    stream >> h;
    stream.ignore(1);
    stream >> m;
    return Duration{h,m};
}

//void PrintDuration(ostream& stream, const Duration& duration){
//    stream << setfill('0');
//    stream << setw(2) << duration.hour << ':' <<
//    setw(2) << duration.min;
//}

// Operator:
ostream& operator << (ostream& stream,Duration& duration){
    stream << setfill('0');
    stream << setw(2) << duration.hour << ':' <<
    setw(2) << duration.min;
    return stream;
}

istream& operator >> (istream& stream, Duration& duration){
    stream >> duration.hour;
    stream.ignore(1);
    stream >> duration.min;
    return stream;
}

int main(){
    //stringstream dur_ss("01:50");
    //Duration dur1 = ReadDuration(dur_ss);
    //PrintDuration(cout, dur1);
    Duration dur1;
    cin >> dur1;
    cout << dur1 << endl;
    
    return 0;
}



