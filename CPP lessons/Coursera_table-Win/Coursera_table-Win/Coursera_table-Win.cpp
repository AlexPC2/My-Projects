// Coursera_table-Win.cpp: определяет точку входа для консольного приложения.
//


//
//  main.cpp
//  Coursera_table
//
//  Created by Александр Ноянов on 26/05/2019.
//  Copyright © 2019 MPEI. All rights reserved.
//

//
//  main.cpp
//  Tab
//
//  Created by Yuriy Noyanov on 26/05/2019.
//  Copyright © 2019 Yuri Noyanov. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

const char* test1 = "2 3\n"
"1,2,3\n"
"4,5,6\n";

long nextNumber(std::string& line)
{
	std::string s;
	size_t end = line.find(',');
	if (end != -1) {
		s = line.substr(0, end);
		line = line.substr(end + 1);
	}
	else {
		s = line;
		line = "";
	}
	std::string s2;
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-')
			s2 += s[i];
	}
	//s.erase( std::remove(s.begin(), s.end(), '\r'), s.end() );
	//s.erase( std::remove(s.begin(), s.end(), '\n'), s.end() );
	long v = atol(s2.c_str());
	return v;
}

int main(int argc, const char * argv[])
{
	//std::stringstream cin(test1);
	int N, M;
	std::cin >> N;
	std::cin >> M;
	std::string ss;
	std::cin >> ss;
	//long* A = new long[N*M];
	std::string line0;
	//std::getline(std::cin, line0);
	for (int i = 0; i < N; i++) {
		std::string line;
		std::getline(std::cin, line);
		//        if(line.length() == 0) {
		//            i--;
		//            continue;
		//        }
		//std::cerr << line;
		for (int j = 0; j < M; j++) {
			long v = nextNumber(line);
			std::cout << std::setw(10) << v;
			if (j != M - 1)
				std::cout << " ";
		} 
		if (i != N - 1)
			std::cout << std::endl;
	}
	//        char comma, eol;
	//        for(int i = 0; i < N; i++) {
	//            for(int j = 0; j < M; j++) {
	//                std::cin >> A[i][j];
	//                if(j != M-1)
	//                    std::cin >> comma;
	//            }
	//            std::cin >> eol;
	//        }


	//        std:: "         1          2          3\n"
	//    "         4          5          6\n";
	//    for(int i = 0; i < N; i++) {
	//            for(int j = 0; j < M; j++) {
	//                std::cout << std::setw(10) << A[i*M+j];
	//                    if(j != M-1)
	//                        std::cout << " ";
	//                }
	//                if(i != N-1)
	//                    std::cout << std::endl;
	//        }
	//
	//    delete[] A;
	return 0;
}
