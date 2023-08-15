#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	// program to solve Ax = b
	// we can declare and assign each element in matrix A
	// like this
	double a11 = 6.0, a12 = -10.0, a13 = 5.0;
	double a21 = 0.0, a22 = 10.0, a23 = 99.0;
	double a31 = -1.0, a32 = -1.0, a33 = 0.0;

	// declare element in vector x
	double x1, x2, x3;

	// now we declare and assign element in vector b
	double b1 = -4.0, b2 = 10.0, b3 = -2.0;

	// compute determinant
	double detA = a11 * a22 * a33 + a12 * a23 * a31 + a13 * a21 * a32 - a13 * a22 * a31 - a12 * a21 * a33 - a11 * a23 * a32;

	// use Cramer's rule
	x1 = (b1 * (a22 * a33 - a23 * a32) + b2 * (a13 * a32 - a12 * a33) + b3 * (a12 * a23 - a13 * a22)) / detA;
	x2 = (b1 * (a23 * a31 - a21 * a33) + b2 * (a11 * a33 - a13 * a31) + b3 * (a13 * a21 - a11 * a23)) / detA;
	x3 = (b1 * (a21 * a32 - a22 * a31) + b2 * (a12 * a31 - a11 * a32) + b3 * (a11 * a22 - a12 * a21)) / detA;

	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	cout << "x3 = " << x3 << endl;
	return 0;
}
