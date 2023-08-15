#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	for (int i = 8; i >= 0; i--)
	{
		cout << i << ' ';
	}

	// write to program1_output.txt
	ofstream fout;
	fout.open("program1_output.txt");
	for (int i = 8; i >= 0; i--)
	{
		fout << i << ' ';
	}
	fout.close();
	return 0;
}
