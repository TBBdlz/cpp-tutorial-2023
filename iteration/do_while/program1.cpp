#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int x = 37;
	while (x > 1)
	{
		cout << x % 2;
		x /= 2;
	}
	cout << endl
		 << "Ended with " << x;

	ofstream fout;
	fout.open("program1_output.txt");
	x = 37;
	while (x > 1)
	{
		fout << x % 2;
		x /= 2;
	}
	fout << endl
		 << "Ended with " << x;
	fout.close();
	return 0;
}
