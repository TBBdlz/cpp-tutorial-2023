#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

using std::pow;

// f(x) = x^2 + 10x  + 5
int main(int argc, char const *argv[])
{
	double a, h = 0.000000001; // small h
	cin >> a;
	double f_ah = pow(a + h, 2.0) + 10 * (a + h) + 5; // f(a+h)
	double f_a = pow(a, 2.0) + 10 * a + 5;
	double df_dx = (f_ah - f_a) / h;
	cout << df_dx << endl;
	return 0;
}
