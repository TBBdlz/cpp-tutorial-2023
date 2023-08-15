#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int days, height;
	cout << "How many days? ";
	cin >> days;

	// Compute height of plant using  a Fibonacci-like sequence
	int i = 0, j = 1, k = 1; // Initialize the first three terms of the sequence

	for (int day = 1; day <= days; ++day)
	{
		height = k;
		k = i + j;
		i = j;
		j = k;
	}

	cout << days << "-days height is " << height << " cm." << endl;
	return 0;
}
