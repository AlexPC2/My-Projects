//
//  main.cpp
//  Vector
//
//  Created by Александр Ноянов on 23.07.18.
//  Copyright © 2018 MPEI. All rights reserved.
//

#include <iostream>
#include <vector>       // Vector library

using namespace std;

// Print vector (for integers):
//void PrintVector(const vector<int>& v){
//    for(auto s : v)
//    cout << s << endl;
//}

// Print vector of bools:
void PrintVector(const vector<bool>& v){
    int i = 0;
    for(auto s: v) {     // Cycle "For each"
    //cout << s << endl;  // Print bool
    cout << i << ": " << s << endl; // Print number of this month
    i++;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    vector<int> days_in_month = {31,28,31,30,31};   // Vector of integers can be defined in this brakes '{}'
    
    // Check this month is leap:
    //if(true){
    //    days_in_month[1]++;     // Add another day in February (Second month)
    //}
    vector<bool> is_holiday(28,false);  // Creating vector and make it all 'false'
    is_holiday[22] = true;              // Change one position in this vector
    PrintVector(is_holiday);
    //PrintVector(days_in_month); // Print vector
    
    
     // Now let's change the size of this vector and print it:
   // is_holiday.resize(31);              // Change size of this vector
    // "resize" method can add empty part to this vector
    
    
    // To add the new part to this vector with value
    is_holiday.assign(31, false);   // Now this vector will be created with 'false' value
    is_holiday[7] = true;           // And now make 7 month as holiday
    
    return 0;
}
