#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	for (int i = 10; i <= 40; i += 10)
	{
		for (int j = 2; j <= 6; j += 2)
		{
			cout << i + j << " ";
		}
	}

	// now write output to program1_output.txt
	ofstream fout;
	fout.open("program1_output.txt");
	for (int i = 10; i <= 40; i += 10)
	{
		for (int j = 2; j <= 6; j += 2)
		{
			fout << i + j << " ";
		}
	}
	fout.close();
	return 0;
}
