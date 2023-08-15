#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// C / 5 = (F - 32) / 9
	// F = C * 9 / 5 + 32
	double celsius, fahrenheit;
	cin >> celsius;
	fahrenheit = celsius * 9.0 / 5.0 + 32;
	cout << fahrenheit << endl;
	return 0;
}
