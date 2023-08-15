#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int ayaya = 9;
	int x = -4;
	for (ayaya = 2; ayaya >= x; ayaya -= 2)
	{
		cout << ayaya << '-' << x << ',';
	}

	// write to program3_output.txt
	ofstream fout;
	fout.open("program3_output.txt");
	ayaya = 9;
	x = -4;
	for (ayaya = 2; ayaya >= x; ayaya -= 2)
	{
		fout << ayaya << '-' << x << ',';
	}
	fout.close();
	return 0;
}
