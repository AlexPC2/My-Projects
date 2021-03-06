// Vector_TimeMEasuring_Calculations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <math.h>
#include "vector"
#include <time.h>

using namespace std;

// function to add the elements of two arrays
void add(int n, float *x, float *y)
{
	for (int i = 0; i < n; i++)
		y[i] = x[i] + y[i];
}


// Now let's try some CUDA!
// CUDA Kernel function to add the elements of two arrays on the GPU
/*__global__
void add(int n, float *x, float *y)
{
	for (int i = 0; i < n; i++)
		y[i] = x[i] + y[i];
}
*/

int main(void)
{
	int value;

	// Measuring working time:
	clock_t start_clock = clock();

	// === The code to measure workint time ===

	int N = 1 << 20; // 1M elements

	float *x = new float[N];
	float *y = new float[N];

	// initialize x and y arrays on the host
	for (int i = 0; i < N; i++) {
		x[i] = 1.0f;
		y[i] = 2.0f;
	}

	// Run kernel on 1M elements on the CPU
	add(N, x, y);

	// Check for errors (all values should be 3.0f)
	float maxError = 0.0f;
	for (int i = 0; i < N; i++)
		maxError = fmax(maxError, fabs(y[i] - 3.0f));
	std::cout << "Max error: " << maxError << std::endl;

	// Free memory
	delete[] x;
	delete[] y;

	// Print working time:
	cout << "Working time : " << float(clock() - start_clock) / CLOCKS_PER_SEC << " Seconds" << endl;
	cin >> value;		// Holding the terminal window

	return 0;
}