//
//  main.cpp
//  File_streams_in_c++
//
//  Created by Александр Ноянов on 21/10/2018.
//  Copyright © 2018 MPEI. All rights reserved.
//

// A quick lesson about file streams in C++ language
// To work with files in C++ language file streams are used
// And "fstream" library required

// basic file operations
#include <iostream>
#include <fstream>
using namespace std;
using std::fstream;

int main () {
    ofstream myfile;
    myfile.open ("example.txt", fstream::out);
    myfile << "Writing this to a file.\n";
    myfile.close();
    return 0;
}
