// Prizon_cells_after_N_days.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
//#include <stdlib>
#include <string>

using namespace std;

#define NUM_OF_CELLS 8

int main()
{
   // std::cout << "Hello World!\n";

	int n;
	int cells[NUM_OF_CELLS];
	int result[NUM_OF_CELLS];
	//string inputData;

	for(int i = 0; i < NUM_OF_CELLS; i++)
	 cin >> cells[i];

	cin >> n;


	result[0] = 0;//cells[0];
	result[NUM_OF_CELLS - 1] = 0;//cells[NUM_OF_CELLS-1];


	for (int j = 0; j < n; j++)
	{ // Checking
		for (int i = 1; i < NUM_OF_CELLS-1;i++)
		{
			if ( (cells[i - 1] == 0 && cells[i + 1] == 0) || (cells[i - 1] == 1 && cells[i + 1] == 1))
			{
				//cells[i] = 1;
				result[i] = 1;
			}
			else {
				//cells[i] = 0;
				result[i] = 0;
			}
		}

		// Copy
		ing
		for (int i = 0; i < NUM_OF_CELLS; i++)
		{
			cells[i] = result[i];
		}
		/*
		// Testing
		cout << "Day [" << j << "] :";
		for (int k = 0; k < NUM_OF_CELLS; k++)
		{
			cout << " " << cells[k];
		}
		cout << endl;
		
		*/

	}

	cout << endl;
	for (int i = 0; i < NUM_OF_CELLS; i++)
	{
		cout << " " << cells[i] ;
	}

	




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
