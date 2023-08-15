#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	float pi = 22 / 7;
	int x = (2 * 5) % 3;
	int p = (99 / 7 / 6) - 100;
	int q = (5555 * 5555) % 2;
	int z = (int) 5.0 / 2.0 + 3.14 - 2.5;

	// output to console
	cout << "pi = " << pi << endl;
	cout << "x = " << x << endl;
	cout << "p = " << p << endl;
	cout << "q = " << q << endl;
	cout << "z = " << z << endl;

	// write to P2_sol.txt
	ofstream fout;
	fout.open("P2_sol.txt");
	fout << "pi = " << pi << endl;
	fout << "x = " << x << endl;
	fout << "p = " << p << endl;
	fout << "q = " << q << endl;
	fout << "z = " << z << endl;
	// close the file
	fout.close();
	return 0;
}
