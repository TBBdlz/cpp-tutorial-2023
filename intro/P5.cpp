#include <iostream>
#include <cmath>
#define h 0.000000001

using std::cin;
using std::cout;
using std::endl;

using std::pow;

double f(double);
double f_prime(double);

int main(int argc, char const *argv[])
{
	double a;
	cin >> a;
	cout << f_prime(a) << endl;
	return 0;
}

double f(double x)
{
	return pow(x, 2.0) + 10 * x + 5;
}

double f_prime(double x)
{
	return (f(x + h) - f(x)) / h;
}
