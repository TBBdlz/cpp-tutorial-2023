#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	double x_1 = pow(2.0, 10.0);
	double y_2 = sqrt(3.0);
	double x_2 = pow(y_2, 2.1);
	double x_3 = 1.0 + 2.0 / (3.0 + 4.0 / (5.0 + 6.0 / 7.0));
	double x_4 = sin(M_PI / 100) + cos(M_PI / 100);
	double x_5 = log10(abs(-pow(999.0, 9.0) - 999.0));
	int x_6 = floor(M_PI) + ceil(M_PI);
	double z_7 = pow(1.1, 2.2);
	double y_7 = tan(z_7);
	double x_7 = log(abs(sin(y_7)));

	// print result to console
	cout << "x_1 = " << x_1 << endl;
	cout << "x_2 = " << x_2 << endl;
	cout << "x_3 = " << x_3 << endl;
	cout << "x_4 = " << x_4 << endl;
	cout << "x_5 = " << x_5 << endl;
	cout << "x_6 = " << x_6 << endl;
	cout << "x_7 = " << x_7 << endl;

	// now write to P1_sol.txt
	ofstream fout("P1_sol.txt");
	fout << "x_1 = " << x_1 << endl;
	fout << "x_2 = " << x_2 << endl;
	fout << "x_3 = " << x_3 << endl;
	fout << "x_4 = " << x_4 << endl;
	fout << "x_5 = " << x_5 << endl;
	fout << "x_6 = " << x_6 << endl;
	fout << "x_7 = " << x_7 << endl;
	// close file
	fout.close();
	return 0;
}
