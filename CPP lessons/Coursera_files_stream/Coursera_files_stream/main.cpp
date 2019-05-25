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

    Duration(int h,int m){
        int total = h*60 +m;
        hour = total/60;
        min = total%60;
    }
    Duration(){};
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

// Operator to print :
ostream& operator << (ostream& stream,Duration& duration){
    stream << setfill('0');
    stream << setw(2) << duration.hour << ':' <<
    setw(2) << duration.min;
    return stream;
}
// Operator to read:
istream& operator >> (istream& stream, Duration& duration){
    stream >> duration.hour;
    stream.ignore(1);
    stream >> duration.min;
    return stream;
}

// Operator to compare to structures
Duration operator + (const Duration& lhs, const Duration& rhs){
    return Duration{lhs.hour+rhs.hour,lhs.min+rhs.min};
}
// Another operator for sorting
bool operator < (const Duration& lhs, const Duration& rhs){
    if(lhs.hour == rhs.hour)
        return lhs.min < rhs.min;
    return lhs.hour < rhs.hour;
}

int main(){
    //stringstream dur_ss("01:50");
    //Duration dur1 = ReadDuration(dur_ss);
    //PrintDuration(cout, dur1);
    
    Duration dur1,dur2;
    cin >> dur1;
    cin >> dur2;
    Duration dur3 = dur1 + dur2;
    cout << dur3 << endl;
    vector<Duration> v{ dur1,dur2,dur3};
    sort(v.begin(), v.end());               // Sorting from lower to higher
    for(auto s: v){
        cout << s << endl;
    }
    
    return 0;
}



