// Sum-Example1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{

	int b, c, n;

	int flag = 0;

	int sum = 0, sum1 = 0, sum2 = 0;
	cout << "Input your 3 numbers\n";		//Print message to input
	
	cin >> n;								//Read n

	while (n > 0)
	{
		if ((n / 10) > 0)
			cout << n % 10 << "+";
		else
			cout << n % 10;
		sum += n % 10;
		n /= 10;
	}

	cout << "=" << sum;

	cout << "\n";
	cin >> n;
    return 0;
}

