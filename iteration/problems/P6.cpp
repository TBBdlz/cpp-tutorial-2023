#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int x, y, z;

	cout << "Input numbers: ";
	cin >> x >> y >> z;

	// Calculate GCD of x and y
	while (y != 0)
	{
		int temp = y;
		y = x % y;
		x = temp;
	}

	// Calculate GCD of (GCD of x and y) and z
	while (z != 0)
	{
		int temp = z;
		z = x % z;
		x = temp;
	}

	cout << "GCD = " << x << endl;

	return 0;
}
