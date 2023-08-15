#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	// Input matrix A elements
	double a11, a12, a13;
	double a21, a22, a23;
	double a31, a32, a33;
	double b1, b2, b3;

	cin >> a11 >> a12 >> a13 >> b1;
	cin >> a21 >> a22 >> a23 >> b2;
	cin >> a31 >> a32 >> a33 >> b3;

		// Calculate determinant of matrix A
	double detA = a11 * a22 * a33 + a12 * a23 * a31 + a13 * a21 * a32 -
				  a13 * a22 * a31 - a12 * a21 * a33 - a11 * a23 * a32;

	// Calculate solutions using Cramer's rule
	double x1 = (b1 * (a22 * a33 - a23 * a32) + b2 * (a13 * a32 - a12 * a33) + b3 * (a12 * a23 - a13 * a22)) / detA;
	double x2 = (b1 * (a23 * a31 - a21 * a33) + b2 * (a11 * a33 - a13 * a31) + b3 * (a13 * a21 - a11 * a23)) / detA;
	double x3 = (b1 * (a21 * a32 - a22 * a31) + b2 * (a12 * a31 - a11 * a32) + b3 * (a11 * a22 - a12 * a21)) / detA;

	// Output solutions
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	cout << "x3 = " << x3 << endl;

	return 0;
}
